#pragma once

#include "../../../JObject.hpp"

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
class JString;

namespace android::media::audiofx
{
	class DynamicsProcessing_Config : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DynamicsProcessing_Config(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DynamicsProcessing_Config(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::media::audiofx::DynamicsProcessing_Channel getChannelByChannelIndex(jint arg0) const;
		jfloat getInputGainByChannelIndex(jint arg0) const;
		android::media::audiofx::DynamicsProcessing_Limiter getLimiterByChannelIndex(jint arg0) const;
		android::media::audiofx::DynamicsProcessing_MbcBand getMbcBandByChannelIndex(jint arg0, jint arg1) const;
		jint getMbcBandCount() const;
		android::media::audiofx::DynamicsProcessing_Mbc getMbcByChannelIndex(jint arg0) const;
		android::media::audiofx::DynamicsProcessing_EqBand getPostEqBandByChannelIndex(jint arg0, jint arg1) const;
		jint getPostEqBandCount() const;
		android::media::audiofx::DynamicsProcessing_Eq getPostEqByChannelIndex(jint arg0) const;
		android::media::audiofx::DynamicsProcessing_EqBand getPreEqBandByChannelIndex(jint arg0, jint arg1) const;
		jint getPreEqBandCount() const;
		android::media::audiofx::DynamicsProcessing_Eq getPreEqByChannelIndex(jint arg0) const;
		jfloat getPreferredFrameDuration() const;
		jint getVariant() const;
		jboolean isLimiterInUse() const;
		jboolean isMbcInUse() const;
		jboolean isPostEqInUse() const;
		jboolean isPreEqInUse() const;
		void setAllChannelsTo(android::media::audiofx::DynamicsProcessing_Channel arg0) const;
		void setChannelTo(jint arg0, android::media::audiofx::DynamicsProcessing_Channel arg1) const;
		void setInputGainAllChannelsTo(jfloat arg0) const;
		void setInputGainByChannelIndex(jint arg0, jfloat arg1) const;
		void setLimiterAllChannelsTo(android::media::audiofx::DynamicsProcessing_Limiter arg0) const;
		void setLimiterByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Limiter arg1) const;
		void setMbcAllChannelsTo(android::media::audiofx::DynamicsProcessing_Mbc arg0) const;
		void setMbcBandAllChannelsTo(jint arg0, android::media::audiofx::DynamicsProcessing_MbcBand arg1) const;
		void setMbcBandByChannelIndex(jint arg0, jint arg1, android::media::audiofx::DynamicsProcessing_MbcBand arg2) const;
		void setMbcByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Mbc arg1) const;
		void setPostEqAllChannelsTo(android::media::audiofx::DynamicsProcessing_Eq arg0) const;
		void setPostEqBandAllChannelsTo(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1) const;
		void setPostEqBandByChannelIndex(jint arg0, jint arg1, android::media::audiofx::DynamicsProcessing_EqBand arg2) const;
		void setPostEqByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Eq arg1) const;
		void setPreEqAllChannelsTo(android::media::audiofx::DynamicsProcessing_Eq arg0) const;
		void setPreEqBandAllChannelsTo(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1) const;
		void setPreEqBandByChannelIndex(jint arg0, jint arg1, android::media::audiofx::DynamicsProcessing_EqBand arg2) const;
		void setPreEqByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Eq arg1) const;
		JString toString() const;
	};
} // namespace android::media::audiofx

