#pragma once

#ifndef ANDROID_VIEW_WINDOWANIMATIONFRAMESTATS
#define ANDROID_VIEW_WINDOWANIMATIONFRAMESTATS

#include "../../__JniBaseClass.hpp"
#include "FrameStats.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view
{
	class WindowAnimationFrameStats : public __jni_impl::android::view::FrameStats
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view

#include "../os/Parcel.hpp"

namespace __jni_impl::android::view
{
	// Fields
	QAndroidJniObject WindowAnimationFrameStats::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.WindowAnimationFrameStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void WindowAnimationFrameStats::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowAnimationFrameStats",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject WindowAnimationFrameStats::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint WindowAnimationFrameStats::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void WindowAnimationFrameStats::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class WindowAnimationFrameStats : public __jni_impl::android::view::WindowAnimationFrameStats
	{
	public:
		WindowAnimationFrameStats(QAndroidJniObject obj) { __thiz = obj; }
		WindowAnimationFrameStats()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_WINDOWANIMATIONFRAMESTATS

