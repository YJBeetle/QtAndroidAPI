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

namespace android::telephony
{
	class VisualVoicemailSms : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit VisualVoicemailSms(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VisualVoicemailSms(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::os::Bundle getFields();
		jstring getMessageBody();
		android::telecom::PhoneAccountHandle getPhoneAccountHandle();
		jstring getPrefix();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

