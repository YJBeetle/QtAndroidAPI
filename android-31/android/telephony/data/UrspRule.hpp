#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./UrspRule.def.hpp"

namespace android::telephony::data
{
	// Fields
	inline JObject UrspRule::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.data.UrspRule",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UrspRule::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean UrspRule::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint UrspRule::getPrecedence() const
	{
		return callMethod<jint>(
			"getPrecedence",
			"()I"
		);
	}
	inline JObject UrspRule::getRouteSelectionDescriptor() const
	{
		return callObjectMethod(
			"getRouteSelectionDescriptor",
			"()Ljava/util/List;"
		);
	}
	inline JObject UrspRule::getTrafficDescriptors() const
	{
		return callObjectMethod(
			"getTrafficDescriptors",
			"()Ljava/util/List;"
		);
	}
	inline jint UrspRule::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString UrspRule::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void UrspRule::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

