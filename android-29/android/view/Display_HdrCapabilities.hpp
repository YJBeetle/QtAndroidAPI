#pragma once

#ifndef ANDROID_VIEW_DISPLAY_HDRCAPABILITIES
#define ANDROID_VIEW_DISPLAY_HDRCAPABILITIES

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view
{
	class Display_HdrCapabilities : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint HDR_TYPE_DOLBY_VISION();
		static jint HDR_TYPE_HDR10();
		static jint HDR_TYPE_HDR10_PLUS();
		static jint HDR_TYPE_HLG();
		static jfloat INVALID_LUMINANCE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jfloat getDesiredMaxAverageLuminance();
		jfloat getDesiredMaxLuminance();
		jfloat getDesiredMinLuminance();
		jintArray getSupportedHdrTypes();
		jint hashCode();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view

#include "../os/Parcel.hpp"

namespace __jni_impl::android::view
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
	
	// Constructors
	void Display_HdrCapabilities::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.Display$HdrCapabilities",
			"(V)V");
	}
	
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
	void Display_HdrCapabilities::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class Display_HdrCapabilities : public __jni_impl::android::view::Display_HdrCapabilities
	{
	public:
		Display_HdrCapabilities(QAndroidJniObject obj) { __thiz = obj; }
		Display_HdrCapabilities()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_DISPLAY_HDRCAPABILITIES

