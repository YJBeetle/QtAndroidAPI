#pragma once

#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
#include "./VibrationEffect.def.hpp"

namespace android::os
{
	// Fields
	inline JObject VibrationEffect::CREATOR()
	{
		return getStaticObjectField(
			"android.os.VibrationEffect",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint VibrationEffect::DEFAULT_AMPLITUDE()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect",
			"DEFAULT_AMPLITUDE"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::os::VibrationEffect VibrationEffect::createOneShot(jlong arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.os.VibrationEffect",
			"createOneShot",
			"(JI)Landroid/os/VibrationEffect;",
			arg0,
			arg1
		);
	}
	inline android::os::VibrationEffect VibrationEffect::createWaveform(JLongArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.os.VibrationEffect",
			"createWaveform",
			"([JI)Landroid/os/VibrationEffect;",
			arg0.object<jlongArray>(),
			arg1
		);
	}
	inline android::os::VibrationEffect VibrationEffect::createWaveform(JLongArray arg0, JIntArray arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.os.VibrationEffect",
			"createWaveform",
			"([J[II)Landroid/os/VibrationEffect;",
			arg0.object<jlongArray>(),
			arg1.object<jintArray>(),
			arg2
		);
	}
	inline jint VibrationEffect::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
} // namespace android::os

// Base class headers

