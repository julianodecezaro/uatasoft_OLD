<?php

	class Index_View extends TiE_View
	{
		
		public function __construct(&$_db)
		{
			//$this->ErrorCreator_Controller = new ErrorCreator_Controller($this);
			$this->db = $_db;
			$this->controller = new Index_Controller($this);
		}
		
		public function __ini()
		{
			
		}
		
	}

?>