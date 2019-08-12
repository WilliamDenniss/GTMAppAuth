Pod::Spec.new do |s|

  s.name         = "AppAuth-tvOS"
  s.version      = "0.8.0"
  s.summary      = "Create AppAuth authorization sessions on tvOS"

  s.description  = <<-DESC


                   DESC

  s.platforms    = { :tvos => "9.0" }

  s.homepage     = "https://github.com/openid/AppAuth-tvOS"
  s.license      = "Apache License, Version 2.0"
  s.authors      = { "William Denniss" => "wdenniss@google.com",
                   }

  s.source       = { :git => "https://github.com/openid/AppAuth-tvOS.git", :tag => s.version }

  s.source_files = "Source/*.{h,m}"
  s.requires_arc = true

  s.tvos.deployment_target = '9.0'

  s.dependency 'AppAuth/Core', '~> 1.0'
end
