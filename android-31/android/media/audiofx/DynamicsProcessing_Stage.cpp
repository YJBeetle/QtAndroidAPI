#include "../../../JString.hpp"
#include "./DynamicsProcessing_Stage.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// QJniObject forward
	DynamicsProcessing_Stage::DynamicsProcessing_Stage(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DynamicsProcessing_Stage::DynamicsProcessing_Stage(jboolean arg0, jboolean arg1)
		: JObject(
			"android.media.audiofx.DynamicsProcessing$Stage",
			"(ZZ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean DynamicsProcessing_Stage::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean DynamicsProcessing_Stage::isInUse() const
	{
		return callMethod<jboolean>(
			"isInUse",
			"()Z"
		);
	}
	void DynamicsProcessing_Stage::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	JString DynamicsProcessing_Stage::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

