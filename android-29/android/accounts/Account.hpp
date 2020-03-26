#pragma once

#ifndef ANDROID_ACCOUNTS_ACCOUNT
#define ANDROID_ACCOUNTS_ACCOUNT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::accounts
{
	class Account : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jstring name();
		jstring type();
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::accounts

#include "../os/Parcel.hpp"

namespace __jni_impl::android::accounts
{
	// Fields
	QAndroidJniObject Account::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.Account",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring Account::name()
	{
		return __thiz.getObjectField(
			"name",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Account::type()
	{
		return __thiz.getObjectField(
			"type",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Account::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.Account",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void Account::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.Account",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean Account::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Account::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Account::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Account::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Account::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class Account : public __jni_impl::android::accounts::Account
	{
	public:
		Account(QAndroidJniObject obj) { __thiz = obj; }
		Account(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Account(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::accounts

#endif // ANDROID_ACCOUNTS_ACCOUNT

