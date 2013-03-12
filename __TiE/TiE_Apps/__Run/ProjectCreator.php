<?php
	
	ini_set("display_errors", 1);
	error_reporting(E_ALL ^ E_NOTICE);
	
	require_once "/var/www/__TiE/default.inc";
	GLOBAL $_PATH;
	require_once $_PATH['FRAMEWORK']['APPS_CONTROLLER']."ProjectCreator_Controller.class";
	require_once $_PATH['FRAMEWORK']['APPS_MODEL']."ProjectCreator_Model.class";
	require_once $_PATH['FRAMEWORK']['APPS_VIEW']."ProjectCreator_View.class";	
	require_once $_PATH['FRAMEWORK']['EXCEPTIONS']."TiE_File_Exception.class";
	
	$ProjectCreator_View = new ProjectCreator_View();
	$ProjectCreator_View->run();
	
?>