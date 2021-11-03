#include "../os/Parcel.hpp"
#include "./AuthenticatorDescription.hpp"

namespace android::accounts
{
	// Fields
	JObject AuthenticatorDescription::CREATOR()
	{
		return getStaticObjectField(
			"android.accounts.AuthenticatorDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint AuthenticatorDescription::accountPreferencesId()
	{
		return getField<jint>(
			"accountPreferencesId"
		);
	}
	jboolean AuthenticatorDescription::customTokens()
	{
		return getField<jboolean>(
			"customTokens"
		);
	}
	jint AuthenticatorDescription::iconId()
	{
		return getField<jint>(
			"iconId"
		);
	}
	jint AuthenticatorDescription::labelId()
	{
		return getField<jint>(
			"labelId"
		);
	}
	jstring AuthenticatorDescription::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AuthenticatorDescription::smallIconId()
	{
		return getField<jint>(
			"smallIconId"
		);
	}
	jstring AuthenticatorDescription::type()
	{
		return getObjectField(
			"type",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	AuthenticatorDescription::AuthenticatorDescription(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AuthenticatorDescription::AuthenticatorDescription(jstring arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: JObject(
			"android.accounts.AuthenticatorDescription",
			"(Ljava/lang/String;Ljava/lang/String;IIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	AuthenticatorDescription::AuthenticatorDescription(jstring arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jboolean arg6)
		: JObject(
			"android.accounts.AuthenticatorDescription",
			"(Ljava/lang/String;Ljava/lang/String;IIIIZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		) {}
	
	// Methods
	android::accounts::AuthenticatorDescription AuthenticatorDescription::newKey(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.accounts.AuthenticatorDescription",
			"newKey",
			"(Ljava/lang/String;)Landroid/accounts/AuthenticatorDescription;",
			arg0
		);
	}
	jint AuthenticatorDescription::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AuthenticatorDescription::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AuthenticatorDescription::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring AuthenticatorDescription::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AuthenticatorDescription::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::accounts

