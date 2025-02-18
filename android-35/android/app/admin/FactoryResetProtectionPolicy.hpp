#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./FactoryResetProtectionPolicy.def.hpp"

namespace android::app::admin
{
	// Fields
	inline JObject FactoryResetProtectionPolicy::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.FactoryResetProtectionPolicy",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint FactoryResetProtectionPolicy::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject FactoryResetProtectionPolicy::getFactoryResetProtectionAccounts() const
	{
		return callObjectMethod(
			"getFactoryResetProtectionAccounts",
			"()Ljava/util/List;"
		);
	}
	inline jboolean FactoryResetProtectionPolicy::isFactoryResetProtectionEnabled() const
	{
		return callMethod<jboolean>(
			"isFactoryResetProtectionEnabled",
			"()Z"
		);
	}
	inline JString FactoryResetProtectionPolicy::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void FactoryResetProtectionPolicy::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::admin;
#endif
