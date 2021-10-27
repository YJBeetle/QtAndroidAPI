#include "./AdvertiseData.hpp"
#include "../../os/ParcelUuid.hpp"
#include "./AdvertiseData_Builder.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	AdvertiseData_Builder::AdvertiseData_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AdvertiseData_Builder::AdvertiseData_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.AdvertiseData$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject AdvertiseData_Builder::addManufacturerData(jint arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"addManufacturerData",
			"(I[B)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AdvertiseData_Builder::addServiceData(android::os::ParcelUuid arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"addServiceData",
			"(Landroid/os/ParcelUuid;[B)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AdvertiseData_Builder::addServiceUuid(android::os::ParcelUuid arg0)
	{
		return __thiz.callObjectMethod(
			"addServiceUuid",
			"(Landroid/os/ParcelUuid;)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AdvertiseData_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/AdvertiseData;"
		);
	}
	QAndroidJniObject AdvertiseData_Builder::setIncludeDeviceName(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIncludeDeviceName",
			"(Z)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertiseData_Builder::setIncludeTxPowerLevel(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIncludeTxPowerLevel",
			"(Z)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

