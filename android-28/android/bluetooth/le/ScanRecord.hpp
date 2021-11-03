#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class ParcelUuid;
}
namespace android::util
{
	class SparseArray;
}
class JString;

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
		JByteArray getBytes();
		JString getDeviceName();
		JByteArray getManufacturerSpecificData(jint arg0);
		android::util::SparseArray getManufacturerSpecificData();
		JByteArray getServiceData(android::os::ParcelUuid arg0);
		JObject getServiceData();
		JObject getServiceUuids();
		jint getTxPowerLevel();
		JString toString();
	};
} // namespace android::bluetooth::le

