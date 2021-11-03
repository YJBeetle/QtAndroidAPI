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
class JString;

namespace android::media::audiofx
{
	class DynamicsProcessing_Channel : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DynamicsProcessing_Channel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DynamicsProcessing_Channel(QAndroidJniObject obj);
		
		// Constructors
		DynamicsProcessing_Channel(android::media::audiofx::DynamicsProcessing_Channel &arg0);
		DynamicsProcessing_Channel(jfloat arg0, jboolean arg1, jint arg2, jboolean arg3, jint arg4, jboolean arg5, jint arg6, jboolean arg7);
		
		// Methods
		jfloat getInputGain() const;
		android::media::audiofx::DynamicsProcessing_Limiter getLimiter() const;
		android::media::audiofx::DynamicsProcessing_Mbc getMbc() const;
		android::media::audiofx::DynamicsProcessing_MbcBand getMbcBand(jint arg0) const;
		android::media::audiofx::DynamicsProcessing_Eq getPostEq() const;
		android::media::audiofx::DynamicsProcessing_EqBand getPostEqBand(jint arg0) const;
		android::media::audiofx::DynamicsProcessing_Eq getPreEq() const;
		android::media::audiofx::DynamicsProcessing_EqBand getPreEqBand(jint arg0) const;
		void setInputGain(jfloat arg0) const;
		void setLimiter(android::media::audiofx::DynamicsProcessing_Limiter arg0) const;
		void setMbc(android::media::audiofx::DynamicsProcessing_Mbc arg0) const;
		void setMbcBand(jint arg0, android::media::audiofx::DynamicsProcessing_MbcBand arg1) const;
		void setPostEq(android::media::audiofx::DynamicsProcessing_Eq arg0) const;
		void setPostEqBand(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1) const;
		void setPreEq(android::media::audiofx::DynamicsProcessing_Eq arg0) const;
		void setPreEqBand(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1) const;
		JString toString() const;
	};
} // namespace android::media::audiofx

