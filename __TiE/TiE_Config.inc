<?php

## LOCAL ##########################################################################################################################
	GLOBAL $_PATH;
	## ROOT ##
		$_PATH['PROJECT']['ROOT'] = getcwd();
	##########
	
	## HTML ##
		$_PATH['FRAMEWORK']['HTML'] = "TiE_Html/";
	##########

	## JQUERY ##
		$_PATH['FRAMEWORK']['JQUERY'] = "TiE_Jquery/";
		$_PATH['FRAMEWORK']['JQUERY_JS'] = $_PATH['FRAMEWORK']['JQUERY']."scripts/";
	############

	## UTILS ##
		$_PATH['FRAMEWORK']['UTILS'] = "TiE_Utils/";
		require_once $_PATH['FRAMEWORK']['UTILS']."TiE_Functions.inc";
		## FILE ##
			$_PATH['FRAMEWORK']['FILE'] = $_PATH['FRAMEWORK']['UTILS']."TiE_File/";
		##########
	###########

	## LAYOUT ##
		$_PATH['FRAMEWORK']['LAYOUT'] = "TiE_Layout/";
		$_PATH['FRAMEWORK']['IMAGES'] = $_PATH['FRAMEWORK']['LAYOUT']."Images/";
		$_PATH['FRAMEWORK']['CSS'] = $_PATH['FRAMEWORK']['LAYOUT']."Css/";
		## DECORATORS ##
		$_PATH['FRAMEWORK']['DECORATORS'] = $_PATH['FRAMEWORK']['LAYOUT']."TiE_Decorators/";
		################
		
	############

	## APPS ##
		$_PATH['FRAMEWORK']['APPS'] = "TiE_Apps/";
		$_PATH['FRAMEWORK']['APPS_CONTROLLER'] = $_PATH['FRAMEWORK']['APPS']."Controller/";
		$_PATH['FRAMEWORK']['APPS_MODEL'] = $_PATH['FRAMEWORK']['APPS']."Model/";
		$_PATH['FRAMEWORK']['APPS_VIEW'] = $_PATH['FRAMEWORK']['APPS']."View/";
		$_PATH['FRAMEWORK']['APPS_LAYOUT'] = $_PATH['FRAMEWORK']['APPS']."View/Layout/";
		$_PATH['FRAMEWORK']['APPS_RUN'] = $_PATH['FRAMEWORK']['APPS']."__Run/";
		$_PATH['FRAMEWORK']['APPS_DEFINES'] = $_PATH['FRAMEWORK']['APPS_RUN']."__Defines/";
	###########

	## SYSTEM ##
		$_PATH['FRAMEWORK']['SYSTEM'] = "TiE_System/";
		## MVC ##
			$_PATH['FRAMEWORK']['MVC'] = $_PATH['FRAMEWORK']['SYSTEM']."TiE_Mvc/";
			$_PATH['FRAMEWORK']['MVC_CONTROLLER'] = $_PATH['FRAMEWORK']['MVC']."TiE_Controller/";
			$_PATH['FRAMEWORK']['MVC_MODEL'] = $_PATH['FRAMEWORK']['MVC']."TiE_Model/";
			$_PATH['FRAMEWORK']['MVC_VIEW'] = $_PATH['FRAMEWORK']['MVC']."TiE_View/";
		#########
		
		## ERROR ##
			$_PATH['FRAMEWORK']['ERROR'] = $_PATH['FRAMEWORK']['SYSTEM']."TiE_Error/";
			## EXCEPTIONS ##
			$_PATH['FRAMEWORK']['EXCEPTIONS'] = $_PATH['FRAMEWORK']['ERROR']."TiE_Exceptions/";
			################
			
			## ERROR LIST ##
			$_PATH['FRAMEWORK']['ERROR_LIST'] = $_PATH['FRAMEWORK']['ERROR']."TiE_ErrorList/";
			################
			
			## LOGS ##
			$_PATH['FRAMEWORK']['LOGS'] = $_PATH['FRAMEWORK']['ERROR']."TiE_Logs/";
			##########
			
		###########		
		
	############
	
	## DB ##
		$_PATH['FRAMEWORK']['DB'] = "TiE_Db/";
	########
	
####################################################################################################################################	

## WEB #############################################################################################################################	
	GLOBAL $_PATH_WEB;
	## ROOT ##
		$_PATH_WEB['FRAMEWORK']['ROOT'] = "http://".$_SERVER['HTTP_HOST']."/__TiE/";
	##########
	
	## HTML ##
		$_PATH_WEB['FRAMEWORK']['HTML'] = $_PATH_WEB['FRAMEWORK']['ROOT']."TiE_Html/";
	##########
	
	## APPS ##
	$_PATH_WEB['FRAMEWORK']['APPS'] = $_PATH_WEB['FRAMEWORK']['ROOT']."TiE_Apps/";
	$_PATH_WEB['FRAMEWORK']['APPS_LAYOUT'] = $_PATH_WEB['FRAMEWORK']['APPS']."View/Layout/";
	##########
	
	## JQUERY ##
		$_PATH_WEB['FRAMEWORK']['JQUERY'] = $_PATH_WEB['FRAMEWORK']['ROOT']."TiE_Jquery/";
		$_PATH_WEB['FRAMEWORK']['JQUERY_JS'] = $_PATH_WEB['FRAMEWORK']['JQUERY']."Scripts/";
	############
	
	## UTILS ##
		$_PATH_WEB['FRAMEWORK']['UTILS'] = $_PATH_WEB['FRAMEWORK']['ROOT']."TiE_Utils/";
	###########
	
	## LAYOUT ##
		$_PATH_WEB['FRAMEWORK']['LAYOUT'] = $_PATH_WEB['FRAMEWORK']['ROOT']."TiE_Layout/";
		$_PATH_WEB['FRAMEWORK']['IMAGES'] = $_PATH_WEB['FRAMEWORK']['LAYOUT']."Images/";
		$_PATH_WEB['FRAMEWORK']['CSS'] = $_PATH_WEB['FRAMEWORK']['LAYOUT']."Css/";
	############
	
####################################################################################################################################

?>