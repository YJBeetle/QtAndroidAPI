#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./TrustedPresentationThresholds.def.hpp"

namespace android::window
{
	// Fields
	inline JObject TrustedPresentationThresholds::CREATOR()
	{
		return getStaticObjectField(
			"android.window.TrustedPresentationThresholds",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline TrustedPresentationThresholds::TrustedPresentationThresholds(jfloat arg0, jfloat arg1, jint arg2)
		: JObject(
			"android.window.TrustedPresentationThresholds",
			"(FFI)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline jint TrustedPresentationThresholds::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean TrustedPresentationThresholds::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat TrustedPresentationThresholds::getMinAlpha() const
	{
		return callMethod<jfloat>(
			"getMinAlpha",
			"()F"
		);
	}
	inline jfloat TrustedPresentationThresholds::getMinFractionRendered() const
	{
		return callMethod<jfloat>(
			"getMinFractionRendered",
			"()F"
		);
	}
	inline jint TrustedPresentationThresholds::getStabilityRequirementMillis() const
	{
		return callMethod<jint>(
			"getStabilityRequirementMillis",
			"()I"
		);
	}
	inline jint TrustedPresentationThresholds::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString TrustedPresentationThresholds::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TrustedPresentationThresholds::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::window

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::window;
#endif
