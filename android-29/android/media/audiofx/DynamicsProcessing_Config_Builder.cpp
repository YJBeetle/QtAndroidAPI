#include "./DynamicsProcessing_Channel.hpp"
#include "./DynamicsProcessing_Config.hpp"
#include "./DynamicsProcessing_Eq.hpp"
#include "./DynamicsProcessing_Limiter.hpp"
#include "./DynamicsProcessing_Mbc.hpp"
#include "./DynamicsProcessing_Config_Builder.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// Constructors
	DynamicsProcessing_Config_Builder::DynamicsProcessing_Config_Builder(jint arg0, jint arg1, jboolean arg2, jint arg3, jboolean arg4, jint arg5, jboolean arg6, jint arg7, jboolean arg8)
		: JObject(
			"android.media.audiofx.DynamicsProcessing$Config$Builder",
			"(IIZIZIZIZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8
		) {}
	
	// Methods
	android::media::audiofx::DynamicsProcessing_Config DynamicsProcessing_Config_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/audiofx/DynamicsProcessing$Config;"
		);
	}
	android::media::audiofx::DynamicsProcessing_Config_Builder DynamicsProcessing_Config_Builder::setAllChannelsTo(android::media::audiofx::DynamicsProcessing_Channel arg0) const
	{
		return callObjectMethod(
			"setAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Channel;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0.object()
		);
	}
	android::media::audiofx::DynamicsProcessing_Config_Builder DynamicsProcessing_Config_Builder::setChannelTo(jint arg0, android::media::audiofx::DynamicsProcessing_Channel arg1) const
	{
		return callObjectMethod(
			"setChannelTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$Channel;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::media::audiofx::DynamicsProcessing_Config_Builder DynamicsProcessing_Config_Builder::setInputGainAllChannelsTo(jfloat arg0) const
	{
		return callObjectMethod(
			"setInputGainAllChannelsTo",
			"(F)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0
		);
	}
	android::media::audiofx::DynamicsProcessing_Config_Builder DynamicsProcessing_Config_Builder::setInputGainByChannelIndex(jint arg0, jfloat arg1) const
	{
		return callObjectMethod(
			"setInputGainByChannelIndex",
			"(IF)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0,
			arg1
		);
	}
	android::media::audiofx::DynamicsProcessing_Config_Builder DynamicsProcessing_Config_Builder::setLimiterAllChannelsTo(android::media::audiofx::DynamicsProcessing_Limiter arg0) const
	{
		return callObjectMethod(
			"setLimiterAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Limiter;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0.object()
		);
	}
	android::media::audiofx::DynamicsProcessing_Config_Builder DynamicsProcessing_Config_Builder::setLimiterByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Limiter arg1) const
	{
		return callObjectMethod(
			"setLimiterByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Limiter;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::media::audiofx::DynamicsProcessing_Config_Builder DynamicsProcessing_Config_Builder::setMbcAllChannelsTo(android::media::audiofx::DynamicsProcessing_Mbc arg0) const
	{
		return callObjectMethod(
			"setMbcAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Mbc;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0.object()
		);
	}
	android::media::audiofx::DynamicsProcessing_Config_Builder DynamicsProcessing_Config_Builder::setMbcByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Mbc arg1) const
	{
		return callObjectMethod(
			"setMbcByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Mbc;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::media::audiofx::DynamicsProcessing_Config_Builder DynamicsProcessing_Config_Builder::setPostEqAllChannelsTo(android::media::audiofx::DynamicsProcessing_Eq arg0) const
	{
		return callObjectMethod(
			"setPostEqAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0.object()
		);
	}
	android::media::audiofx::DynamicsProcessing_Config_Builder DynamicsProcessing_Config_Builder::setPostEqByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Eq arg1) const
	{
		return callObjectMethod(
			"setPostEqByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Eq;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::media::audiofx::DynamicsProcessing_Config_Builder DynamicsProcessing_Config_Builder::setPreEqAllChannelsTo(android::media::audiofx::DynamicsProcessing_Eq arg0) const
	{
		return callObjectMethod(
			"setPreEqAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0.object()
		);
	}
	android::media::audiofx::DynamicsProcessing_Config_Builder DynamicsProcessing_Config_Builder::setPreEqByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Eq arg1) const
	{
		return callObjectMethod(
			"setPreEqByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Eq;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::media::audiofx::DynamicsProcessing_Config_Builder DynamicsProcessing_Config_Builder::setPreferredFrameDuration(jfloat arg0) const
	{
		return callObjectMethod(
			"setPreferredFrameDuration",
			"(F)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0
		);
	}
} // namespace android::media::audiofx

