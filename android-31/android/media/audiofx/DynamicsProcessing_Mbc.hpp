#pragma once

#include "./DynamicsProcessing_MbcBand.def.hpp"
#include "../../../JString.hpp"
#include "./DynamicsProcessing_Mbc.def.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// Constructors
	inline DynamicsProcessing_Mbc::DynamicsProcessing_Mbc(android::media::audiofx::DynamicsProcessing_Mbc &arg0)
		: android::media::audiofx::DynamicsProcessing_BandStage(
			"android.media.audiofx.DynamicsProcessing$Mbc",
			"(Landroid/media/audiofx/DynamicsProcessing$Mbc;)V",
			arg0.object()
		) {}
	inline DynamicsProcessing_Mbc::DynamicsProcessing_Mbc(jboolean arg0, jboolean arg1, jint arg2)
		: android::media::audiofx::DynamicsProcessing_BandStage(
			"android.media.audiofx.DynamicsProcessing$Mbc",
			"(ZZI)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline android::media::audiofx::DynamicsProcessing_MbcBand DynamicsProcessing_Mbc::getBand(jint arg0) const
	{
		return callObjectMethod(
			"getBand",
			"(I)Landroid/media/audiofx/DynamicsProcessing$MbcBand;",
			arg0
		);
	}
	inline void DynamicsProcessing_Mbc::setBand(jint arg0, android::media::audiofx::DynamicsProcessing_MbcBand arg1) const
	{
		callMethod<void>(
			"setBand",
			"(ILandroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0,
			arg1.object()
		);
	}
	inline JString DynamicsProcessing_Mbc::toString() const
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
