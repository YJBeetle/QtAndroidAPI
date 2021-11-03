#include "../../os/Parcel.hpp"
#include "../../util/SparseArray.hpp"
#include "./AdvertiseData.hpp"

namespace android::bluetooth::le
{
	// Fields
	JObject AdvertiseData::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.le.AdvertiseData",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	AdvertiseData::AdvertiseData(QAndroidJniObject obj) : JObject(obj) {}
	
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
	android::util::SparseArray AdvertiseData::getManufacturerSpecificData()
	{
		return callObjectMethod(
			"getManufacturerSpecificData",
			"()Landroid/util/SparseArray;"
		);
	}
	JObject AdvertiseData::getServiceData()
	{
		return callObjectMethod(
			"getServiceData",
			"()Ljava/util/Map;"
		);
	}
	JObject AdvertiseData::getServiceUuids()
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

