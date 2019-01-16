#
# Be sure to run `pod lib lint EapthMap.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name = 'EpathMap'
s.version = '1.0.88'
s.summary = '释途室内地图导航SDK'

s.description      = <<-DESC
TODO: 释途室内导航 EpathmapSDK Indoor navigation map ibeacon buildings
DESC

s.homepage         = 'https://github.com/liuwr/EpathMap'
s.license          = { :type => 'MIT', :file => 'LICENSE' }
s.author           = { 'liuwr1992@163.com' => '345432385@qq.com' }
s.source           = { :git => 'https://github.com/liuwr/EpathMap.git', :tag => s.version.to_s }
# s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

s.ios.deployment_target = '8.0'
#s.source_files = 'Epathmap/**/*'

s.resources = "Epathmap/InfoPlist.bundle","Epathmap/Epathmap.bundle","Epathmap/Image.xcassets/**/*"
#"EpathmapImg/**/*.png"

s.ios.vendored_frameworks = "EpathmapSDK/EpathmapSDK.framework"

s.frameworks = "UIKit", "Foundation", "QuartzCore", "SystemConfiguration", "CoreGraphics", "CoreLocation", "CoreTelephony", "AudioToolbox", "AVFoundation", "AddressBook"
s.weak_framework = "Contacts"
# s.library   = "iconv"
s.libraries = "z", "z.1.2.5", "xml2"
s.requires_arc = true

end
