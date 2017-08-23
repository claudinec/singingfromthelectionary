(function ($) {

    $(function() {
        /**
         * Adds links to scripture references on song pages.
         */
        $( "div.field-group.field-group-inline.clearfix.group-lectionary-scripture-ref" ).wrap(function() {
            return "<a href='http://bible.oremus.org/?passage=" + $( this ).contents().text().replace(s/\s\s/g, "") + "'></a>";
        });
    });

}(jQuery));
