#pragma once

#ifndef ANDROID_ACCOUNTS_ACCOUNTAUTHENTICATORRESPONSE
#define ANDROID_ACCOUNTS_ACCOUNTAUTHENTICATORRESPONSE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::accounts
{
	class AccountAuthenticatorResponse : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		void onRequestContinued();
		void onResult(__jni_impl::android::os::Bundle arg0);
		void onError(jint arg0, jstring arg1);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::accounts

#include "../os/Parcel.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::accounts
{
	// Fields
	QAndroidJniObject AccountAuthenticatorResponse::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountAuthenticatorResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void AccountAuthenticatorResponse::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AccountAuthenticatorResponse",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void AccountAuthenticatorResponse::onRequestContinued()
	{
		__thiz.callMethod<void>(
			"onRequestContinued",
			"()V");
	}
	void AccountAuthenticatorResponse::onResult(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onResult",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	void AccountAuthenticatorResponse::onError(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1);
	}
	jint AccountAuthenticatorResponse::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void AccountAuthenticatorResponse::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class AccountAuthenticatorResponse : public __jni_impl::android::accounts::AccountAuthenticatorResponse
	{
	public:
		AccountAuthenticatorResponse(QAndroidJniObject obj) { __thiz = obj; }
		AccountAuthenticatorResponse(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::accounts

#endif // ANDROID_ACCOUNTS_ACCOUNTAUTHENTICATORRESPONSE

