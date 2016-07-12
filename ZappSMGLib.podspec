Pod::Spec.new do |s|

s.name         = "ZappSMGLib"
s.version      = "1.0.0"
s.summary      = "Zapp Small Merchant Library"

s.description  = <<-DESC
Zapp Small Merchant Library
DESC

s.source       = "https://github.com/mwfire/ZappSMGLib-iOS"
s.homepage     = "http://zapp.co.uk"
s.license      = "Apache License, Version 2.0"

s.author       = { "Alex Maimescu" => "alexandru.maimescu@vocalink.com" }

s.platform     = :ios, "8.0"

s.source_files  = "ZappSMGLib/ZappSMGLib/**/*.{h,m}", "ZappSMGLib/ZappSMGLib/**/*.swift"
s.exclude_files = "Classes/Exclude"

s.ios.resource_bundle = { 'ZappSMGLibResources' => "ZappSMGLib/ZappSMGLibResources/**/*.png" }

end