#include "./DynamicsProcessing_Eq.hpp"
#include "./DynamicsProcessing_EqBand.hpp"
#include "./DynamicsProcessing_Limiter.hpp"
#include "./DynamicsProcessing_Mbc.hpp"
#include "./DynamicsProcessing_MbcBand.hpp"
#include "./DynamicsProcessing_Channel.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// QJniObject forward
	DynamicsProcessing_Channel::DynamicsProcessing_Channel(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DynamicsProcessing_Channel::DynamicsProcessing_Channel(android::media::audiofx::DynamicsProcessing_Channel &arg0)
		: JObject(
			"android.media.audiofx.DynamicsProcessing$Channel",
			"(Landroid/media/audiofx/DynamicsProcessing$Channel;)V",
			arg0.object()
		) {}
	DynamicsProcessing_Channel::DynamicsProcessing_Channel(jfloat arg0, jboolean arg1, jint arg2, jboolean arg3, jint arg4, jboolean arg5, jint arg6, jboolean arg7)
		: JObject(
			"android.media.audiofx.DynamicsProcessing$Channel",
			"(FZIZIZIZ)V",
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
	jfloat DynamicsProcessing_Channel::getInputGain()
	{
		return callMethod<jfloat>(
			"getInputGain",
			"()F"
		);
	}
	android::media::audiofx::DynamicsProcessing_Limiter DynamicsProcessing_Channel::getLimiter()
	{
		return callObjectMethod(
			"getLimiter",
			"()Landroid/media/audiofx/DynamicsProcessing$Limiter;"
		);
	}
	android::media::audiofx::DynamicsProcessing_Mbc DynamicsProcessing_Channel::getMbc()
	{
		return callObjectMethod(
			"getMbc",
			"()Landroid/media/audiofx/DynamicsProcessing$Mbc;"
		);
	}
	android::media::audiofx::DynamicsProcessing_MbcBand DynamicsProcessing_Channel::getMbcBand(jint arg0)
	{
		return callObjectMethod(
			"getMbcBand",
			"(I)Landroid/media/audiofx/DynamicsProcessing$MbcBand;",
			arg0
		);
	}
	android::media::audiofx::DynamicsProcessing_Eq DynamicsProcessing_Channel::getPostEq()
	{
		return callObjectMethod(
			"getPostEq",
			"()Landroid/media/audiofx/DynamicsProcessing$Eq;"
		);
	}
	android::media::audiofx::DynamicsProcessing_EqBand DynamicsProcessing_Channel::getPostEqBand(jint arg0)
	{
		return callObjectMethod(
			"getPostEqBand",
			"(I)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0
		);
	}
	android::media::audiofx::DynamicsProcessing_Eq DynamicsProcessing_Channel::getPreEq()
	{
		return callObjectMethod(
			"getPreEq",
			"()Landroid/media/audiofx/DynamicsProcessing$Eq;"
		);
	}
	android::media::audiofx::DynamicsProcessing_EqBand DynamicsProcessing_Channel::getPreEqBand(jint arg0)
	{
		return callObjectMethod(
			"getPreEqBand",
			"(I)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0
		);
	}
	void DynamicsProcessing_Channel::setInputGain(jfloat arg0)
	{
		callMethod<void>(
			"setInputGain",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing_Channel::setLimiter(android::media::audiofx::DynamicsProcessing_Limiter arg0)
	{
		callMethod<void>(
			"setLimiter",
			"(Landroid/media/audiofx/DynamicsProcessing$Limiter;)V",
			arg0.object()
		);
	}
	void DynamicsProcessing_Channel::setMbc(android::media::audiofx::DynamicsProcessing_Mbc arg0)
	{
		callMethod<void>(
			"setMbc",
			"(Landroid/media/audiofx/DynamicsProcessing$Mbc;)V",
			arg0.object()
		);
	}
	void DynamicsProcessing_Channel::setMbcBand(jint arg0, android::media::audiofx::DynamicsProcessing_MbcBand arg1)
	{
		callMethod<void>(
			"setMbcBand",
			"(ILandroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0,
			arg1.object()
		);
	}
	void DynamicsProcessing_Channel::setPostEq(android::media::audiofx::DynamicsProcessing_Eq arg0)
	{
		callMethod<void>(
			"setPostEq",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.object()
		);
	}
	void DynamicsProcessing_Channel::setPostEqBand(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1)
	{
		callMethod<void>(
			"setPostEqBand",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.object()
		);
	}
	void DynamicsProcessing_Channel::setPreEq(android::media::audiofx::DynamicsProcessing_Eq arg0)
	{
		callMethod<void>(
			"setPreEq",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.object()
		);
	}
	void DynamicsProcessing_Channel::setPreEqBand(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1)
	{
		callMethod<void>(
			"setPreEqBand",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.object()
		);
	}
	jstring DynamicsProcessing_Channel::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx

