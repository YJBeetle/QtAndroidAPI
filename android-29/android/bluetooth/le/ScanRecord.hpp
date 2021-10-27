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
		
		ScanRecord(QAndroidJniObject obj);
		// Constructors
		ScanRecord() = default;
		
		// Methods
		jint getAdvertiseFlags();
		jbyteArray getBytes();
		jstring getDeviceName();
		jbyteArray getManufacturerSpecificData(jint arg0);
		QAndroidJniObject getManufacturerSpecificData();
		jbyteArray getServiceData(android::os::ParcelUuid arg0);
		QAndroidJniObject getServiceData();
		QAndroidJniObject getServiceSolicitationUuids();
		QAndroidJniObject getServiceUuids();
		jint getTxPowerLevel();
		jstring toString();
	};
} // namespace android::bluetooth::le

