#pragma once

#include "../accounts/Account.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PeriodicSync.def.hpp"

namespace android::content
{
	// Fields
	inline JObject PeriodicSync::CREATOR()
	{
		return getStaticObjectField(
			"android.content.PeriodicSync",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline android::accounts::Account PeriodicSync::account()
	{
		return getObjectField(
			"account",
			"Landroid/accounts/Account;"
		);
	}
	inline JString PeriodicSync::authority()
	{
		return getObjectField(
			"authority",
			"Ljava/lang/String;"
		);
	}
	inline android::os::Bundle PeriodicSync::extras()
	{
		return getObjectField(
			"extras",
			"Landroid/os/Bundle;"
		);
	}
	inline jlong PeriodicSync::period()
	{
		return getField<jlong>(
			"period"
		);
	}
	
	// Constructors
	inline PeriodicSync::PeriodicSync(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2, jlong arg3)
		: JObject(
			"android.content.PeriodicSync",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;J)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	inline jint PeriodicSync::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PeriodicSync::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString PeriodicSync::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PeriodicSync::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

// Base class headers

