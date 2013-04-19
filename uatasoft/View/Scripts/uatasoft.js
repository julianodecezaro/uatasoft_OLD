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