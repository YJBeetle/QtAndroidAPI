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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AdvertiseData_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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

