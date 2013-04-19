<?php

ini_set("display_errors", true);

require_once "config.inc";
require_once "TiE_Default.inc";
require_once "View/Index_View.class";
require_once "Controller/Index_Controller.class";
//require_once "Model/TesteClass_Model.class";
//require_once "Model/Table/Usuario_Table.class";
//require_once "Model/Table/Teste_Table.class";

GLOBAL $_PW;
$favicon = $_PW['IMAGES']."us.ico";
$app = new TiE_Program(1);
$app->addInHeader("<link rel=\"shortcut icon\" href=\"".$favicon."\" type=\"image/png\" />");
$app->addInHeader(style($_PW['CSS']."uatasoft.css"));
$app->setTitle("UATASOFT");
$app->setClass("Index_View");
$app->setDecorator("DEFAULT_HTML");
$app->run();

?>