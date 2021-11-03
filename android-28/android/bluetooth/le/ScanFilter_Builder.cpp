#include "../../../JByteArray.hpp"
#include "./ScanFilter.hpp"
#include "../../os/ParcelUuid.hpp"
#include "../../../JString.hpp"
#include "./ScanFilter_Builder.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// QAndroidJniObject forward
	ScanFilter_Builder::ScanFilter_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ScanFilter_Builder::ScanFilter_Builder()
		: JObject(
			"android.bluetooth.le.ScanFilter$Builder",
			"()V"
		) {}
	
	// Methods
	android::bluetooth::le::ScanFilter ScanFilter_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/ScanFilter;"
		);
	}
	android::bluetooth::le::ScanFilter_Builder ScanFilter_Builder::setDeviceAddress(JString arg0)
	{
		return callObjectMethod(
			"setDeviceAddress",
			"(Ljava/lang/String;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.object<jstring>()
		);
	}
	android::bluetooth::le::ScanFilter_Builder ScanFilter_Builder::setDeviceName(JString arg0)
	{
		return callObjectMethod(
			"setDeviceName",
			"(Ljava/lang/String;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.object<jstring>()
		);
	}
	android::bluetooth::le::ScanFilter_Builder ScanFilter_Builder::setManufacturerData(jint arg0, JByteArray arg1)
	{
		return callObjectMethod(
			"setManufacturerData",
			"(I[B)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	android::bluetooth::le::ScanFilter_Builder ScanFilter_Builder::setManufacturerData(jint arg0, JByteArray arg1, JByteArray arg2)
	{
		return callObjectMethod(
			"setManufacturerData",
			"(I[B[B)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0,
			arg1.object<jbyteArray>(),
			arg2.object<jbyteArray>()
		);
	}
	android::bluetooth::le::ScanFilter_Builder ScanFilter_Builder::setServiceData(android::os::ParcelUuid arg0, JByteArray arg1)
	{
		return callObjectMethod(
			"setServiceData",
			"(Landroid/os/ParcelUuid;[B)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	android::bluetooth::le::ScanFilter_Builder ScanFilter_Builder::setServiceData(android::os::ParcelUuid arg0, JByteArray arg1, JByteArray arg2)
	{
		return callObjectMethod(
			"setServiceData",
			"(Landroid/os/ParcelUuid;[B[B)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2.object<jbyteArray>()
		);
	}
	android::bluetooth::le::ScanFilter_Builder ScanFilter_Builder::setServiceUuid(android::os::ParcelUuid arg0)
	{
		return callObjectMethod(
			"setServiceUuid",
			"(Landroid/os/ParcelUuid;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.object()
		);
	}
	android::bluetooth::le::ScanFilter_Builder ScanFilter_Builder::setServiceUuid(android::os::ParcelUuid arg0, android::os::ParcelUuid arg1)
	{
		return callObjectMethod(
			"setServiceUuid",
			"(Landroid/os/ParcelUuid;Landroid/os/ParcelUuid;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::bluetooth::le

