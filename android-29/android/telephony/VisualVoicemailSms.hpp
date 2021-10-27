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
		static QAndroidJniObject CREATOR();
		
		VisualVoicemailSms(QAndroidJniObject obj);
		// Constructors
		VisualVoicemailSms() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getFields();
		jstring getMessageBody();
		QAndroidJniObject getPhoneAccountHandle();
		jstring getPrefix();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

