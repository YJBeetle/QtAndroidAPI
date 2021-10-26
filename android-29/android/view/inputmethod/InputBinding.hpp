#pragma once

#ifndef ANDROID_VIEW_INPUTMETHOD_INPUTBINDING
#define ANDROID_VIEW_INPUTMETHOD_INPUTBINDING

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::inputmethod
{
	class InputBinding : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::inputmethod::InputBinding arg1);
		
		// Methods
		jstring toString();
		jint getPid();
		QAndroidJniObject getConnection();
		QAndroidJniObject getConnectionToken();
		jint getUid();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::inputmethod

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::inputmethod
{
	// Fields
	QAndroidJniObject InputBinding::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.inputmethod.InputBinding",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void InputBinding::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.InputBinding",
			"(Landroid/view/inputmethod/InputConnection;Landroid/os/IBinder;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void InputBinding::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::inputmethod::InputBinding arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.InputBinding",
			"(Landroid/view/inputmethod/InputConnection;Landroid/view/inputmethod/InputBinding;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jstring InputBinding::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint InputBinding::getPid()
	{
		return __thiz.callMethod<jint>(
			"getPid",
			"()I"
		);
	}
	QAndroidJniObject InputBinding::getConnection()
	{
		return __thiz.callObjectMethod(
			"getConnection",
			"()Landroid/view/inputmethod/InputConnection;"
		);
	}
	QAndroidJniObject InputBinding::getConnectionToken()
	{
		return __thiz.callObjectMethod(
			"getConnectionToken",
			"()Landroid/os/IBinder;"
		);
	}
	jint InputBinding::getUid()
	{
		return __thiz.callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	jint InputBinding::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void InputBinding::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view::inputmethod

namespace android::view::inputmethod
{
	class InputBinding : public __jni_impl::android::view::inputmethod::InputBinding
	{
	public:
		InputBinding(QAndroidJniObject obj) { __thiz = obj; }
		InputBinding(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		InputBinding(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::inputmethod::InputBinding arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view::inputmethod

#endif // ANDROID_VIEW_INPUTMETHOD_INPUTBINDING

