#include "../os/Parcel.hpp"
#include "./Display_Mode.hpp"

namespace android::view
{
	// Fields
	__JniBaseClass Display_Mode::CREATOR()
	{
		return getStaticObjectField(
			"android.view.Display$Mode",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	Display_Mode::Display_Mode(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint Display_Mode::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Display_Mode::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Display_Mode::getModeId()
	{
		return callMethod<jint>(
			"getModeId",
			"()I"
		);
	}
	jint Display_Mode::getPhysicalHeight()
	{
		return callMethod<jint>(
			"getPhysicalHeight",
			"()I"
		);
	}
	jint Display_Mode::getPhysicalWidth()
	{
		return callMethod<jint>(
			"getPhysicalWidth",
			"()I"
		);
	}
	jfloat Display_Mode::getRefreshRate()
	{
		return callMethod<jfloat>(
			"getRefreshRate",
			"()F"
		);
	}
	jint Display_Mode::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Display_Mode::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Display_Mode::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

