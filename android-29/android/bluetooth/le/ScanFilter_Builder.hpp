#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class ScanFilter_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		ScanFilter_Builder(QAndroidJniObject obj);
		// Constructors
		ScanFilter_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setDeviceAddress(jstring arg0);
		QAndroidJniObject setDeviceAddress(const QString &arg0);
		QAndroidJniObject setDeviceName(jstring arg0);
		QAndroidJniObject setDeviceName(const QString &arg0);
		QAndroidJniObject setManufacturerData(jint arg0, jbyteArray arg1);
		QAndroidJniObject setManufacturerData(jint arg0, jbyteArray arg1, jbyteArray arg2);
		QAndroidJniObject setServiceData(android::os::ParcelUuid arg0, jbyteArray arg1);
		QAndroidJniObject setServiceData(android::os::ParcelUuid arg0, jbyteArray arg1, jbyteArray arg2);
		QAndroidJniObject setServiceSolicitationUuid(android::os::ParcelUuid arg0);
		QAndroidJniObject setServiceSolicitationUuid(android::os::ParcelUuid arg0, android::os::ParcelUuid arg1);
		QAndroidJniObject setServiceUuid(android::os::ParcelUuid arg0);
		QAndroidJniObject setServiceUuid(android::os::ParcelUuid arg0, android::os::ParcelUuid arg1);
	};
} // namespace android::bluetooth::le

