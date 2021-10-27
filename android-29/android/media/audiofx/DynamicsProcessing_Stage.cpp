#include "./DynamicsProcessing_Stage.hpp"

namespace android::media::audiofx
{
	// Fields
	
	DynamicsProcessing_Stage::DynamicsProcessing_Stage(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DynamicsProcessing_Stage::DynamicsProcessing_Stage(jboolean &arg0, jboolean &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$Stage",
			"(ZZ)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean DynamicsProcessing_Stage::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean DynamicsProcessing_Stage::isInUse()
	{
		return __thiz.callMethod<jboolean>(
			"isInUse",
			"()Z"
		);
	}
	void DynamicsProcessing_Stage::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	jstring DynamicsProcessing_Stage::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx

