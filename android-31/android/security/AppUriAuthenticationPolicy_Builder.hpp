#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}
namespace android::security
{
	class AppUriAuthenticationPolicy;
}

namespace android::security
{
	class AppUriAuthenticationPolicy_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppUriAuthenticationPolicy_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AppUriAuthenticationPolicy_Builder(QAndroidJniObject obj);
		
		// Constructors
		AppUriAuthenticationPolicy_Builder();
		
		// Methods
		android::security::AppUriAuthenticationPolicy_Builder addAppAndUriMapping(jstring arg0, android::net::Uri arg1, jstring arg2);
		android::security::AppUriAuthenticationPolicy build();
	};
} // namespace android::security

