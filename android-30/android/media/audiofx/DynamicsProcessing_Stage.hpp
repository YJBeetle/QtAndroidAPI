#pragma once

#include "../../../JString.hpp"
#include "./DynamicsProcessing_Stage.def.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// Constructors
	inline DynamicsProcessing_Stage::DynamicsProcessing_Stage(jboolean arg0, jboolean arg1)
		: JObject(
			"android.media.audiofx.DynamicsProcessing$Stage",
			"(ZZ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jboolean DynamicsProcessing_Stage::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean DynamicsProcessing_Stage::isInUse() const
	{
		return callMethod<jboolean>(
			"isInUse",
			"()Z"
		);
	}
	inline void DynamicsProcessing_Stage::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	inline JString DynamicsProcessing_Stage::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

// Base class headers

