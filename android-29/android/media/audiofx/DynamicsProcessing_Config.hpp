#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::audiofx
{
	class DynamicsProcessing_Channel;
}
namespace android::media::audiofx
{
	class DynamicsProcessing_Eq;
}
namespace android::media::audiofx
{
	class DynamicsProcessing_EqBand;
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
	class DynamicsProcessing_MbcBand;
}

namespace android::media::audiofx
{
	class DynamicsProcessing_Config : public __JniBaseClass
	{
	public:
		// Fields
		
		DynamicsProcessing_Config(QAndroidJniObject obj);
		// Constructors
		DynamicsProcessing_Config() = default;
		
		// Methods
		QAndroidJniObject getChannelByChannelIndex(jint arg0);
		jfloat getInputGainByChannelIndex(jint arg0);
		QAndroidJniObject getLimiterByChannelIndex(jint arg0);
		QAndroidJniObject getMbcBandByChannelIndex(jint arg0, jint arg1);
		jint getMbcBandCount();
		QAndroidJniObject getMbcByChannelIndex(jint arg0);
		QAndroidJniObject getPostEqBandByChannelIndex(jint arg0, jint arg1);
		jint getPostEqBandCount();
		QAndroidJniObject getPostEqByChannelIndex(jint arg0);
		QAndroidJniObject getPreEqBandByChannelIndex(jint arg0, jint arg1);
		jint getPreEqBandCount();
		QAndroidJniObject getPreEqByChannelIndex(jint arg0);
		jfloat getPreferredFrameDuration();
		jint getVariant();
		jboolean isLimiterInUse();
		jboolean isMbcInUse();
		jboolean isPostEqInUse();
		jboolean isPreEqInUse();
		void setAllChannelsTo(android::media::audiofx::DynamicsProcessing_Channel arg0);
		void setChannelTo(jint arg0, android::media::audiofx::DynamicsProcessing_Channel arg1);
		void setInputGainAllChannelsTo(jfloat arg0);
		void setInputGainByChannelIndex(jint arg0, jfloat arg1);
		void setLimiterAllChannelsTo(android::media::audiofx::DynamicsProcessing_Limiter arg0);
		void setLimiterByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Limiter arg1);
		void setMbcAllChannelsTo(android::media::audiofx::DynamicsProcessing_Mbc arg0);
		void setMbcBandAllChannelsTo(jint arg0, android::media::audiofx::DynamicsProcessing_MbcBand arg1);
		void setMbcBandByChannelIndex(jint arg0, jint arg1, android::media::audiofx::DynamicsProcessing_MbcBand arg2);
		void setMbcByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Mbc arg1);
		void setPostEqAllChannelsTo(android::media::audiofx::DynamicsProcessing_Eq arg0);
		void setPostEqBandAllChannelsTo(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1);
		void setPostEqBandByChannelIndex(jint arg0, jint arg1, android::media::audiofx::DynamicsProcessing_EqBand arg2);
		void setPostEqByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Eq arg1);
		void setPreEqAllChannelsTo(android::media::audiofx::DynamicsProcessing_Eq arg0);
		void setPreEqBandAllChannelsTo(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1);
		void setPreEqBandByChannelIndex(jint arg0, jint arg1, android::media::audiofx::DynamicsProcessing_EqBand arg2);
		void setPreEqByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Eq arg1);
		jstring toString();
	};
} // namespace android::media::audiofx

