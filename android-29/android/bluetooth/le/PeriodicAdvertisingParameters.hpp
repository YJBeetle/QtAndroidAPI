#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::bluetooth::le
{
	class PeriodicAdvertisingParameters : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		PeriodicAdvertisingParameters(QAndroidJniObject obj);
		// Constructors
		PeriodicAdvertisingParameters() = default;
		
		// Methods
		jint describeContents();
		jboolean getIncludeTxPower();
		jint getInterval();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth::le

