<?php
	
	ini_set("display_errors", 1);
	error_reporting(E_ALL ^ E_NOTICE);
	
	require_once "/var/www/__TiE/default.inc";
	GLOBAL $_PATH;
	GLOBAL $_PATH_WEB;
	require_once $_PATH['FRAMEWORK']['APPS_CONTROLLER']."ErrorCreator_Controller.class";
	require_once $_PATH['FRAMEWORK']['APPS_MODEL']."ErrorCreator_Model.class";
	require_once $_PATH['FRAMEWORK']['APPS_VIEW']."ErrorCreator_View.class";	
	//require_once $_PATH['FRAMEWORK']['EXCEPTIONS']."TiE_File_Exception.class";
	
	//$ErrorCreator_View = new ErrorCreator_View();
	//$ErrorCreator_View->run();
	
	$program = new TiE_Program(2, true);
	//dump(style($_PATH_WEB['FRAMEWORK']['APPS_LAYOUT']."ErrorCreator/Css/Style.css"));
	//style($_PATH_WEB['FRAMEWORK']['APPS_LAYOUT']."ErrorCreator/Css/Style.css", true);
	$program->addInHeader(style($_PATH_WEB['FRAMEWORK']['APPS_LAYOUT']."ErrorCreator/Css/Style.css"));
	$program->run();
	
?>