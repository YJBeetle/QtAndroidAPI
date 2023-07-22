#pragma once

#include "./CombinedVibration_ParallelCombination.def.hpp"
#include "./VibrationEffect.def.hpp"
#include "./CombinedVibration.def.hpp"

namespace android::os
{
	// Fields
	inline JObject CombinedVibration::CREATOR()
	{
		return getStaticObjectField(
			"android.os.CombinedVibration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::os::CombinedVibration CombinedVibration::createParallel(android::os::VibrationEffect arg0)
	{
		return callStaticObjectMethod(
			"android.os.CombinedVibration",
			"createParallel",
			"(Landroid/os/VibrationEffect;)Landroid/os/CombinedVibration;",
			arg0.object()
		);
	}
	inline android::os::CombinedVibration_ParallelCombination CombinedVibration::startParallel()
	{
		return callStaticObjectMethod(
			"android.os.CombinedVibration",
			"startParallel",
			"()Landroid/os/CombinedVibration$ParallelCombination;"
		);
	}
	inline jint CombinedVibration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
