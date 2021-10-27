#pragma once

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
		jstring packageName();
		jint smallIconId();
		jstring type();
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void __constructor(jstring arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jboolean arg6);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2, jint arg3, jint arg4, jint arg5, jboolean arg6);
		
		// Methods
		static QAndroidJniObject newKey(jstring arg0);
		static QAndroidJniObject newKey(const QString &arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
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
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint AuthenticatorDescription::accountPreferencesId()
	{
		return __thiz.getField<jint>(
			"accountPreferencesId"
		);
	}
	jboolean AuthenticatorDescription::customTokens()
	{
		return __thiz.getField<jboolean>(
			"customTokens"
		);
	}
	jint AuthenticatorDescription::iconId()
	{
		return __thiz.getField<jint>(
			"iconId"
		);
	}
	jint AuthenticatorDescription::labelId()
	{
		return __thiz.getField<jint>(
			"labelId"
		);
	}
	jstring AuthenticatorDescription::packageName()
	{
		return __thiz.getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AuthenticatorDescription::smallIconId()
	{
		return __thiz.getField<jint>(
			"smallIconId"
		);
	}
	jstring AuthenticatorDescription::type()
	{
		return __thiz.getObjectField(
			"type",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
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
			arg5
		);
	}
	void AuthenticatorDescription::__constructor(const QString &arg0, const QString &arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AuthenticatorDescription",
			"(Ljava/lang/String;Ljava/lang/String;IIII)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
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
			arg6
		);
	}
	void AuthenticatorDescription::__constructor(const QString &arg0, const QString &arg1, jint arg2, jint arg3, jint arg4, jint arg5, jboolean arg6)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AuthenticatorDescription",
			"(Ljava/lang/String;Ljava/lang/String;IIIIZ)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	
	// Methods
	QAndroidJniObject AuthenticatorDescription::newKey(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.accounts.AuthenticatorDescription",
			"newKey",
			"(Ljava/lang/String;)Landroid/accounts/AuthenticatorDescription;",
			arg0
		);
	}
	QAndroidJniObject AuthenticatorDescription::newKey(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.accounts.AuthenticatorDescription",
			"newKey",
			"(Ljava/lang/String;)Landroid/accounts/AuthenticatorDescription;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint AuthenticatorDescription::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AuthenticatorDescription::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AuthenticatorDescription::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring AuthenticatorDescription::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AuthenticatorDescription::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::accounts

namespace android::accounts
{
	class AuthenticatorDescription : public __jni_impl::android::accounts::AuthenticatorDescription
	{
	public:
		AuthenticatorDescription(QAndroidJniObject obj) { __thiz = obj; }
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
	};
} // namespace android::accounts

