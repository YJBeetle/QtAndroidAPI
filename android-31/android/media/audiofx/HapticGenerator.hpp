#pragma once

#include "./HapticGenerator.def.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::media::audiofx::HapticGenerator HapticGenerator::create(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.audiofx.HapticGenerator",
			"create",
			"(I)Landroid/media/audiofx/HapticGenerator;",
			arg0
		);
	}
	inline jboolean HapticGenerator::isAvailable()
	{
		return callStaticMethod<jboolean>(
			"android.media.audiofx.HapticGenerator",
			"isAvailable",
			"()Z"
		);
	}
	inline void HapticGenerator::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void HapticGenerator::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline jint HapticGenerator::setEnabled(jboolean arg0) const
	{
		return callMethod<jint>(
			"setEnabled",
			"(Z)I",
			arg0
		);
	}
} // namespace android::media::audiofx

// Base class headers
#include "./AudioEffect.hpp"

