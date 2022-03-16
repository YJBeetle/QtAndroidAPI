#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
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
	jint VibrationEffect::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
} // namespace android::os

