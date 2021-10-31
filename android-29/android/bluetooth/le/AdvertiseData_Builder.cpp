#include "./AdvertiseData.hpp"
#include "../../os/ParcelUuid.hpp"
#include "./AdvertiseData_Builder.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// QAndroidJniObject forward
	AdvertiseData_Builder::AdvertiseData_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AdvertiseData_Builder::AdvertiseData_Builder()
		: __JniBaseClass(
			"android.bluetooth.le.AdvertiseData$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject AdvertiseData_Builder::addManufacturerData(jint arg0, jbyteArray arg1)
	{
		return callObjectMethod(
			"addManufacturerData",
			"(I[B)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AdvertiseData_Builder::addServiceData(android::os::ParcelUuid arg0, jbyteArray arg1)
	{
		return callObjectMethod(
			"addServiceData",
			"(Landroid/os/ParcelUuid;[B)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject AdvertiseData_Builder::addServiceUuid(android::os::ParcelUuid arg0)
	{
		return callObjectMethod(
			"addServiceUuid",
			"(Landroid/os/ParcelUuid;)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject AdvertiseData_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/AdvertiseData;"
		);
	}
	QAndroidJniObject AdvertiseData_Builder::setIncludeDeviceName(jboolean arg0)
	{
		return callObjectMethod(
			"setIncludeDeviceName",
			"(Z)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertiseData_Builder::setIncludeTxPowerLevel(jboolean arg0)
	{
		return callObjectMethod(
			"setIncludeTxPowerLevel",
			"(Z)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

