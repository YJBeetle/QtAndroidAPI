#pragma once

#ifndef ANDROID_ACCOUNTS_AUTHENTICATORDESCRIPTION
#define ANDROID_ACCOUNTS_AUTHENTICATORDESCRIPTION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::accounts
{
	class AuthenticatorDescription : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jint accountPreferencesId();
		jboolean customTokens();
		jint iconId();
		jint labelId();
		QAndroidJniObject packageName();
		jint smallIconId();
		QAndroidJniObject type();
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jboolean arg6);
		void __constructor(jstring arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		static QAndroidJniObject newKey(jstring arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::accounts

#include "../os/Parcel.hpp"

namespace __jni_impl::android::accounts
{
	// Fields
	QAndroidJniObject AuthenticatorDescription::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AuthenticatorDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint AuthenticatorDescription::accountPreferencesId()
	{
		return __thiz.getField<jint>(
			"accountPreferencesId");
	}
	jboolean AuthenticatorDescription::customTokens()
	{
		return __thiz.getField<jboolean>(
			"customTokens");
	}
	jint AuthenticatorDescription::iconId()
	{
		return __thiz.getField<jint>(
			"iconId");
	}
	jint AuthenticatorDescription::labelId()
	{
		return __thiz.getField<jint>(
			"labelId");
	}
	QAndroidJniObject AuthenticatorDescription::packageName()
	{
		return __thiz.getObjectField(
			"packageName",
			"Ljava/lang/String;");
	}
	jint AuthenticatorDescription::smallIconId()
	{
		return __thiz.getField<jint>(
			"smallIconId");
	}
	QAndroidJniObject AuthenticatorDescription::type()
	{
		return __thiz.getObjectField(
			"type",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void AuthenticatorDescription::__constructor(jstring arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jboolean arg6)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AuthenticatorDescription",
			"(Ljava/lang/String;Ljava/lang/String;IIIIZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6);
	}
	void AuthenticatorDescription::__constructor(jstring arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AuthenticatorDescription",
			"(Ljava/lang/String;Ljava/lang/String;IIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	
	// Methods
	jboolean AuthenticatorDescription::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject AuthenticatorDescription::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint AuthenticatorDescription::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject AuthenticatorDescription::newKey(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.accounts.AuthenticatorDescription",
			"newKey",
			"(Ljava/lang/String;)Landroid/accounts/AuthenticatorDescription;",
			arg0);
	}
	jint AuthenticatorDescription::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void AuthenticatorDescription::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::accounts

namespace android::accounts
{
	class AuthenticatorDescription : public __jni_impl::android::accounts::AuthenticatorDescription
	{
	public:
		AuthenticatorDescription(QAndroidJniObject obj) { __thiz = obj; }
		AuthenticatorDescription(jstring arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jboolean arg6)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6);
		}
		AuthenticatorDescription(jstring arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
	};
} // namespace android::accounts

#endif // ANDROID_ACCOUNTS_AUTHENTICATORDESCRIPTION

