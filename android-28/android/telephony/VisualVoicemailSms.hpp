#pragma once

#include "../../__JniBaseClass.hpp"

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
	class VisualVoicemailSms : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VisualVoicemailSms(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VisualVoicemailSms(QAndroidJniObject obj);
		
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

