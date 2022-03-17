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
	inline jint VibrationEffect::EFFECT_CLICK()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect",
			"EFFECT_CLICK"
		);
	}
	inline jint VibrationEffect::EFFECT_DOUBLE_CLICK()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect",
			"EFFECT_DOUBLE_CLICK"
		);
	}
	inline jint VibrationEffect::EFFECT_HEAVY_CLICK()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect",
			"EFFECT_HEAVY_CLICK"
		);
	}
	inline jint VibrationEffect::EFFECT_TICK()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect",
			"EFFECT_TICK"
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
	inline android::os::VibrationEffect VibrationEffect::createPredefined(jint arg0)
	{
		return callStaticObjectMethod(
			"android.os.VibrationEffect",
			"createPredefined",
			"(I)Landroid/os/VibrationEffect;",
			arg0
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
