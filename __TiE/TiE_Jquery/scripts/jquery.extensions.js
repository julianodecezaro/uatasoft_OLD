//altura do elemento considerando bordas e padding
$.fn.extend({ rHeight: function() {
        var totalHeight = this.height() ? this.height() : 0;
        totalHeight += parseInt(this.css('padding-top'), 10) + parseInt(this.css('padding-bottom'), 10);
        totalHeight += parseInt(this.css('margin-top'), 10) + parseInt(this.css('margin-bottom'), 10);
        totalHeight += parseInt(this.css('borderTopWidth'), 10) + parseInt(this.css('borderBottomWidth'), 10);
        return totalHeight;
    }
});

//largura do elemento considerando bordas e padding
$.fn.extend({ rWidth: function() {
        var totalWidth = this.width();
        totalWidth += parseInt(this.css('padding-left'), 10) + parseInt(this.css('padding-right'), 10);
        totalWidth += parseInt(this.css('margin-left'), 10) + parseInt(this.css('margin-right'), 10);
        totalWidth += parseInt(this.css('borderLeftWidth'), 10) + parseInt(this.css('borderRightWidth'), 10);
        return totalWidth;
    }
});