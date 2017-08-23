# CHANGELOG

## Release 0.9.3 (23 Aug 2017)

Resolves:
- #57
- #58

## Release 0.9.2 (25 Apr 2017)

In progress:
- #49 Trim whitespace in Oremus link

Resolves:
- #50 Front page view
- #51 Nav bar style
- #52 Remove home link from nav bar
- #53 Scripture index vertical space

## Release 0.9.1 (21 Feb 2017)

- Interface enhancements
- Bug fixes
- Resolves #26, #27, #28, #29, #30, #31, #32, #34, #35, #37, #38, #39, #40, #41, #42, #44, #45, #46, #47.

## Release 0.9 (11 May 2016)

- Add songs admin view
- Add unique Imported song ID to facilitate imports
- Enable Disqus on lectionary pages and songbooks

## Release 0.8 (5 Apr 2016)

- Enable PHPMailer. Closes #22.
- Add to composer: phpmailer, libraries, entityqueue.
- Clone default frontpage view to Lectionary front page and add entity queue.  
  Resolves #24.

## Release 0.7 (4 Apr 2016)

- Temporary change to songbook jQuery to use bare/un-clean URLs until this is enabled.
- Add Strongarm variables for Display Suite, Search, Token.
- Add Strongarm variables for site information.
- Add Libraries and Backup Migrate S3 modules (Drush).
- Update Display Suite Search result settings for songbook.
- Require Views.
- Test data imports on staging.
- Closes #1, #2, #5, #10, #12.

## Release 0.6 (2 Apr 2016)

- Fix regular expression for song references.
- Add Strongarm settings for theme and jQuery.
- Upload file to songbook import.
- Closes #20.
- See #12.

## Release 0.5 (30 Mar 2016)

- Add display suite layouts to Lectionary date and Song content types.
- Enable Strongarm. Display full content of lectionary pages in front page view (/frontpage).
- Promote Lectionary page to front by default.
- Add Display Suite and Strongarm settings for Songbooks feature.
- Song index importer/exporter to use tab- rather than comma-separated values.
- Update Song index import settings.
- Require jQuery Update module.
- jQuery to add songbook references in song displays.
- Update display and path settings for songbooks and songs. Add tamper to songbook import.
- Regular expression to add links to the abbreviation part of songbook references only.
- See #1, #5, #12.

## Release 0.4 (24 Mar 2016)

- Add Tags to Song page.  
  Resolves #17.
- Add Lectionary Date Page content type.  
  Resolves #4.
- Display Suite settings and CSS for Song and Lectionary Date based on old site.  
  Resolves #19.

## Release 0.3 (5 Mar 2016)

- Update songbook data structure and import: song references as unlimited text values, for proof of concept.
  See #5.

## Release 0.2 (23 Feb 2016)

- Install Pathauto module  
  Resolves #13
- Basic theme using Bootstrap and Bootswatch  
  Resolves #14
- Use the Data module to view the `song_index` table  
  See #5
- Add songbook references to song content type
- Add song_index references to article content type  
  See #15

## Release 0.1 (21 Feb 2016)

- Base Drupal install  
  Resolves #9
- Content type: song  
  Resolves #3
- Content type: songbook
  Resolves #11
