#include "../../../JByteArray.hpp"
#include "./AdvertiseData.hpp"
#include "../../os/ParcelUuid.hpp"
#include "./AdvertiseData_Builder.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// QJniObject forward
	AdvertiseData_Builder::AdvertiseData_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AdvertiseData_Builder::AdvertiseData_Builder()
		: JObject(
			"android.bluetooth.le.AdvertiseData$Builder",
			"()V"
		) {}
	
	// Methods
	android::bluetooth::le::AdvertiseData_Builder AdvertiseData_Builder::addManufacturerData(jint arg0, JByteArray arg1)
	{
		return callObjectMethod(
			"addManufacturerData",
			"(I[B)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	android::bluetooth::le::AdvertiseData_Builder AdvertiseData_Builder::addServiceData(android::os::ParcelUuid arg0, JByteArray arg1)
	{
		return callObjectMethod(
			"addServiceData",
			"(Landroid/os/ParcelUuid;[B)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	android::bluetooth::le::AdvertiseData_Builder AdvertiseData_Builder::addServiceUuid(android::os::ParcelUuid arg0)
	{
		return callObjectMethod(
			"addServiceUuid",
			"(Landroid/os/ParcelUuid;)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0.object()
		);
	}
	android::bluetooth::le::AdvertiseData AdvertiseData_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/AdvertiseData;"
		);
	}
	android::bluetooth::le::AdvertiseData_Builder AdvertiseData_Builder::setIncludeDeviceName(jboolean arg0)
	{
		return callObjectMethod(
			"setIncludeDeviceName",
			"(Z)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0
		);
	}
	android::bluetooth::le::AdvertiseData_Builder AdvertiseData_Builder::setIncludeTxPowerLevel(jboolean arg0)
	{
		return callObjectMethod(
			"setIncludeTxPowerLevel",
			"(Z)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

