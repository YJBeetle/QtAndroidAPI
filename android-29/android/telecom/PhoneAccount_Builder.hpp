#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics::drawable
{
	class Icon;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::telecom
{
	class PhoneAccount;
}
namespace android::telecom
{
	class PhoneAccountHandle;
}

namespace android::telecom
{
	class PhoneAccount_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PhoneAccount_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PhoneAccount_Builder(QAndroidJniObject obj);
		
		// Constructors
		PhoneAccount_Builder(android::telecom::PhoneAccount arg0);
		PhoneAccount_Builder(android::telecom::PhoneAccountHandle arg0, jstring arg1);
		
		// Methods
		QAndroidJniObject addSupportedUriScheme(jstring arg0);
		QAndroidJniObject build();
		QAndroidJniObject setAddress(android::net::Uri arg0);
		QAndroidJniObject setCapabilities(jint arg0);
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setHighlightColor(jint arg0);
		QAndroidJniObject setIcon(android::graphics::drawable::Icon arg0);
		QAndroidJniObject setShortDescription(jstring arg0);
		QAndroidJniObject setSubscriptionAddress(android::net::Uri arg0);
		QAndroidJniObject setSupportedUriSchemes(__JniBaseClass arg0);
	};
} // namespace android::telecom

