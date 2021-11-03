#pragma once

#include "../../../JObject.hpp"

namespace android::media::audiofx
{
	class DynamicsProcessing_Channel;
}
namespace android::media::audiofx
{
	class DynamicsProcessing_Config;
}
namespace android::media::audiofx
{
	class DynamicsProcessing_Eq;
}
namespace android::media::audiofx
{
	class DynamicsProcessing_Limiter;
}
namespace android::media::audiofx
{
	class DynamicsProcessing_Mbc;
}

namespace android::media::audiofx
{
	class DynamicsProcessing_Config_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DynamicsProcessing_Config_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DynamicsProcessing_Config_Builder(QJniObject obj);
		
		// Constructors
		DynamicsProcessing_Config_Builder(jint arg0, jint arg1, jboolean arg2, jint arg3, jboolean arg4, jint arg5, jboolean arg6, jint arg7, jboolean arg8);
		
		// Methods
		android::media::audiofx::DynamicsProcessing_Config build();
		android::media::audiofx::DynamicsProcessing_Config_Builder setAllChannelsTo(android::media::audiofx::DynamicsProcessing_Channel arg0);
		android::media::audiofx::DynamicsProcessing_Config_Builder setChannelTo(jint arg0, android::media::audiofx::DynamicsProcessing_Channel arg1);
		android::media::audiofx::DynamicsProcessing_Config_Builder setInputGainAllChannelsTo(jfloat arg0);
		android::media::audiofx::DynamicsProcessing_Config_Builder setInputGainByChannelIndex(jint arg0, jfloat arg1);
		android::media::audiofx::DynamicsProcessing_Config_Builder setLimiterAllChannelsTo(android::media::audiofx::DynamicsProcessing_Limiter arg0);
		android::media::audiofx::DynamicsProcessing_Config_Builder setLimiterByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Limiter arg1);
		android::media::audiofx::DynamicsProcessing_Config_Builder setMbcAllChannelsTo(android::media::audiofx::DynamicsProcessing_Mbc arg0);
		android::media::audiofx::DynamicsProcessing_Config_Builder setMbcByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Mbc arg1);
		android::media::audiofx::DynamicsProcessing_Config_Builder setPostEqAllChannelsTo(android::media::audiofx::DynamicsProcessing_Eq arg0);
		android::media::audiofx::DynamicsProcessing_Config_Builder setPostEqByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Eq arg1);
		android::media::audiofx::DynamicsProcessing_Config_Builder setPreEqAllChannelsTo(android::media::audiofx::DynamicsProcessing_Eq arg0);
		android::media::audiofx::DynamicsProcessing_Config_Builder setPreEqByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Eq arg1);
		android::media::audiofx::DynamicsProcessing_Config_Builder setPreferredFrameDuration(jfloat arg0);
	};
} // namespace android::media::audiofx

