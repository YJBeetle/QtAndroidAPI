#pragma once

#include "../../../JObject.hpp"

namespace android::bluetooth::le
{
	class ScanFilter;
}
namespace android::os
{
	class ParcelUuid;
}

namespace android::bluetooth::le
{
	class ScanFilter_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScanFilter_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScanFilter_Builder(QJniObject obj);
		
		// Constructors
		ScanFilter_Builder();
		
		// Methods
		android::bluetooth::le::ScanFilter build();
		android::bluetooth::le::ScanFilter_Builder setDeviceAddress(jstring arg0);
		android::bluetooth::le::ScanFilter_Builder setDeviceName(jstring arg0);
		android::bluetooth::le::ScanFilter_Builder setManufacturerData(jint arg0, jbyteArray arg1);
		android::bluetooth::le::ScanFilter_Builder setManufacturerData(jint arg0, jbyteArray arg1, jbyteArray arg2);
		android::bluetooth::le::ScanFilter_Builder setServiceData(android::os::ParcelUuid arg0, jbyteArray arg1);
		android::bluetooth::le::ScanFilter_Builder setServiceData(android::os::ParcelUuid arg0, jbyteArray arg1, jbyteArray arg2);
		android::bluetooth::le::ScanFilter_Builder setServiceSolicitationUuid(android::os::ParcelUuid arg0);
		android::bluetooth::le::ScanFilter_Builder setServiceSolicitationUuid(android::os::ParcelUuid arg0, android::os::ParcelUuid arg1);
		android::bluetooth::le::ScanFilter_Builder setServiceUuid(android::os::ParcelUuid arg0);
		android::bluetooth::le::ScanFilter_Builder setServiceUuid(android::os::ParcelUuid arg0, android::os::ParcelUuid arg1);
	};
} // namespace android::bluetooth::le

