#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::bluetooth::le
{
	class ScanFilter;
}
namespace android::os
{
	class ParcelUuid;
}
class JString;

namespace android::bluetooth::le
{
	class ScanFilter_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScanFilter_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScanFilter_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ScanFilter_Builder();
		
		// Methods
		android::bluetooth::le::ScanFilter build() const;
		android::bluetooth::le::ScanFilter_Builder setDeviceAddress(JString arg0) const;
		android::bluetooth::le::ScanFilter_Builder setDeviceName(JString arg0) const;
		android::bluetooth::le::ScanFilter_Builder setManufacturerData(jint arg0, JByteArray arg1) const;
		android::bluetooth::le::ScanFilter_Builder setManufacturerData(jint arg0, JByteArray arg1, JByteArray arg2) const;
		android::bluetooth::le::ScanFilter_Builder setServiceData(android::os::ParcelUuid arg0, JByteArray arg1) const;
		android::bluetooth::le::ScanFilter_Builder setServiceData(android::os::ParcelUuid arg0, JByteArray arg1, JByteArray arg2) const;
		android::bluetooth::le::ScanFilter_Builder setServiceUuid(android::os::ParcelUuid arg0) const;
		android::bluetooth::le::ScanFilter_Builder setServiceUuid(android::os::ParcelUuid arg0, android::os::ParcelUuid arg1) const;
	};
} // namespace android::bluetooth::le

