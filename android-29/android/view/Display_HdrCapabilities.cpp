#include "../os/Parcel.hpp"
#include "./Display_HdrCapabilities.hpp"

namespace android::view
{
	// Fields
	QAndroidJniObject Display_HdrCapabilities::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.Display$HdrCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Display_HdrCapabilities::HDR_TYPE_DOLBY_VISION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display$HdrCapabilities",
			"HDR_TYPE_DOLBY_VISION"
		);
	}
	jint Display_HdrCapabilities::HDR_TYPE_HDR10()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display$HdrCapabilities",
			"HDR_TYPE_HDR10"
		);
	}
	jint Display_HdrCapabilities::HDR_TYPE_HDR10_PLUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display$HdrCapabilities",
			"HDR_TYPE_HDR10_PLUS"
		);
	}
	jint Display_HdrCapabilities::HDR_TYPE_HLG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display$HdrCapabilities",
			"HDR_TYPE_HLG"
		);
	}
	jfloat Display_HdrCapabilities::INVALID_LUMINANCE()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.view.Display$HdrCapabilities",
			"INVALID_LUMINANCE"
		);
	}
	
	Display_HdrCapabilities::Display_HdrCapabilities(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint Display_HdrCapabilities::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Display_HdrCapabilities::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat Display_HdrCapabilities::getDesiredMaxAverageLuminance()
	{
		return __thiz.callMethod<jfloat>(
			"getDesiredMaxAverageLuminance",
			"()F"
		);
	}
	jfloat Display_HdrCapabilities::getDesiredMaxLuminance()
	{
		return __thiz.callMethod<jfloat>(
			"getDesiredMaxLuminance",
			"()F"
		);
	}
	jfloat Display_HdrCapabilities::getDesiredMinLuminance()
	{
		return __thiz.callMethod<jfloat>(
			"getDesiredMinLuminance",
			"()F"
		);
	}
	jintArray Display_HdrCapabilities::getSupportedHdrTypes()
	{
		return __thiz.callObjectMethod(
			"getSupportedHdrTypes",
			"()[I"
		).object<jintArray>();
	}
	jint Display_HdrCapabilities::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Display_HdrCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view

