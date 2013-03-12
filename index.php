<?php

ini_set("display_errors", true);

require_once "config.inc";
require_once "TiE_Default.inc";
require_once "View/TesteClass_View.class";
require_once "Controller/TesteClass_Controller.class";
require_once "Model/TesteClass_Model.class";
require_once "View/TesteClass_View.class";
require_once "Model/Table/Usuario_Table.class";
require_once "Model/Table/Teste_Table.class";

$app = new TiE_Program(1);
$app->setTitle("HHH");
$app->setClass("TesteClass_View");
$app->setDecorator("DEFAULT_HTML");
$app->run();

?>