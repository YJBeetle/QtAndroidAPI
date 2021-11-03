#include "../os/Parcel.hpp"
#include "./Display_HdrCapabilities.hpp"

namespace android::view
{
	// Fields
	JObject Display_HdrCapabilities::CREATOR()
	{
		return getStaticObjectField(
			"android.view.Display$HdrCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Display_HdrCapabilities::HDR_TYPE_DOLBY_VISION()
	{
		return getStaticField<jint>(
			"android.view.Display$HdrCapabilities",
			"HDR_TYPE_DOLBY_VISION"
		);
	}
	jint Display_HdrCapabilities::HDR_TYPE_HDR10()
	{
		return getStaticField<jint>(
			"android.view.Display$HdrCapabilities",
			"HDR_TYPE_HDR10"
		);
	}
	jint Display_HdrCapabilities::HDR_TYPE_HLG()
	{
		return getStaticField<jint>(
			"android.view.Display$HdrCapabilities",
			"HDR_TYPE_HLG"
		);
	}
	jfloat Display_HdrCapabilities::INVALID_LUMINANCE()
	{
		return getStaticField<jfloat>(
			"android.view.Display$HdrCapabilities",
			"INVALID_LUMINANCE"
		);
	}
	
	// QAndroidJniObject forward
	Display_HdrCapabilities::Display_HdrCapabilities(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Display_HdrCapabilities::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Display_HdrCapabilities::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat Display_HdrCapabilities::getDesiredMaxAverageLuminance()
	{
		return callMethod<jfloat>(
			"getDesiredMaxAverageLuminance",
			"()F"
		);
	}
	jfloat Display_HdrCapabilities::getDesiredMaxLuminance()
	{
		return callMethod<jfloat>(
			"getDesiredMaxLuminance",
			"()F"
		);
	}
	jfloat Display_HdrCapabilities::getDesiredMinLuminance()
	{
		return callMethod<jfloat>(
			"getDesiredMinLuminance",
			"()F"
		);
	}
	jintArray Display_HdrCapabilities::getSupportedHdrTypes()
	{
		return callObjectMethod(
			"getSupportedHdrTypes",
			"()[I"
		).object<jintArray>();
	}
	jint Display_HdrCapabilities::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Display_HdrCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

