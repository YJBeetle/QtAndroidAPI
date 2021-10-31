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
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EuiccInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EuiccInfo(QAndroidJniObject obj);
		
		// Constructors
		EuiccInfo(jstring arg0);
		
		// Methods
		jint describeContents();
		jstring getOsVersion();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::euicc

