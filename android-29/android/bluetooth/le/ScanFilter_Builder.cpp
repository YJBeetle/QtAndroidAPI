#include "./ScanFilter.hpp"
#include "../../os/ParcelUuid.hpp"
#include "./ScanFilter_Builder.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// QAndroidJniObject forward
	ScanFilter_Builder::ScanFilter_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ScanFilter_Builder::ScanFilter_Builder()
		: __JniBaseClass(
			"android.bluetooth.le.ScanFilter$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject ScanFilter_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/ScanFilter;"
		);
	}
	QAndroidJniObject ScanFilter_Builder::setDeviceAddress(jstring arg0)
	{
		return callObjectMethod(
			"setDeviceAddress",
			"(Ljava/lang/String;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0
		);
	}
	QAndroidJniObject ScanFilter_Builder::setDeviceName(jstring arg0)
	{
		return callObjectMethod(
			"setDeviceName",
			"(Ljava/lang/String;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0
		);
	}
	QAndroidJniObject ScanFilter_Builder::setManufacturerData(jint arg0, jbyteArray arg1)
	{
		return callObjectMethod(
			"setManufacturerData",
			"(I[B)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ScanFilter_Builder::setManufacturerData(jint arg0, jbyteArray arg1, jbyteArray arg2)
	{
		return callObjectMethod(
			"setManufacturerData",
			"(I[B[B)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ScanFilter_Builder::setServiceData(android::os::ParcelUuid arg0, jbyteArray arg1)
	{
		return callObjectMethod(
			"setServiceData",
			"(Landroid/os/ParcelUuid;[B)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject ScanFilter_Builder::setServiceData(android::os::ParcelUuid arg0, jbyteArray arg1, jbyteArray arg2)
	{
		return callObjectMethod(
			"setServiceData",
			"(Landroid/os/ParcelUuid;[B[B)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject ScanFilter_Builder::setServiceSolicitationUuid(android::os::ParcelUuid arg0)
	{
		return callObjectMethod(
			"setServiceSolicitationUuid",
			"(Landroid/os/ParcelUuid;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject ScanFilter_Builder::setServiceSolicitationUuid(android::os::ParcelUuid arg0, android::os::ParcelUuid arg1)
	{
		return callObjectMethod(
			"setServiceSolicitationUuid",
			"(Landroid/os/ParcelUuid;Landroid/os/ParcelUuid;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject ScanFilter_Builder::setServiceUuid(android::os::ParcelUuid arg0)
	{
		return callObjectMethod(
			"setServiceUuid",
			"(Landroid/os/ParcelUuid;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject ScanFilter_Builder::setServiceUuid(android::os::ParcelUuid arg0, android::os::ParcelUuid arg1)
	{
		return callObjectMethod(
			"setServiceUuid",
			"(Landroid/os/ParcelUuid;Landroid/os/ParcelUuid;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::bluetooth::le
