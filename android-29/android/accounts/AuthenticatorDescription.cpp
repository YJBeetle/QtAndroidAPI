#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	JString AuthenticatorDescription::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		);
	}
	jint AuthenticatorDescription::smallIconId()
	{
		return getField<jint>(
			"smallIconId"
		);
	}
	JString AuthenticatorDescription::type()
	{
		return getObjectField(
			"type",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	AuthenticatorDescription::AuthenticatorDescription(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AuthenticatorDescription::AuthenticatorDescription(JString arg0, JString arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: JObject(
			"android.accounts.AuthenticatorDescription",
			"(Ljava/lang/String;Ljava/lang/String;IIII)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	AuthenticatorDescription::AuthenticatorDescription(JString arg0, JString arg1, jint arg2, jint arg3, jint arg4, jint arg5, jboolean arg6)
		: JObject(
			"android.accounts.AuthenticatorDescription",
			"(Ljava/lang/String;Ljava/lang/String;IIIIZ)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		) {}
	
	// Methods
	android::accounts::AuthenticatorDescription AuthenticatorDescription::newKey(JString arg0)
	{
		return callStaticObjectMethod(
			"android.accounts.AuthenticatorDescription",
			"newKey",
			"(Ljava/lang/String;)Landroid/accounts/AuthenticatorDescription;",
			arg0.object<jstring>()
		);
	}
	jint AuthenticatorDescription::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AuthenticatorDescription::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint AuthenticatorDescription::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString AuthenticatorDescription::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AuthenticatorDescription::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::accounts

