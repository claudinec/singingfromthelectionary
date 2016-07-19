(function ($) {

    $(function() {
        /**
         * Adds links to scripture references on song pages.
         */
        $( "div.field-name-field-scripture-references > div.col-md-4" ).wrap(function() {
            return "<a href='http://bible.oremus.org/?passage=" + $( this ).contents().text() + "'></a>";
        });
    });

}(jQuery));
