#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class ScanRecord : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScanRecord(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ScanRecord(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getAdvertiseFlags();
		jbyteArray getBytes();
		jstring getDeviceName();
		jbyteArray getManufacturerSpecificData(jint arg0);
		android::util::SparseArray getManufacturerSpecificData();
		jbyteArray getServiceData(android::os::ParcelUuid arg0);
		__JniBaseClass getServiceData();
		__JniBaseClass getServiceUuids();
		jint getTxPowerLevel();
		jstring toString();
	};
} // namespace android::bluetooth::le

