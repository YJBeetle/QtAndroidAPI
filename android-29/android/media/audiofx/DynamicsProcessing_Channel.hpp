#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class DynamicsProcessing_Channel : public __JniBaseClass
	{
	public:
		// Fields
		
		DynamicsProcessing_Channel(QAndroidJniObject obj);
		// Constructors
		DynamicsProcessing_Channel(android::media::audiofx::DynamicsProcessing_Channel &arg0);
		DynamicsProcessing_Channel(jfloat &arg0, jboolean &arg1, jint &arg2, jboolean &arg3, jint &arg4, jboolean &arg5, jint &arg6, jboolean &arg7);
		DynamicsProcessing_Channel() = default;
		
		// Methods
		jfloat getInputGain();
		QAndroidJniObject getLimiter();
		QAndroidJniObject getMbc();
		QAndroidJniObject getMbcBand(jint arg0);
		QAndroidJniObject getPostEq();
		QAndroidJniObject getPostEqBand(jint arg0);
		QAndroidJniObject getPreEq();
		QAndroidJniObject getPreEqBand(jint arg0);
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

