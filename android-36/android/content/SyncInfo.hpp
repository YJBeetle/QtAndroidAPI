#pragma once

#include "../accounts/Account.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./SyncInfo.def.hpp"

namespace android::content
{
	// Fields
	inline android::accounts::Account SyncInfo::account()
	{
		return getObjectField(
			"account",
			"Landroid/accounts/Account;"
		);
	}
	inline JString SyncInfo::authority()
	{
		return getObjectField(
			"authority",
			"Ljava/lang/String;"
		);
	}
	inline jlong SyncInfo::startTime()
	{
		return getField<jlong>(
			"startTime"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SyncInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void SyncInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
