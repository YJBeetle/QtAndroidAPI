#pragma once

#ifndef ANDROID_VIEW_VIEW_BASESAVEDSTATE
#define ANDROID_VIEW_VIEW_BASESAVEDSTATE

#include "../../__JniBaseClass.hpp"
#include "AbsSavedState.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}

namespace __jni_impl::android::view
{
	class View_BaseSavedState : public __jni_impl::android::view::AbsSavedState
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(__jni_impl::android::os::Parcel arg0, __jni_impl::java::lang::ClassLoader arg1);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view

#include "../os/Parcel.hpp"
#include "../../java/lang/ClassLoader.hpp"

namespace __jni_impl::android::view
{
	// Fields
	QAndroidJniObject View_BaseSavedState::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View$BaseSavedState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void View_BaseSavedState::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.View$BaseSavedState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object());
	}
	void View_BaseSavedState::__constructor(__jni_impl::android::os::Parcel arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.View$BaseSavedState",
			"(Landroid/os/Parcel;Ljava/lang/ClassLoader;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void View_BaseSavedState::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.View$BaseSavedState",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void View_BaseSavedState::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class View_BaseSavedState : public __jni_impl::android::view::View_BaseSavedState
	{
	public:
		View_BaseSavedState(QAndroidJniObject obj) { __thiz = obj; }
		View_BaseSavedState(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		View_BaseSavedState(__jni_impl::android::os::Parcel arg0, __jni_impl::java::lang::ClassLoader arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		View_BaseSavedState(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_VIEW_BASESAVEDSTATE

