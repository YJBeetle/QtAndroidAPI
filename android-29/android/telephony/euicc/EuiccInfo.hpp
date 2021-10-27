#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony::euicc
{
	class EuiccInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		EuiccInfo(QAndroidJniObject obj);
		// Constructors
		EuiccInfo(jstring &arg0);
		EuiccInfo(const QString &arg0);
		EuiccInfo() = default;
		
		// Methods
		jint describeContents();
		jstring getOsVersion();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::euicc

