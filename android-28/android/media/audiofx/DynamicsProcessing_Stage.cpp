#include "./DynamicsProcessing_Stage.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// QAndroidJniObject forward
	DynamicsProcessing_Stage::DynamicsProcessing_Stage(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DynamicsProcessing_Stage::DynamicsProcessing_Stage(jboolean arg0, jboolean arg1)
		: JObject(
			"android.media.audiofx.DynamicsProcessing$Stage",
			"(ZZ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean DynamicsProcessing_Stage::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean DynamicsProcessing_Stage::isInUse()
	{
		return callMethod<jboolean>(
			"isInUse",
			"()Z"
		);
	}
	void DynamicsProcessing_Stage::setEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	jstring DynamicsProcessing_Stage::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx

