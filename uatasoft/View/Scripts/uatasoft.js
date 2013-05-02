$(document).ready(function(){

	$('.dmenu_span').html('<span>. . .</span>');
	$('section .container').hide();
	$('#content1').show(0, function(){
		adjustContent();
	});

	$(window).resize(function(){ adjustContent() });

	$('#logo').click(function(){ _menu(1); });
	$('#nav2').click(function(){ _menu(2); });
	$('#nav3').click(function(){ _menu(3); });
	$('#nav4').click(function(){ _menu(4); });
	$('#nav5').click(function(){ _menu(5); });

	$('#nav1').hover(function(){ hoverSrc(this); });
	$('#nav2').hover(function(){ hoverSrc(this); });
	$('#nav3').hover(function(){ hoverSrc(this); });
	$('#nav4').hover(function(){ hoverSrc(this); });
	$('#nav5').hover(function(){ hoverSrc(this); });

	$('#nav1').mouseout(function(){ houtSrc(this); });
	$('#nav2').mouseout(function(){ houtSrc(this); });
	$('#nav3').mouseout(function(){ houtSrc(this); });
	$('#nav4').mouseout(function(){ houtSrc(this); });
	$('#nav5').mouseout(function(){ houtSrc(this); });

	function hoverSrc(_this){
		var parse = '.png';
		var _src = $(_this).attr('src');
		var sp = _src.split(parse);
		if(!$(_this).attr('ishover')){
			$(_this).attr('src', sp[0]+'_hover'+parse);
			$(_this).attr('ishover', 'true');			
			var title = $(_this).attr('_title');
			if(title){ $('.dmenu_span').html('<span>'+title+'</span>'); $('.dmenu_span').show(); }
		}
	}

	function houtSrc(_this){
		var parse = '_hover.png';
		var _src = $(_this).attr('src');
		var sp = _src.split(parse);
		if($(_this).attr('ishover')){
			$(_this).attr('src', sp[0]+'.png');
			$(_this).removeAttr('ishover');
			$('.dmenu_span').hide();
		}		
	}

	function _menu(_id){
		$('section .container').hide();
		$('#content'+_id).show(0, function(){
			adjustContent();
		});
	}	

	function adjustContent(){		
		//alert($(window).height() +'-'+$('nav').outerHeight());		
		$('section .container').css({ 'max-height' : ($(window).height() - $('nav').outerHeight()
													 - ($('section .container').outerHeight() - $('section .container').height())),
									  'overflow' : 'auto'
									});
		$('section').css({
							'margin-top' : $('nav').outerHeight()
						});
		$('#bg').css({ top: '75px', right : '0px', width: $(window).width/2, height: ($(window).height() - $('nav').outerHeight()
													 - ($('section .container').outerHeight() - $('section .container').height())) });
	}

	$('.menu').mousemove(function(e){		
		$('#dmenu').show();
		$('#dmenu').css({ top: $('.menu').offset().top + $('.menu').outerHeight() + 15, 
						  left: e.pageX - ($('#dmenu').width() / 2) });
		$('.dmenu_span').show();
		$('.dmenu_span').css({ top: $('#dmenu').offset().top + ($('#dmenu').height()/2) - ($('.dmenu_span span').height()/2), 
						  left: $('#dmenu').offset().left + ($('#dmenu').width()/2)  - ($('.dmenu_span span').width()/2)});
	});

	$('.menu').mouseout(function(e){
		$('#dmenu').hide();
		$('.dmenu_span').hide();		
	});
	

});