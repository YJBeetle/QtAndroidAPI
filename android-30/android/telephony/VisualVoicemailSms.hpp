#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace android::telecom
{
	class PhoneAccountHandle;
}
class JString;

namespace android::telephony
{
	class VisualVoicemailSms : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VisualVoicemailSms(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VisualVoicemailSms(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::os::Bundle getFields();
		JString getMessageBody();
		android::telecom::PhoneAccountHandle getPhoneAccountHandle();
		JString getPrefix();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

