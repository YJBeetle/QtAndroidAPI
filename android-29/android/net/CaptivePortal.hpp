#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net
{
	class CaptivePortal : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		CaptivePortal(QAndroidJniObject obj);
		// Constructors
		CaptivePortal() = default;
		
		// Methods
		jint describeContents();
		void ignoreNetwork();
		void reportCaptivePortalDismissed();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

