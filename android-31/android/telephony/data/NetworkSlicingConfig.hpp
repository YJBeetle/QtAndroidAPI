#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./NetworkSlicingConfig.def.hpp"

namespace android::telephony::data
{
	// Fields
	inline JObject NetworkSlicingConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.data.NetworkSlicingConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline NetworkSlicingConfig::NetworkSlicingConfig()
		: JObject(
			"android.telephony.data.NetworkSlicingConfig",
			"()V"
		) {}
	
	// Methods
	inline jint NetworkSlicingConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean NetworkSlicingConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject NetworkSlicingConfig::getSliceInfo() const
	{
		return callObjectMethod(
			"getSliceInfo",
			"()Ljava/util/List;"
		);
	}
	inline JObject NetworkSlicingConfig::getUrspRules() const
	{
		return callObjectMethod(
			"getUrspRules",
			"()Ljava/util/List;"
		);
	}
	inline jint NetworkSlicingConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString NetworkSlicingConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void NetworkSlicingConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::data

// Base class headers

