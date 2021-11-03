#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::security
{
	class AppUriAuthenticationPolicy;
}
class JString;

namespace android::security
{
	class AppUriAuthenticationPolicy_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppUriAuthenticationPolicy_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppUriAuthenticationPolicy_Builder(QAndroidJniObject obj);
		
		// Constructors
		AppUriAuthenticationPolicy_Builder();
		
		// Methods
		android::security::AppUriAuthenticationPolicy_Builder addAppAndUriMapping(JString arg0, android::net::Uri arg1, JString arg2);
		android::security::AppUriAuthenticationPolicy build();
	};
} // namespace android::security

