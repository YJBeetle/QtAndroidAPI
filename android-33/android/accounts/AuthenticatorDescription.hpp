#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AuthenticatorDescription.def.hpp"

namespace android::accounts
{
	// Fields
	inline JObject AuthenticatorDescription::CREATOR()
	{
		return getStaticObjectField(
			"android.accounts.AuthenticatorDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint AuthenticatorDescription::accountPreferencesId()
	{
		return getField<jint>(
			"accountPreferencesId"
		);
	}
	inline jboolean AuthenticatorDescription::customTokens()
	{
		return getField<jboolean>(
			"customTokens"
		);
	}
	inline jint AuthenticatorDescription::iconId()
	{
		return getField<jint>(
			"iconId"
		);
	}
	inline jint AuthenticatorDescription::labelId()
	{
		return getField<jint>(
			"labelId"
		);
	}
	inline JString AuthenticatorDescription::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		);
	}
	inline jint AuthenticatorDescription::smallIconId()
	{
		return getField<jint>(
			"smallIconId"
		);
	}
	inline JString AuthenticatorDescription::type()
	{
		return getObjectField(
			"type",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline AuthenticatorDescription::AuthenticatorDescription(JString arg0, JString arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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
	inline AuthenticatorDescription::AuthenticatorDescription(JString arg0, JString arg1, jint arg2, jint arg3, jint arg4, jint arg5, jboolean arg6)
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
	inline android::accounts::AuthenticatorDescription AuthenticatorDescription::newKey(JString arg0)
	{
		return callStaticObjectMethod(
			"android.accounts.AuthenticatorDescription",
			"newKey",
			"(Ljava/lang/String;)Landroid/accounts/AuthenticatorDescription;",
			arg0.object<jstring>()
		);
	}
	inline jint AuthenticatorDescription::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AuthenticatorDescription::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint AuthenticatorDescription::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AuthenticatorDescription::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AuthenticatorDescription::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::accounts

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::accounts;
#endif
