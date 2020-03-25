#pragma once

#ifndef ANDROID_APP_AUTHENTICATIONREQUIREDEXCEPTION
#define ANDROID_APP_AUTHENTICATIONREQUIREDEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/SecurityException.hpp"

namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class AuthenticationRequiredException : public __jni_impl::java::lang::SecurityException
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jthrowable arg0, __jni_impl::android::app::PendingIntent arg1);
		
		// Methods
		QAndroidJniObject getUserAction();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "PendingIntent.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject AuthenticationRequiredException::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AuthenticationRequiredException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void AuthenticationRequiredException::__constructor(jthrowable arg0, __jni_impl::android::app::PendingIntent arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.AuthenticationRequiredException",
			"(Ljava/lang/Throwable;Landroid/app/PendingIntent;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject AuthenticationRequiredException::getUserAction()
	{
		return __thiz.callObjectMethod(
			"getUserAction",
			"()Landroid/app/PendingIntent;");
	}
	jint AuthenticationRequiredException::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void AuthenticationRequiredException::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class AuthenticationRequiredException : public __jni_impl::android::app::AuthenticationRequiredException
	{
	public:
		AuthenticationRequiredException(QAndroidJniObject obj) { __thiz = obj; }
		AuthenticationRequiredException(jthrowable arg0, __jni_impl::android::app::PendingIntent arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_AUTHENTICATIONREQUIREDEXCEPTION

