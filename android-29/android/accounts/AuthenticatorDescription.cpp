#include "../os/Parcel.hpp"
#include "./AuthenticatorDescription.hpp"

namespace android::accounts
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
	
	AuthenticatorDescription::AuthenticatorDescription(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AuthenticatorDescription::AuthenticatorDescription(jstring arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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
	AuthenticatorDescription::AuthenticatorDescription(jstring arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jboolean arg6)
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
	void AuthenticatorDescription::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::accounts

