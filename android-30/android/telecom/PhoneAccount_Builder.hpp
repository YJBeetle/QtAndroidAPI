#pragma once

#include "../../JObject.hpp"

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
	class PhoneAccount_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PhoneAccount_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PhoneAccount_Builder(QAndroidJniObject obj);
		
		// Constructors
		PhoneAccount_Builder(android::telecom::PhoneAccount arg0);
		PhoneAccount_Builder(android::telecom::PhoneAccountHandle arg0, jstring arg1);
		
		// Methods
		android::telecom::PhoneAccount_Builder addSupportedUriScheme(jstring arg0);
		android::telecom::PhoneAccount build();
		android::telecom::PhoneAccount_Builder setAddress(android::net::Uri arg0);
		android::telecom::PhoneAccount_Builder setCapabilities(jint arg0);
		android::telecom::PhoneAccount_Builder setExtras(android::os::Bundle arg0);
		android::telecom::PhoneAccount_Builder setHighlightColor(jint arg0);
		android::telecom::PhoneAccount_Builder setIcon(android::graphics::drawable::Icon arg0);
		android::telecom::PhoneAccount_Builder setShortDescription(jstring arg0);
		android::telecom::PhoneAccount_Builder setSubscriptionAddress(android::net::Uri arg0);
		android::telecom::PhoneAccount_Builder setSupportedUriSchemes(JObject arg0);
	};
} // namespace android::telecom

