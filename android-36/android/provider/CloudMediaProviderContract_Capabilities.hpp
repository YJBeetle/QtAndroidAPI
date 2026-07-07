#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./CloudMediaProviderContract_Capabilities.def.hpp"

namespace android::provider
{
	// Fields
	inline JObject CloudMediaProviderContract_Capabilities::CREATOR()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$Capabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CloudMediaProviderContract_Capabilities::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CloudMediaProviderContract_Capabilities::isMediaCategoriesEnabled() const
	{
		return callMethod<jboolean>(
			"isMediaCategoriesEnabled",
			"()Z"
		);
	}
	inline jboolean CloudMediaProviderContract_Capabilities::isSearchEnabled() const
	{
		return callMethod<jboolean>(
			"isSearchEnabled",
			"()Z"
		);
	}
	inline JString CloudMediaProviderContract_Capabilities::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CloudMediaProviderContract_Capabilities::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
