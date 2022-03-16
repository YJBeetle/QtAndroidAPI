#pragma once

#include "../../../JString.hpp"
#include "./DynamicsProcessing_BandStage.def.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// Constructors
	inline DynamicsProcessing_BandStage::DynamicsProcessing_BandStage(jboolean arg0, jboolean arg1, jint arg2)
		: android::media::audiofx::DynamicsProcessing_Stage(
			"android.media.audiofx.DynamicsProcessing$BandStage",
			"(ZZI)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline jint DynamicsProcessing_BandStage::getBandCount() const
	{
		return callMethod<jint>(
			"getBandCount",
			"()I"
		);
	}
	inline JString DynamicsProcessing_BandStage::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

// Base class headers
#include "./DynamicsProcessing_Stage.hpp"

