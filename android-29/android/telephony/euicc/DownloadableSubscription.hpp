#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony::euicc
{
	class DownloadableSubscription : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		DownloadableSubscription(QAndroidJniObject obj);
		// Constructors
		DownloadableSubscription() = default;
		
		// Methods
		static QAndroidJniObject forActivationCode(jstring arg0);
		static QAndroidJniObject forActivationCode(const QString &arg0);
		jint describeContents();
		jstring getConfirmationCode();
		jstring getEncodedActivationCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::euicc

