#pragma once

#include "./DynamicsProcessing_EqBand.def.hpp"
#include "../../../JString.hpp"
#include "./DynamicsProcessing_Eq.def.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// Constructors
	inline DynamicsProcessing_Eq::DynamicsProcessing_Eq(android::media::audiofx::DynamicsProcessing_Eq &arg0)
		: android::media::audiofx::DynamicsProcessing_BandStage(
			"android.media.audiofx.DynamicsProcessing$Eq",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.object()
		) {}
	inline DynamicsProcessing_Eq::DynamicsProcessing_Eq(jboolean arg0, jboolean arg1, jint arg2)
		: android::media::audiofx::DynamicsProcessing_BandStage(
			"android.media.audiofx.DynamicsProcessing$Eq",
			"(ZZI)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline android::media::audiofx::DynamicsProcessing_EqBand DynamicsProcessing_Eq::getBand(jint arg0) const
	{
		return callObjectMethod(
			"getBand",
			"(I)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0
		);
	}
	inline void DynamicsProcessing_Eq::setBand(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1) const
	{
		callMethod<void>(
			"setBand",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.object()
		);
	}
	inline JString DynamicsProcessing_Eq::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

// Base class headers
#include "./DynamicsProcessing_Stage.hpp"
#include "./DynamicsProcessing_BandStage.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::audiofx;
#endif
