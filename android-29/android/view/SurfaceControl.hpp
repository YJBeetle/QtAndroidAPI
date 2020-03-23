#pragma once

#ifndef ANDROID_VIEW_SURFACECONTROL
#define ANDROID_VIEW_SURFACECONTROL

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view
{
	class SurfaceControl : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		void release();
		jboolean isValid();
		void readFromParcel(__jni_impl::android::os::Parcel arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view

#include "../os/Parcel.hpp"

namespace __jni_impl::android::view
{
	// Fields
	QAndroidJniObject SurfaceControl::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.SurfaceControl",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void SurfaceControl::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.SurfaceControl",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SurfaceControl::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void SurfaceControl::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V");
	}
	jboolean SurfaceControl::isValid()
	{
		return __thiz.callMethod<jboolean>(
			"isValid",
			"()Z");
	}
	void SurfaceControl::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	jint SurfaceControl::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void SurfaceControl::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class SurfaceControl : public __jni_impl::android::view::SurfaceControl
	{
	public:
		SurfaceControl(QAndroidJniObject obj) { __thiz = obj; }
		SurfaceControl()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_SURFACECONTROL

