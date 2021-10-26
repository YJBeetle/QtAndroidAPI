#pragma once

#ifndef ANDROID_VIEW_WINDOWID
#define ANDROID_VIEW_WINDOWID

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class WindowId_FocusObserver;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view
{
	class WindowId : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jboolean isFocused();
		void unregisterFocusObserver(__jni_impl::android::view::WindowId_FocusObserver arg0);
		void registerFocusObserver(__jni_impl::android::view::WindowId_FocusObserver arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view

#include "WindowId_FocusObserver.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::view
{
	// Fields
	QAndroidJniObject WindowId::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.WindowId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void WindowId::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowId",
			"(V)V");
	}
	
	// Methods
	jboolean WindowId::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring WindowId::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WindowId::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean WindowId::isFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	void WindowId::unregisterFocusObserver(__jni_impl::android::view::WindowId_FocusObserver arg0)
	{
		__thiz.callMethod<void>(
			"unregisterFocusObserver",
			"(Landroid/view/WindowId$FocusObserver;)V",
			arg0.__jniObject().object()
		);
	}
	void WindowId::registerFocusObserver(__jni_impl::android::view::WindowId_FocusObserver arg0)
	{
		__thiz.callMethod<void>(
			"registerFocusObserver",
			"(Landroid/view/WindowId$FocusObserver;)V",
			arg0.__jniObject().object()
		);
	}
	jint WindowId::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void WindowId::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class WindowId : public __jni_impl::android::view::WindowId
	{
	public:
		WindowId(QAndroidJniObject obj) { __thiz = obj; }
		WindowId()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_WINDOWID

