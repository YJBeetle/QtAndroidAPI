#include "./DynamicsProcessing_MbcBand.hpp"
#include "./DynamicsProcessing_Mbc.hpp"

namespace android::media::audiofx
{
	// Fields
	
	DynamicsProcessing_Mbc::DynamicsProcessing_Mbc(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DynamicsProcessing_Mbc::DynamicsProcessing_Mbc(android::media::audiofx::DynamicsProcessing_Mbc &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$Mbc",
			"(Landroid/media/audiofx/DynamicsProcessing$Mbc;)V",
			arg0.__jniObject().object()
		);
	}
	DynamicsProcessing_Mbc::DynamicsProcessing_Mbc(jboolean &arg0, jboolean &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$Mbc",
			"(ZZI)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject DynamicsProcessing_Mbc::getBand(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBand",
			"(I)Landroid/media/audiofx/DynamicsProcessing$MbcBand;",
			arg0
		);
	}
	void DynamicsProcessing_Mbc::setBand(jint arg0, android::media::audiofx::DynamicsProcessing_MbcBand arg1)
	{
		__thiz.callMethod<void>(
			"setBand",
			"(ILandroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jstring DynamicsProcessing_Mbc::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx

