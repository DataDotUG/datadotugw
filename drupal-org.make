; Drupal.org release file.
core = 7.x
api = 2

; Basic contributed modules.

includes[mountbatten_sitewide] = https://raw.githubusercontent.com/mountbatten/mountbatten_makefiles/master/mountbatten_sitewide.make

projects[better_exposed_filters][version] = 3.0-beta4
projects[better_exposed_filters][type] = "module"
projects[better_exposed_filters][subdir] = "contrib"

projects[blockify][version] = 1.2
projects[blockify][type] = "module"
projects[blockify][subdir] = "contrib"

projects[book_helper][version] = 1.0-beta3
projects[book_helper][type] = "module"
projects[book_helper][subdir] = "contrib"

projects[calendar][version] = 3.4
projects[calendar][type] = "module"
projects[calendar][subdir] = "contrib"

projects[chosen][version] = 2.0-beta4
projects[chosen][type] = "module"
projects[chosen][subdir] = "contrib"

projects[ds][version] = 2.7
projects[ds][type] = "module"
projects[ds][subdir] = "contrib"

projects[entityreference][version] = 1.1
projects[entityreference][type] = "module"
projects[entityreference][subdir] = "contrib"

projects[event_calendar][version] = 1.5
projects[event_calendar][type] = "module"
projects[event_calendar][subdir] = "contrib"

projects[features_extra][version] = 1.0-beta2
projects[features_extra][type] = "module"
projects[features_extra][subdir] = "contrib"

projects[fontawesome][version] = 2.1
projects[fontawesome][type] = "module"
projects[fontawesome][subdir] = "contrib"

projects[icon][version] = 1.0-beta5
projects[icon][type] = "module"
projects[icon][subdir] = "contrib"

projects[jquery_update][version] = 2.5
projects[jquery_update][type] = "module"
projects[jquery_update][subdir] = "contrib"

projects[less][version] = 4.0
projects[less][type] = "module"
projects[less][subdir] = "contrib"

projects[libraries][version] = 2.2
projects[libraries][type] = "module"
projects[libraries][subdir] = "contrib"

projects[module_filter][version] = 2.0-alpha2
projects[module_filter][type] = "module"
projects[module_filter][subdir] = "contrib"

projects[multiblock][version] = 1.1
projects[multiblock][type] = "module"
projects[multiblock][subdir] = "contrib"

projects[pane][version] = 2.5
projects[pane][type] = "module"
projects[pane][subdir] = "contrib"

projects[panels][version] = 3.5
projects[panels][type] = "module"
projects[panels][subdir] = "contrib"

projects[panels_bootstrap_styles][version] = 1.0-alpha1
projects[panels_bootstrap_styles][type] = "module"
projects[panels_bootstrap_styles][subdir] = "contrib"

projects[profile2][version] = 1.3
projects[profile2][type] = "module"
projects[profile2][subdir] = "contrib"

projects[realname][version] = 1.3
projects[realname][type] = "module"
projects[realname][subdir] = "contrib"

projects[service_links][version] = 2.2
projects[service_links][type] = "module"
projects[service_links][subdir] = "contrib"

projects[social_media_links][version] = 1.4
projects[social_media_links][type] = "module"
projects[social_media_links][subdir] = "contrib"

projects[weight][version] = 2.4
projects[weight][type] = "module"
projects[weight][subdir] = "contrib"

projects[piwik][version] = 2.7
projects[piwik][type] = "module"
projects[piwik][subdir] = "contrib"

projects[css_browser_selector][version] = 1.1
projects[css_browser_selector][type] = "module"
projects[css_browser_selector][subdir] = "contrib"

projects[publishcontent][version] = 1.3
projects[publishcontent][type] = "module"
projects[publishcontent][subdir] = "contrib"

projects[search_config][version] = 1.1
projects[search_config][type] = "module"
projects[search_config][subdir] = "contrib"

projects[xmlsitemap][version] = 2.2
projects[xmlsitemap][type] = "module"
projects[xmlsitemap][subdir] = "contrib"

projects[metatag][version] = 1.4
projects[metatag][type] = "module"
projects[metatag][subdir] = "contrib"

projects[chosen][version] = 2.0-beta4
projects[chosen][type] = "module"
projects[chosen][subdir] = "contrib"

projects[schemaorg][version] = 1.0-rc1
projects[schemaorg][type] = "module"
projects[schemaorg][subdir] = "contrib"

projects[faq][version] = 1.0-rc3
projects[faq][type] = "module"
projects[faq][subdir] = "contrib"

projects[votingapi][version] = 2.12
projects[votingapi][type] = "module"
projects[votingapi][subdir] = "contrib"

includes[mountbatten_web_analytics] = https://raw.githubusercontent.com/mountbatten/mountbatten_makefiles/master/mountbatten_web_analytics.make
includes[mountbatten_seo] = https://raw.githubusercontent.com/mountbatten/mountbatten_makefiles/master/mountbatten_seo.make
includes[mountbatten_spam_protection] = https://raw.githubusercontent.com/mountbatten/mountbatten_makefiles/master/mountbatten_spam_protection.make
includes[mountbatten_web_media] = https://raw.githubusercontent.com/mountbatten/mountbatten_makefiles/master/mountbatten_web_media.make

; Base theme.
projects[bootstrap][version] = 3.0
projects[bootstrap][type] = "theme"

;Main theme
projects[bukassa][version] = "1.x-dev"
projects[bukassa][type] = "theme"
projects[bukassa][download][type] = "git"
projects[bukassa][download][branch] = "7.x-1.x"
projects[bukassa][download][url]  = "http://git.drupal.org/sandbox/batje/2262849.git"

libraries[colorbox][download][type] = "file"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/1.x.zip"
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][destination] = "libraries"

libraries[chosen][download][type] = "file"
libraries[chosen][download][url] = "https://github.com/harvesthq/chosen/releases/download/v1.1.0/chosen_v1.1.0.zip"
libraries[chosen][directory_name] = "chosen"
libraries[chosen][destination] = "libraries"
