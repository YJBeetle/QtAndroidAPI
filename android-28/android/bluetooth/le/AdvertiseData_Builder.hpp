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
		
		// QJniObject forward
		template<typename ...Ts> explicit AdvertiseData_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AdvertiseData_Builder(QJniObject obj);
		
		// Constructors
		AdvertiseData_Builder();
		
		// Methods
		android::bluetooth::le::AdvertiseData_Builder addManufacturerData(jint arg0, jbyteArray arg1);
		android::bluetooth::le::AdvertiseData_Builder addServiceData(android::os::ParcelUuid arg0, jbyteArray arg1);
		android::bluetooth::le::AdvertiseData_Builder addServiceUuid(android::os::ParcelUuid arg0);
		android::bluetooth::le::AdvertiseData build();
		android::bluetooth::le::AdvertiseData_Builder setIncludeDeviceName(jboolean arg0);
		android::bluetooth::le::AdvertiseData_Builder setIncludeTxPowerLevel(jboolean arg0);
	};
} // namespace android::bluetooth::le

