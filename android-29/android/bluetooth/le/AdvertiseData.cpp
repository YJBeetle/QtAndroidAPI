#include "../../os/Parcel.hpp"
#include "../../util/SparseArray.hpp"
#include "./AdvertiseData.hpp"

namespace android::bluetooth::le
{
	// Fields
	QAndroidJniObject AdvertiseData::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.AdvertiseData",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	AdvertiseData::AdvertiseData(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint AdvertiseData::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AdvertiseData::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean AdvertiseData::getIncludeDeviceName()
	{
		return callMethod<jboolean>(
			"getIncludeDeviceName",
			"()Z"
		);
	}
	jboolean AdvertiseData::getIncludeTxPowerLevel()
	{
		return callMethod<jboolean>(
			"getIncludeTxPowerLevel",
			"()Z"
		);
	}
	QAndroidJniObject AdvertiseData::getManufacturerSpecificData()
	{
		return callObjectMethod(
			"getManufacturerSpecificData",
			"()Landroid/util/SparseArray;"
		);
	}
	QAndroidJniObject AdvertiseData::getServiceData()
	{
		return callObjectMethod(
			"getServiceData",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject AdvertiseData::getServiceUuids()
	{
		return callObjectMethod(
			"getServiceUuids",
			"()Ljava/util/List;"
		);
	}
	jint AdvertiseData::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring AdvertiseData::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AdvertiseData::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

