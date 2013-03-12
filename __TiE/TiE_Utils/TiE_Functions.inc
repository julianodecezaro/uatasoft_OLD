<?php

    GLOBAL $_PATH;
    require_once $_PATH['FRAMEWORK']['HTML']."TiE_HTML_components.class";

    function dump ($_obj)
    {
        echo "<pre>";
        var_dump($_obj);
        echo "</pre>";
    }

    function exibe ($_obj)
    {
        echo "<pre>";
        print_r($_obj);
        echo "</pre>";
    }

    function style ($_href = "", $_generate = false)
    {
        $style = new style($_href);
		if($_generate) {
			$style->generate();
		}else{
			return $style->getHTML();
		}
    }

    function script ($_src = "", $_generate = false)
    {
        $script = new script($_src);
		if($_generate) {
			$script->generate();
		}else {
			return $script;
		}
    }
	
	function strpart($_separator, $_string, $_part = 0)
	{
		$explode = explode($_separator, $_string);
		return $explode[$_part];
	}
	
	function __first($_arr, $_char)
	{
		$_count = count($_arr);
		if($_count > 2){
			for($i = 1; $i < ($_count); $i++){
				if($i > 1) $str .= $_char;
				$str .= $_arr[$i];
			}
			$p = $_arr[0];
		}else {
			$str = $_arr[1];
			$p = $_arr[0];
		}
		$obj = (object)null;
		$obj->value = $str;
		$obj->rest = $p;
		return $obj;
	}
	
	function __last($_arr, $_char)
	{
		$_count = count($_arr);
		if($_count > 2){
			for($i = 0; $i < ($_count-1); $i++){
				if($i > 0) $str .= $_char;
				$str .= $_arr[$i];
			}
			$p = $_arr[$_count-1];
		}else {
			$str = $_arr[0];
			$p = $_arr[1];
		}
		$obj = (object)null;
		$obj->value = $str;
		$obj->rest = $p;
		return $obj;
	}
	
	/*function bind($_element, $_event, $_method = "") 
	{
		$element = $_element;
		$element->setAttribute($_event, $_method);
		return $element;
	}*/

?>