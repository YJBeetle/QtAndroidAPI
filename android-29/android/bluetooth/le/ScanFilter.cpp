#include "../../../JByteArray.hpp"
#include "./ScanResult.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/ParcelUuid.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ScanFilter.hpp"

namespace android::bluetooth::le
{
	// Fields
	JObject ScanFilter::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.le.ScanFilter",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ScanFilter::ScanFilter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ScanFilter::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ScanFilter::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString ScanFilter::getDeviceAddress()
	{
		return callObjectMethod(
			"getDeviceAddress",
			"()Ljava/lang/String;"
		);
	}
	JString ScanFilter::getDeviceName()
	{
		return callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		);
	}
	JByteArray ScanFilter::getManufacturerData()
	{
		return callObjectMethod(
			"getManufacturerData",
			"()[B"
		);
	}
	JByteArray ScanFilter::getManufacturerDataMask()
	{
		return callObjectMethod(
			"getManufacturerDataMask",
			"()[B"
		);
	}
	jint ScanFilter::getManufacturerId()
	{
		return callMethod<jint>(
			"getManufacturerId",
			"()I"
		);
	}
	JByteArray ScanFilter::getServiceData()
	{
		return callObjectMethod(
			"getServiceData",
			"()[B"
		);
	}
	JByteArray ScanFilter::getServiceDataMask()
	{
		return callObjectMethod(
			"getServiceDataMask",
			"()[B"
		);
	}
	android::os::ParcelUuid ScanFilter::getServiceDataUuid()
	{
		return callObjectMethod(
			"getServiceDataUuid",
			"()Landroid/os/ParcelUuid;"
		);
	}
	android::os::ParcelUuid ScanFilter::getServiceSolicitationUuid()
	{
		return callObjectMethod(
			"getServiceSolicitationUuid",
			"()Landroid/os/ParcelUuid;"
		);
	}
	android::os::ParcelUuid ScanFilter::getServiceSolicitationUuidMask()
	{
		return callObjectMethod(
			"getServiceSolicitationUuidMask",
			"()Landroid/os/ParcelUuid;"
		);
	}
	android::os::ParcelUuid ScanFilter::getServiceUuid()
	{
		return callObjectMethod(
			"getServiceUuid",
			"()Landroid/os/ParcelUuid;"
		);
	}
	android::os::ParcelUuid ScanFilter::getServiceUuidMask()
	{
		return callObjectMethod(
			"getServiceUuidMask",
			"()Landroid/os/ParcelUuid;"
		);
	}
	jint ScanFilter::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ScanFilter::matches(android::bluetooth::le::ScanResult arg0)
	{
		return callMethod<jboolean>(
			"matches",
			"(Landroid/bluetooth/le/ScanResult;)Z",
			arg0.object()
		);
	}
	JString ScanFilter::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ScanFilter::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

