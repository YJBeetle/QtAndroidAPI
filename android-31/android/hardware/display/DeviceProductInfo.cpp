#include "../../os/Parcel.hpp"
#include "./DeviceProductInfo.hpp"

namespace android::hardware::display
{
	// Fields
	jint DeviceProductInfo::CONNECTION_TO_SINK_BUILT_IN()
	{
		return getStaticField<jint>(
			"android.hardware.display.DeviceProductInfo",
			"CONNECTION_TO_SINK_BUILT_IN"
		);
	}
	jint DeviceProductInfo::CONNECTION_TO_SINK_DIRECT()
	{
		return getStaticField<jint>(
			"android.hardware.display.DeviceProductInfo",
			"CONNECTION_TO_SINK_DIRECT"
		);
	}
	jint DeviceProductInfo::CONNECTION_TO_SINK_TRANSITIVE()
	{
		return getStaticField<jint>(
			"android.hardware.display.DeviceProductInfo",
			"CONNECTION_TO_SINK_TRANSITIVE"
		);
	}
	jint DeviceProductInfo::CONNECTION_TO_SINK_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.hardware.display.DeviceProductInfo",
			"CONNECTION_TO_SINK_UNKNOWN"
		);
	}
	__JniBaseClass DeviceProductInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.display.DeviceProductInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	DeviceProductInfo::DeviceProductInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DeviceProductInfo::DeviceProductInfo(jstring arg0, jstring arg1, jstring arg2, jint arg3, jint arg4)
		: __JniBaseClass(
			"android.hardware.display.DeviceProductInfo",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	jint DeviceProductInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean DeviceProductInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint DeviceProductInfo::getConnectionToSinkType()
	{
		return callMethod<jint>(
			"getConnectionToSinkType",
			"()I"
		);
	}
	jint DeviceProductInfo::getManufactureWeek()
	{
		return callMethod<jint>(
			"getManufactureWeek",
			"()I"
		);
	}
	jint DeviceProductInfo::getManufactureYear()
	{
		return callMethod<jint>(
			"getManufactureYear",
			"()I"
		);
	}
	jstring DeviceProductInfo::getManufacturerPnpId()
	{
		return callObjectMethod(
			"getManufacturerPnpId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DeviceProductInfo::getModelYear()
	{
		return callMethod<jint>(
			"getModelYear",
			"()I"
		);
	}
	jstring DeviceProductInfo::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DeviceProductInfo::getProductId()
	{
		return callObjectMethod(
			"getProductId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DeviceProductInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring DeviceProductInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DeviceProductInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::display

