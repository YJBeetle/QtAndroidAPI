#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Account.def.hpp"

namespace android::accounts
{
	// Fields
	inline JObject Account::CREATOR()
	{
		return getStaticObjectField(
			"android.accounts.Account",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString Account::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		);
	}
	inline JString Account::type()
	{
		return getObjectField(
			"type",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline Account::Account(android::os::Parcel arg0)
		: JObject(
			"android.accounts.Account",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline Account::Account(JString arg0, JString arg1)
		: JObject(
			"android.accounts.Account",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jint Account::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Account::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Account::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Account::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Account::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
