#pragma once

#include "../../../JObject.hpp"

class JByteArray;
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
	class AdvertiseData_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AdvertiseData_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdvertiseData_Builder(QJniObject obj);
		
		// Constructors
		AdvertiseData_Builder();
		
		// Methods
		android::bluetooth::le::AdvertiseData_Builder addManufacturerData(jint arg0, JByteArray arg1) const;
		android::bluetooth::le::AdvertiseData_Builder addServiceData(android::os::ParcelUuid arg0, JByteArray arg1) const;
		android::bluetooth::le::AdvertiseData_Builder addServiceUuid(android::os::ParcelUuid arg0) const;
		android::bluetooth::le::AdvertiseData build() const;
		android::bluetooth::le::AdvertiseData_Builder setIncludeDeviceName(jboolean arg0) const;
		android::bluetooth::le::AdvertiseData_Builder setIncludeTxPowerLevel(jboolean arg0) const;
	};
} // namespace android::bluetooth::le

