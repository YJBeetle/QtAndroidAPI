#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./AccountAuthenticatorResponse.hpp"

namespace android::accounts
{
	// Fields
	QAndroidJniObject AccountAuthenticatorResponse::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.AccountAuthenticatorResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	AccountAuthenticatorResponse::AccountAuthenticatorResponse(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AccountAuthenticatorResponse::AccountAuthenticatorResponse(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AccountAuthenticatorResponse",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint AccountAuthenticatorResponse::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void AccountAuthenticatorResponse::onError(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void AccountAuthenticatorResponse::onError(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void AccountAuthenticatorResponse::onRequestContinued()
	{
		__thiz.callMethod<void>(
			"onRequestContinued",
			"()V"
		);
	}
	void AccountAuthenticatorResponse::onResult(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onResult",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void AccountAuthenticatorResponse::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::accounts

