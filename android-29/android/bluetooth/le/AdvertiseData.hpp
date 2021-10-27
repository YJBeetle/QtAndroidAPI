#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::util
{
	class SparseArray;
}

namespace android::bluetooth::le
{
	class AdvertiseData : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		AdvertiseData(QAndroidJniObject obj);
		// Constructors
		AdvertiseData() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jboolean getIncludeDeviceName();
		jboolean getIncludeTxPowerLevel();
		QAndroidJniObject getManufacturerSpecificData();
		QAndroidJniObject getServiceData();
		QAndroidJniObject getServiceUuids();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth::le

