#include "./ScanResult.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/ParcelUuid.hpp"
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
	jboolean ScanFilter::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ScanFilter::getDeviceAddress()
	{
		return callObjectMethod(
			"getDeviceAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ScanFilter::getDeviceName()
	{
		return callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray ScanFilter::getManufacturerData()
	{
		return callObjectMethod(
			"getManufacturerData",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray ScanFilter::getManufacturerDataMask()
	{
		return callObjectMethod(
			"getManufacturerDataMask",
			"()[B"
		).object<jbyteArray>();
	}
	jint ScanFilter::getManufacturerId()
	{
		return callMethod<jint>(
			"getManufacturerId",
			"()I"
		);
	}
	jbyteArray ScanFilter::getServiceData()
	{
		return callObjectMethod(
			"getServiceData",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray ScanFilter::getServiceDataMask()
	{
		return callObjectMethod(
			"getServiceDataMask",
			"()[B"
		).object<jbyteArray>();
	}
	android::os::ParcelUuid ScanFilter::getServiceDataUuid()
	{
		return callObjectMethod(
			"getServiceDataUuid",
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
	jstring ScanFilter::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

