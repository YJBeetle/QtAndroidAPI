#pragma once

#include "../../../JString.hpp"
#include "./DynamicsProcessing_Limiter.def.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// Constructors
	inline DynamicsProcessing_Limiter::DynamicsProcessing_Limiter(android::media::audiofx::DynamicsProcessing_Limiter &arg0)
		: android::media::audiofx::DynamicsProcessing_Stage(
			"android.media.audiofx.DynamicsProcessing$Limiter",
			"(Landroid/media/audiofx/DynamicsProcessing$Limiter;)V",
			arg0.object()
		) {}
	inline DynamicsProcessing_Limiter::DynamicsProcessing_Limiter(jboolean arg0, jboolean arg1, jint arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7)
		: android::media::audiofx::DynamicsProcessing_Stage(
			"android.media.audiofx.DynamicsProcessing$Limiter",
			"(ZZIFFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		) {}
	
	// Methods
	inline jfloat DynamicsProcessing_Limiter::getAttackTime() const
	{
		return callMethod<jfloat>(
			"getAttackTime",
			"()F"
		);
	}
	inline jint DynamicsProcessing_Limiter::getLinkGroup() const
	{
		return callMethod<jint>(
			"getLinkGroup",
			"()I"
		);
	}
	inline jfloat DynamicsProcessing_Limiter::getPostGain() const
	{
		return callMethod<jfloat>(
			"getPostGain",
			"()F"
		);
	}
	inline jfloat DynamicsProcessing_Limiter::getRatio() const
	{
		return callMethod<jfloat>(
			"getRatio",
			"()F"
		);
	}
	inline jfloat DynamicsProcessing_Limiter::getReleaseTime() const
	{
		return callMethod<jfloat>(
			"getReleaseTime",
			"()F"
		);
	}
	inline jfloat DynamicsProcessing_Limiter::getThreshold() const
	{
		return callMethod<jfloat>(
			"getThreshold",
			"()F"
		);
	}
	inline void DynamicsProcessing_Limiter::setAttackTime(jfloat arg0) const
	{
		callMethod<void>(
			"setAttackTime",
			"(F)V",
			arg0
		);
	}
	inline void DynamicsProcessing_Limiter::setLinkGroup(jint arg0) const
	{
		callMethod<void>(
			"setLinkGroup",
			"(I)V",
			arg0
		);
	}
	inline void DynamicsProcessing_Limiter::setPostGain(jfloat arg0) const
	{
		callMethod<void>(
			"setPostGain",
			"(F)V",
			arg0
		);
	}
	inline void DynamicsProcessing_Limiter::setRatio(jfloat arg0) const
	{
		callMethod<void>(
			"setRatio",
			"(F)V",
			arg0
		);
	}
	inline void DynamicsProcessing_Limiter::setReleaseTime(jfloat arg0) const
	{
		callMethod<void>(
			"setReleaseTime",
			"(F)V",
			arg0
		);
	}
	inline void DynamicsProcessing_Limiter::setThreshold(jfloat arg0) const
	{
		callMethod<void>(
			"setThreshold",
			"(F)V",
			arg0
		);
	}
	inline JString DynamicsProcessing_Limiter::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

// Base class headers
#include "./DynamicsProcessing_Stage.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::audiofx;
#endif
