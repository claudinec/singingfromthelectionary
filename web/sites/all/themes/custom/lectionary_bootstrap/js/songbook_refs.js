(function ($) {

    $(function() {
        /**
         * Adds links to songbook references on song pages.
         */

        $( "div.field-name-field-songbook-references > div > div" ).wrap(function() {
            return "<a href='/songbook/" + $( this ).contents().text() + "'></a>";
        });
    });

}(jQuery));
