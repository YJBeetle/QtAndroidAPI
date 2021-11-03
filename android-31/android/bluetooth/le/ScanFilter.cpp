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
	jint ScanFilter::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ScanFilter::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString ScanFilter::getDeviceAddress() const
	{
		return callObjectMethod(
			"getDeviceAddress",
			"()Ljava/lang/String;"
		);
	}
	JString ScanFilter::getDeviceName() const
	{
		return callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		);
	}
	JByteArray ScanFilter::getManufacturerData() const
	{
		return callObjectMethod(
			"getManufacturerData",
			"()[B"
		);
	}
	JByteArray ScanFilter::getManufacturerDataMask() const
	{
		return callObjectMethod(
			"getManufacturerDataMask",
			"()[B"
		);
	}
	jint ScanFilter::getManufacturerId() const
	{
		return callMethod<jint>(
			"getManufacturerId",
			"()I"
		);
	}
	JByteArray ScanFilter::getServiceData() const
	{
		return callObjectMethod(
			"getServiceData",
			"()[B"
		);
	}
	JByteArray ScanFilter::getServiceDataMask() const
	{
		return callObjectMethod(
			"getServiceDataMask",
			"()[B"
		);
	}
	android::os::ParcelUuid ScanFilter::getServiceDataUuid() const
	{
		return callObjectMethod(
			"getServiceDataUuid",
			"()Landroid/os/ParcelUuid;"
		);
	}
	android::os::ParcelUuid ScanFilter::getServiceSolicitationUuid() const
	{
		return callObjectMethod(
			"getServiceSolicitationUuid",
			"()Landroid/os/ParcelUuid;"
		);
	}
	android::os::ParcelUuid ScanFilter::getServiceSolicitationUuidMask() const
	{
		return callObjectMethod(
			"getServiceSolicitationUuidMask",
			"()Landroid/os/ParcelUuid;"
		);
	}
	android::os::ParcelUuid ScanFilter::getServiceUuid() const
	{
		return callObjectMethod(
			"getServiceUuid",
			"()Landroid/os/ParcelUuid;"
		);
	}
	android::os::ParcelUuid ScanFilter::getServiceUuidMask() const
	{
		return callObjectMethod(
			"getServiceUuidMask",
			"()Landroid/os/ParcelUuid;"
		);
	}
	jint ScanFilter::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ScanFilter::matches(android::bluetooth::le::ScanResult arg0) const
	{
		return callMethod<jboolean>(
			"matches",
			"(Landroid/bluetooth/le/ScanResult;)Z",
			arg0.object()
		);
	}
	JString ScanFilter::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ScanFilter::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

