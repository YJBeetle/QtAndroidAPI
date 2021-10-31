#include "../net/Uri.hpp"
#include "./AppUriAuthenticationPolicy.hpp"
#include "./AppUriAuthenticationPolicy_Builder.hpp"

namespace android::security
{
	// Fields
	
	// QAndroidJniObject forward
	AppUriAuthenticationPolicy_Builder::AppUriAuthenticationPolicy_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AppUriAuthenticationPolicy_Builder::AppUriAuthenticationPolicy_Builder()
		: __JniBaseClass(
			"android.security.AppUriAuthenticationPolicy$Builder",
			"()V"
		) {}
	
	// Methods
	android::security::AppUriAuthenticationPolicy_Builder AppUriAuthenticationPolicy_Builder::addAppAndUriMapping(jstring arg0, android::net::Uri arg1, jstring arg2)
	{
		return callObjectMethod(
			"addAppAndUriMapping",
			"(Ljava/lang/String;Landroid/net/Uri;Ljava/lang/String;)Landroid/security/AppUriAuthenticationPolicy$Builder;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	android::security::AppUriAuthenticationPolicy AppUriAuthenticationPolicy_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/security/AppUriAuthenticationPolicy;"
		);
	}
} // namespace android::security

