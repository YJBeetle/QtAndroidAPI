#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CapabilityParams.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject CapabilityParams::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.CapabilityParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CapabilityParams::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CapabilityParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject CapabilityParams::getAliases() const
	{
		return callObjectMethod(
			"getAliases",
			"()Ljava/util/List;"
		);
	}
	inline JString CapabilityParams::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JString CapabilityParams::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		);
	}
	inline jint CapabilityParams::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void CapabilityParams::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
