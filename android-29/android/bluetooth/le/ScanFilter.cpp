#include "./ScanResult.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/ParcelUuid.hpp"
#include "./ScanFilter.hpp"

namespace android::bluetooth::le
{
	// Fields
	QAndroidJniObject ScanFilter::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.ScanFilter",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	ScanFilter::ScanFilter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint ScanFilter::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ScanFilter::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ScanFilter::getDeviceAddress()
	{
		return __thiz.callObjectMethod(
			"getDeviceAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ScanFilter::getDeviceName()
	{
		return __thiz.callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray ScanFilter::getManufacturerData()
	{
		return __thiz.callObjectMethod(
			"getManufacturerData",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray ScanFilter::getManufacturerDataMask()
	{
		return __thiz.callObjectMethod(
			"getManufacturerDataMask",
			"()[B"
		).object<jbyteArray>();
	}
	jint ScanFilter::getManufacturerId()
	{
		return __thiz.callMethod<jint>(
			"getManufacturerId",
			"()I"
		);
	}
	jbyteArray ScanFilter::getServiceData()
	{
		return __thiz.callObjectMethod(
			"getServiceData",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray ScanFilter::getServiceDataMask()
	{
		return __thiz.callObjectMethod(
			"getServiceDataMask",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject ScanFilter::getServiceDataUuid()
	{
		return __thiz.callObjectMethod(
			"getServiceDataUuid",
			"()Landroid/os/ParcelUuid;"
		);
	}
	QAndroidJniObject ScanFilter::getServiceSolicitationUuid()
	{
		return __thiz.callObjectMethod(
			"getServiceSolicitationUuid",
			"()Landroid/os/ParcelUuid;"
		);
	}
	QAndroidJniObject ScanFilter::getServiceSolicitationUuidMask()
	{
		return __thiz.callObjectMethod(
			"getServiceSolicitationUuidMask",
			"()Landroid/os/ParcelUuid;"
		);
	}
	QAndroidJniObject ScanFilter::getServiceUuid()
	{
		return __thiz.callObjectMethod(
			"getServiceUuid",
			"()Landroid/os/ParcelUuid;"
		);
	}
	QAndroidJniObject ScanFilter::getServiceUuidMask()
	{
		return __thiz.callObjectMethod(
			"getServiceUuidMask",
			"()Landroid/os/ParcelUuid;"
		);
	}
	jint ScanFilter::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ScanFilter::matches(android::bluetooth::le::ScanResult arg0)
	{
		return __thiz.callMethod<jboolean>(
			"matches",
			"(Landroid/bluetooth/le/ScanResult;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring ScanFilter::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ScanFilter::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

