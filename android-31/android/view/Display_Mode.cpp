#include "../../JFloatArray.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Display_Mode.hpp"

namespace android::view
{
	// Fields
	JObject Display_Mode::CREATOR()
	{
		return getStaticObjectField(
			"android.view.Display$Mode",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	Display_Mode::Display_Mode(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Display_Mode::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Display_Mode::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JFloatArray Display_Mode::getAlternativeRefreshRates()
	{
		return callObjectMethod(
			"getAlternativeRefreshRates",
			"()[F"
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
	JString Display_Mode::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

