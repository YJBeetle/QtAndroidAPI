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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScanFilter_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ScanFilter_Builder(QAndroidJniObject obj);
		
		// Constructors
		ScanFilter_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setDeviceAddress(jstring arg0);
		QAndroidJniObject setDeviceName(jstring arg0);
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

