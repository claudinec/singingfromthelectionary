(function ($) {

    $(function() {
        /**
         * Adds links to songbook references on song pages.
         */
        $( "div.field-name-field-songbook-references > div.col-md-4" ).wrap(function() {
            return "<a href='/songbook/" + $( this ).contents().text().replace(/([A-Z].*)(\s|\-)([0-9].*)/, '$1') + "'></a>";
        });
    });

}(jQuery));
