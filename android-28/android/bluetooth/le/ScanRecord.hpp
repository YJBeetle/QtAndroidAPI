#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class ParcelUuid;
}
namespace android::util
{
	class SparseArray;
}

namespace android::bluetooth::le
{
	class ScanRecord : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScanRecord(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScanRecord(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getAdvertiseFlags();
		jbyteArray getBytes();
		jstring getDeviceName();
		jbyteArray getManufacturerSpecificData(jint arg0);
		android::util::SparseArray getManufacturerSpecificData();
		jbyteArray getServiceData(android::os::ParcelUuid arg0);
		JObject getServiceData();
		JObject getServiceUuids();
		jint getTxPowerLevel();
		jstring toString();
	};
} // namespace android::bluetooth::le

