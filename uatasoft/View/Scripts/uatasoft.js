$(document).ready(function(){

	$('section .container').hide();
	$('#content1').show(0, function(){
		adjustContent();
	});

	$(window).resize(function(){ adjustContent() });

	$('#nav1').click(function(){ _menu(1); });
	$('#nav2').click(function(){ _menu(2); });
	$('#nav3').click(function(){ _menu(3); });
	$('#nav4').click(function(){ _menu(4); });
	$('#nav5').click(function(){ _menu(5); });

	$('#nav1').hover(function(){ hoverSrc(this); });
	$('#nav2').hover(function(){ hoverSrc(this); });
	$('#nav3').hover(function(){ hoverSrc(this); });
	$('#nav4').hover(function(){ hoverSrc(this); });
	$('#nav5').hover(function(){ hoverSrc(this); });

	function hoverSrc(_this){
		var parse = '.png';
		var _src = $(_this).attr('src');
		var sp = _src.split(parse);
		if(!$(_this).attr('ishover')){
			$(_this).attr('src', sp[0]+'_hover'+parse);
			$(_this).attr('ishover', 'true');
		}
	}

	function houtSrc(_this){
		var parse = '.png';
		var _src = $(_this).attr('src');
		var sp = _src.split(parse);
		if(!$(_this).attr('ishover')){
			$(_this).attr('src', sp[0]+'_hover'+parse);
			$(_this).attr('ishover', 'true');
		}
	}

	function _menu(_id){
		$('section .container').hide();
		$('#content'+_id).show(0, function(){
			adjustContent();
		});
	}	

	function adjustContent(){
		//alert($(window).height() +'-'+$('header').outerHeight()+'-'+$('nav').outerHeight());
		$('section .container').css({ 'max-height' : ($(window).height() - $('header').outerHeight() - $('nav').outerHeight() 
														- ($('section .container').outerHeight() - $('section .container').height())),
									  'overflow' : 'auto'
									});
	}

});