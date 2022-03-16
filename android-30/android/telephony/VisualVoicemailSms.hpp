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
		VisualVoicemailSms(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::os::Bundle getFields() const;
		JString getMessageBody() const;
		android::telecom::PhoneAccountHandle getPhoneAccountHandle() const;
		JString getPrefix() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

