<?php

GLOBAL $DEFAULT_DB;
$DEFAULT_DB = "pg://postgres:jc23met05@localhost/teste"; #banco://usuario:senha@servidor/base

GLOBAL $_PW; #PATH_WEB
## ROOT ##
	$_PW['ROOT'] = "http://".$_SERVER['HTTP_HOST']."/uatasoft/";	
############

$_PW['CONTROLLER'] = $_PW['ROOT']."Controller/";
$_PW['VIEW'] = $_PW['ROOT']."View/";

## LAYOUT ##
$_PW['LAYOUT'] = $_PW['VIEW']."Layout/";
$_PW['IMAGES'] = $_PW['LAYOUT']."Images/";
$_PW['CSS'] = $_PW['LAYOUT']."Css/";
$_PW['SCRIPTS'] = $_PW['VIEW']."Scripts/";
$_PW['JS'] = $_PW['SCRIPTS'];
############

?>