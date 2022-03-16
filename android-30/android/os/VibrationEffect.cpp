#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
#include "./VibrationEffect_Composition.hpp"
#include "./VibrationEffect.hpp"

namespace android::os
{
	// Fields
	JObject VibrationEffect::CREATOR()
	{
		return getStaticObjectField(
			"android.os.VibrationEffect",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint VibrationEffect::DEFAULT_AMPLITUDE()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect",
			"DEFAULT_AMPLITUDE"
		);
	}
	jint VibrationEffect::EFFECT_CLICK()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect",
			"EFFECT_CLICK"
		);
	}
	jint VibrationEffect::EFFECT_DOUBLE_CLICK()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect",
			"EFFECT_DOUBLE_CLICK"
		);
	}
	jint VibrationEffect::EFFECT_HEAVY_CLICK()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect",
			"EFFECT_HEAVY_CLICK"
		);
	}
	jint VibrationEffect::EFFECT_TICK()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect",
			"EFFECT_TICK"
		);
	}
	
	// Constructors
	
	// Methods
	android::os::VibrationEffect VibrationEffect::createOneShot(jlong arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.os.VibrationEffect",
			"createOneShot",
			"(JI)Landroid/os/VibrationEffect;",
			arg0,
			arg1
		);
	}
	android::os::VibrationEffect VibrationEffect::createPredefined(jint arg0)
	{
		return callStaticObjectMethod(
			"android.os.VibrationEffect",
			"createPredefined",
			"(I)Landroid/os/VibrationEffect;",
			arg0
		);
	}
	android::os::VibrationEffect VibrationEffect::createWaveform(JLongArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.os.VibrationEffect",
			"createWaveform",
			"([JI)Landroid/os/VibrationEffect;",
			arg0.object<jlongArray>(),
			arg1
		);
	}
	android::os::VibrationEffect VibrationEffect::createWaveform(JLongArray arg0, JIntArray arg1, jint arg2)
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
	android::os::VibrationEffect_Composition VibrationEffect::startComposition()
	{
		return callStaticObjectMethod(
			"android.os.VibrationEffect",
			"startComposition",
			"()Landroid/os/VibrationEffect$Composition;"
		);
	}
	jint VibrationEffect::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
} // namespace android::os

