(function ($) {

    $(function() {
        /**
         * Adds links to scripture references on song pages.
         */
        $( "div.field-name-field-lectionary-scripture-refer" ).wrap(function() {
            return "<a href='http://bible.oremus.org/?passage=" + $( this ).contents().text() + "'></a>";
        });
    });

}(jQuery));
