#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class DynamicsProcessing_Config_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		DynamicsProcessing_Config_Builder(QAndroidJniObject obj);
		// Constructors
		DynamicsProcessing_Config_Builder(jint &arg0, jint &arg1, jboolean &arg2, jint &arg3, jboolean &arg4, jint &arg5, jboolean &arg6, jint &arg7, jboolean &arg8);
		DynamicsProcessing_Config_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAllChannelsTo(android::media::audiofx::DynamicsProcessing_Channel arg0);
		QAndroidJniObject setChannelTo(jint arg0, android::media::audiofx::DynamicsProcessing_Channel arg1);
		QAndroidJniObject setInputGainAllChannelsTo(jfloat arg0);
		QAndroidJniObject setInputGainByChannelIndex(jint arg0, jfloat arg1);
		QAndroidJniObject setLimiterAllChannelsTo(android::media::audiofx::DynamicsProcessing_Limiter arg0);
		QAndroidJniObject setLimiterByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Limiter arg1);
		QAndroidJniObject setMbcAllChannelsTo(android::media::audiofx::DynamicsProcessing_Mbc arg0);
		QAndroidJniObject setMbcByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Mbc arg1);
		QAndroidJniObject setPostEqAllChannelsTo(android::media::audiofx::DynamicsProcessing_Eq arg0);
		QAndroidJniObject setPostEqByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Eq arg1);
		QAndroidJniObject setPreEqAllChannelsTo(android::media::audiofx::DynamicsProcessing_Eq arg0);
		QAndroidJniObject setPreEqByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Eq arg1);
		QAndroidJniObject setPreferredFrameDuration(jfloat arg0);
	};
} // namespace android::media::audiofx

