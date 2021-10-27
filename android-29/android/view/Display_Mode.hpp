#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view
{
	class Display_Mode : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getModeId();
		jint getPhysicalHeight();
		jint getPhysicalWidth();
		jfloat getRefreshRate();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view

#include "../os/Parcel.hpp"

namespace __jni_impl::android::view
{
	// Fields
	QAndroidJniObject Display_Mode::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.Display$Mode",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void Display_Mode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.Display$Mode",
			"(V)V");
	}
	
	// Methods
	jint Display_Mode::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Display_Mode::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Display_Mode::getModeId()
	{
		return __thiz.callMethod<jint>(
			"getModeId",
			"()I"
		);
	}
	jint Display_Mode::getPhysicalHeight()
	{
		return __thiz.callMethod<jint>(
			"getPhysicalHeight",
			"()I"
		);
	}
	jint Display_Mode::getPhysicalWidth()
	{
		return __thiz.callMethod<jint>(
			"getPhysicalWidth",
			"()I"
		);
	}
	jfloat Display_Mode::getRefreshRate()
	{
		return __thiz.callMethod<jfloat>(
			"getRefreshRate",
			"()F"
		);
	}
	jint Display_Mode::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Display_Mode::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Display_Mode::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class Display_Mode : public __jni_impl::android::view::Display_Mode
	{
	public:
		Display_Mode(QAndroidJniObject obj) { __thiz = obj; }
		Display_Mode()
		{
			__constructor();
		}
	};
} // namespace android::view

