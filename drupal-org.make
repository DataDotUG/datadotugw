; Drupal.org release file.
core = 7.x
api = 2

; Basic contributed modules.

includes[mountbatten_sitewide] = https://raw.githubusercontent.com/mountbatten/mountbatten_makefiles/master/mountbatten_sitewide.make

projects[admin_views][version] = 1.4
projects[admin_views][type] = "module"
projects[admin_views][subdir] = "contrib"

projects[better_exposed_filters][version] = 3.0-beta4
projects[better_exposed_filters][type] = "module"
projects[better_exposed_filters][subdir] = "contrib"

projects[better_formats][version] = 1.0-beta1
projects[better_formats][type] = "module"
projects[better_formats][subdir] = "contrib"

projects[blockify][version] = 1.2
projects[blockify][type] = "module"
projects[blockify][subdir] = "contrib"

projects[book_helper][version] = 1.0-beta3
projects[book_helper][type] = "module"
projects[book_helper][subdir] = "contrib"

projects[calendar][version] = 3.5
projects[calendar][type] = "module"
projects[calendar][subdir] = "contrib"

projects[cer][version] = 3.0-alpha7
projects[cer][type] = "module"
projects[cer][subdir] = "contrib"

projects[charts_graphs][version] = "2.0"
projects[charts_graphs][type] = "module"
projects[charts_graphs][subdir] = "contrib"

projects[charts_graphs_flot][version] = "1.x-dev"
projects[charts_graphs_flot][type] = "module"
projects[charts_graphs_flot][subdir] = "contrib"

projects[chosen][version] = 2.0-beta4
projects[chosen][type] = "module"
projects[chosen][subdir] = "contrib"

projects[css_browser_selector][version] = 1.1
projects[css_browser_selector][type] = "module"
projects[css_browser_selector][subdir] = "contrib"

projects[ds][version] = 2.7
projects[ds][type] = "module"
projects[ds][subdir] = "contrib"

projects[entityreference][version] = 1.1
projects[entityreference][type] = "module"
projects[entityreference][subdir] = "contrib"

projects[event_calendar][version] = 1.9
projects[event_calendar][type] = "module"
projects[event_calendar][subdir] = "contrib"

projects[faq][version] = 1.0-rc3
projects[faq][type] = "module"
projects[faq][subdir] = "contrib"

projects[features_extra][version] = 1.0-beta1
projects[features_extra][type] = "module"
projects[features_extra][subdir] = "contrib"

projects[feeds][version] = 2.0-alpha8
projects[feeds][type] = "module"
projects[feeds][subdir] = "contrib"
projects[feeds][patches][] = "https://www.drupal.org/files/issues/feeds-undefined_original_author-2117537-5.patch"
projects[feeds][patches][] = "https://www.drupal.org/files/issues/feeds-optional_source_num48_rerolled-856316.patch"

projects[feeds_ex][version] = 1.0-beta1
projects[feeds_ex][type] = "module"
projects[feeds_ex][subdir] = "contrib"

projects[feeds_imagegrabber[]version] = 1.0-alpha2
projects[feeds_imagegrabber][type] = "module"
projects[feeds_imagegrabber][subdir] = "contrib"

projects[feeds_tamper][version] = 1.0
projects[feeds_tamper][type] = "module"
projects[feeds_tamper][subdir] = "contrib"

projects[field_conditional_state][version] = 2.1
projects[field_conditional_state][type] = "module"
projects[field_conditional_state][subdir] = "contrib"

projects[field_extrawidgets][version] = 1.1
projects[field_extrawidgets][type] = "module"
projects[field_extrawidgets][subdir] = "contrib"

projects[field_group][version] = 1.4
projects[field_group][type] = "module"
projects[field_group][subdir] = "contrib"

projects[fivestar][version] = 2.1
projects[fivestar][type] = "module"
projects[fivestar][subdir] = "contrib"

projects[flot][version] = "1.x-dev"
projects[flot][type] = "module"
projects[flot][subdir] = "contrib"
projects[flot][patch][] = "https://www.drupal.org/files/flot-pie_options-2088021-3.patch"
projects[flot][patch][] = "https://www.drupal.org/files/issues/flot-default_objects-2264691-4.patch"
projects[flot][patch][] = "https://www.drupal.org/files/issues/1897440_flot_resize_module.patch"

projects[fontawesome][version] = 2.1
projects[fontawesome][type] = "module"
projects[fontawesome][subdir] = "contrib"

projects[google_groups][version] = 2.0
projects[google_groups][type] = "module"
projects[google_groups][subdir] = "contrib"
projects[google_groups][patch][] = "http://cgit.drupalcode.org/google_groups/patch/?id=81b057b01020506d27763bb93e644054f53be9fb"

projects[icon][version] = 1.0-beta5
projects[icon][type] = "module"
projects[icon][subdir] = "contrib"

projects[job_scheduler][version] = 2.0-alpha3
projects[job_scheduler][type] = "module"
projects[job_scheduler][subdir] = "contrib"

projects[jquery_update][version] = 2.5
projects[jquery_update][type] = "module"
projects[jquery_update][subdir] = "contrib"

projects[less][version] = 4.0
projects[less][type] = "module"
projects[less][subdir] = "contrib"

projects[libraries][version] = 2.2
projects[libraries][type] = "module"
projects[libraries][subdir] = "contrib"

projects[link_favicon_formatter][version] = "1.6"
projects[link_favicon_formatter][type] = "module"
projects[link_favicon_formatter][subdir] = "contrib"

projects[module_filter][version] = 2.0-alpha2
projects[module_filter][type] = "module"
projects[module_filter][subdir] = "contrib"

projects[multiblock][version] = 1.1
projects[multiblock][type] = "module"
projects[multiblock][subdir] = "contrib"

projects[nice_menus][version] = 2.5
projects[nice_menus][type] = "module"
projects[nice_menus][subdir] = "contrib"

projects[pane][version] = 2.5
projects[pane][type] = "module"
projects[pane][subdir] = "contrib"

projects[panels][version] = 3.5
projects[panels][type] = "module"
projects[panels][subdir] = "contrib"

projects[panels_bootstrap_styles][version] = 1.0-alpha1
projects[panels_bootstrap_styles][type] = "module"
projects[panels_bootstrap_styles][subdir] = "contrib"
projects[panels_bootstrap_styles][patches][] = "https://www.drupal.org/files/issues/2152203-undefined_variable-7.patch"

projects[pcp][version] = 1.6
projects[pcp][type] = "module"
projects[pcp][subdir] = "contrib"
projects[pcp][patches][] = "https://www.drupal.org/files/issues/block_appears_for-441518-9.patch"

projects[profile2][version] = 1.3
projects[profile2][type] = "module"
projects[profile2][subdir] = "contrib"

projects[publishcontent][version] = 1.3
projects[publishcontent][type] = "module"
projects[publishcontent][subdir] = "contrib"

projects[realname][version] = 1.2
projects[realname][type] = "module"
projects[realname][subdir] = "contrib"

projects[schemaorg][version] = 1.0-rc1
projects[schemaorg][type] = "module"
projects[schemaorg][subdir] = "contrib"

projects[search_config][version] = 1.1
projects[search_config][type] = "module"
projects[search_config][subdir] = "contrib"

projects[service_links][version] = 2.2
projects[service_links][type] = "module"
projects[service_links][subdir] = "contrib"

projects[table_element][version] = 1.0-beta1
projects[table_element][type] = "module"
projects[table_element][subdir] = "contrib"

projects[twitter_block][version] = 2.2
projects[twitter_block][type] = "module"
projects[twitter_block][subdir] = "contrib"

projects[social_media_links][version] = 1.4
projects[social_media_links][type] = "module"
projects[social_media_links][subdir] = "contrib"

projects[uuid][version] = 1.0-alpha6
projects[uuid][type] = "module"
projects[uuid][subdir] = "contrib"

projects[uuid_features][version] = 1.0-alpha4
projects[uuid_features][type] = "module"
projects[uuid_features][subdir] = "contrib"

projects[votingapi][version] = 2.12
projects[votingapi][type] = "module"
projects[votingapi][subdir] = "contrib"

projects[views_bulk_operations][version] = 3.2
projects[views_bulk_operations][type] = "module"
projects[views_bulk_operations][subdir] = "contrib"

projects[views_charts][version] = "1.x-dev"
projects[views_charts][type] = "module"
projects[views_charts][subdir] = "contrib"

projects[votingapi][version] = 2.12
projects[votingapi][type] = "module"
projects[votingapi][subdir] = "contrib"

projects[webform][version] = 4.3
projects[webform][type] = "module"
projects[webform][subdir] = "contrib"

projects[weight][version] = 2.4
projects[weight][type] = "module"
projects[weight][subdir] = "contrib"

includes[mountbatten_web_analytics] = https://raw.githubusercontent.com/mountbatten/mountbatten_makefiles/master/mountbatten_web_analytics.make
includes[mountbatten_seo] = https://raw.githubusercontent.com/mountbatten/mountbatten_makefiles/master/mountbatten_seo.make
includes[mountbatten_spam_protection] = https://raw.githubusercontent.com/mountbatten/mountbatten_makefiles/master/mountbatten_spam_protection.make
includes[mountbatten_web_media] = https://raw.githubusercontent.com/mountbatten/mountbatten_makefiles/master/mountbatten_web_media.make
includes[mountbatten_web_media] = https://raw.githubusercontent.com/mountbatten/mountbatten_makefiles/master/mountbatten_developer.make

; Base theme.
projects[bootstrap][version] = 3.0
projects[bootstrap][type] = "theme"
projects[bootstrap][patches] = "https://www.drupal.org/files/issues/bootstrap-webform-email.patch"

libraries[colorbox][download][type] = "file"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/1.x.zip"
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][destination] = "libraries"

libraries[chosen][download][type] = "file"
libraries[chosen][download][url] = "https://github.com/harvesthq/chosen/releases/download/v1.1.0/chosen_v1.1.0.zip"
libraries[chosen][directory_name] = "chosen"
libraries[chosen][destination] = "libraries"

libraries[flot][download][type] = "file"
libraries[flot][download][url] = "https://flot.googlecode.com/files/flot-0.7.tar.gz"
libraries[flot][directory_name] = "flot"
libraries[flot][type] = "library"
libraries[flot][patch][] = "https://www.drupal.org/files/issues/1897440_flot_resize_library.patch"

libraries[jsonpath][download][type] = "file"
libraries[jsonpath][download][url] = "https://jsonpath.googlecode.com/files/jsonpath-0.8.1.php"
libraries[jsonpath][directory_name] = "jsonpath"
libraries[jsonpath][destination] = "libraries"

libraries[less][download][type] = "file"
libraries[less][download][url] = "https://github.com/oyejorge/less.php/releases/download/v1.7.0.2/less.php_1.7.0.2.zip"
libraries[less][directory_name] = "less.php"
libraries[less][destination] = "libraries"
