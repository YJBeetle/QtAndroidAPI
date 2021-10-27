#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::bluetooth::le
{
	class AdvertiseData;
}
namespace android::os
{
	class ParcelUuid;
}

namespace android::bluetooth::le
{
	class AdvertiseData_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		AdvertiseData_Builder(QAndroidJniObject obj);
		// Constructors
		AdvertiseData_Builder();
		
		// Methods
		QAndroidJniObject addManufacturerData(jint arg0, jbyteArray arg1);
		QAndroidJniObject addServiceData(android::os::ParcelUuid arg0, jbyteArray arg1);
		QAndroidJniObject addServiceUuid(android::os::ParcelUuid arg0);
		QAndroidJniObject build();
		QAndroidJniObject setIncludeDeviceName(jboolean arg0);
		QAndroidJniObject setIncludeTxPowerLevel(jboolean arg0);
	};
} // namespace android::bluetooth::le

