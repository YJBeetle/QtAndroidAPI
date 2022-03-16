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
		
		// QJniObject forward
		template<typename ...Ts> explicit ScanRecord(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScanRecord(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getAdvertiseFlags() const;
		JByteArray getBytes() const;
		JString getDeviceName() const;
		JByteArray getManufacturerSpecificData(jint arg0) const;
		android::util::SparseArray getManufacturerSpecificData() const;
		JByteArray getServiceData(android::os::ParcelUuid arg0) const;
		JObject getServiceData() const;
		JObject getServiceSolicitationUuids() const;
		JObject getServiceUuids() const;
		jint getTxPowerLevel() const;
		JString toString() const;
	};
} // namespace android::bluetooth::le

