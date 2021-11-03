#pragma once

#include "../../../JObject.hpp"

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
	class DynamicsProcessing_Channel : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DynamicsProcessing_Channel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DynamicsProcessing_Channel(QJniObject obj);
		
		// Constructors
		DynamicsProcessing_Channel(android::media::audiofx::DynamicsProcessing_Channel &arg0);
		DynamicsProcessing_Channel(jfloat arg0, jboolean arg1, jint arg2, jboolean arg3, jint arg4, jboolean arg5, jint arg6, jboolean arg7);
		
		// Methods
		jfloat getInputGain();
		android::media::audiofx::DynamicsProcessing_Limiter getLimiter();
		android::media::audiofx::DynamicsProcessing_Mbc getMbc();
		android::media::audiofx::DynamicsProcessing_MbcBand getMbcBand(jint arg0);
		android::media::audiofx::DynamicsProcessing_Eq getPostEq();
		android::media::audiofx::DynamicsProcessing_EqBand getPostEqBand(jint arg0);
		android::media::audiofx::DynamicsProcessing_Eq getPreEq();
		android::media::audiofx::DynamicsProcessing_EqBand getPreEqBand(jint arg0);
		void setInputGain(jfloat arg0);
		void setLimiter(android::media::audiofx::DynamicsProcessing_Limiter arg0);
		void setMbc(android::media::audiofx::DynamicsProcessing_Mbc arg0);
		void setMbcBand(jint arg0, android::media::audiofx::DynamicsProcessing_MbcBand arg1);
		void setPostEq(android::media::audiofx::DynamicsProcessing_Eq arg0);
		void setPostEqBand(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1);
		void setPreEq(android::media::audiofx::DynamicsProcessing_Eq arg0);
		void setPreEqBand(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1);
		jstring toString();
	};
} // namespace android::media::audiofx

