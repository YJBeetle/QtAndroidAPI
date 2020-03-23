#pragma once

#ifndef ANDROID_APP_RECOVERABLESECURITYEXCEPTION
#define ANDROID_APP_RECOVERABLESECURITYEXCEPTION

#include "../../java/lang/SecurityException.hpp"

namespace __jni_impl::android::app
{
	class RemoteAction;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class RecoverableSecurityException : public __jni_impl::java::lang::SecurityException
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jthrowable arg0, jstring arg1, __jni_impl::android::app::RemoteAction arg2);
		
		// Methods
		QAndroidJniObject getUserMessage();
		QAndroidJniObject getUserAction();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "RemoteAction.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject RecoverableSecurityException::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.RecoverableSecurityException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void RecoverableSecurityException::__constructor(jthrowable arg0, jstring arg1, __jni_impl::android::app::RemoteAction arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.RecoverableSecurityException",
			"(Ljava/lang/Throwable;Ljava/lang/CharSequence;Landroid/app/RemoteAction;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject RecoverableSecurityException::getUserMessage()
	{
		return __thiz.callObjectMethod(
			"getUserMessage",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject RecoverableSecurityException::getUserAction()
	{
		return __thiz.callObjectMethod(
			"getUserAction",
			"()Landroid/app/RemoteAction;");
	}
	jint RecoverableSecurityException::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void RecoverableSecurityException::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class RecoverableSecurityException : public __jni_impl::android::app::RecoverableSecurityException
	{
	public:
		RecoverableSecurityException(QAndroidJniObject obj) { __thiz = obj; }
		RecoverableSecurityException(jthrowable arg0, jstring arg1, __jni_impl::android::app::RemoteAction arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_RECOVERABLESECURITYEXCEPTION

