#include "./VibrationAttributes.hpp"
#include "./VibrationAttributes_Builder.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	VibrationAttributes_Builder::VibrationAttributes_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	VibrationAttributes_Builder::VibrationAttributes_Builder()
		: JObject(
			"android.os.VibrationAttributes$Builder",
			"()V"
		) {}
	VibrationAttributes_Builder::VibrationAttributes_Builder(android::os::VibrationAttributes arg0)
		: JObject(
			"android.os.VibrationAttributes$Builder",
			"(Landroid/os/VibrationAttributes;)V",
			arg0.object()
		) {}
	
	// Methods
	android::os::VibrationAttributes VibrationAttributes_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/os/VibrationAttributes;"
		);
	}
	android::os::VibrationAttributes_Builder VibrationAttributes_Builder::setFlags(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setFlags",
			"(II)Landroid/os/VibrationAttributes$Builder;",
			arg0,
			arg1
		);
	}
	android::os::VibrationAttributes_Builder VibrationAttributes_Builder::setUsage(jint arg0) const
	{
		return callObjectMethod(
			"setUsage",
			"(I)Landroid/os/VibrationAttributes$Builder;",
			arg0
		);
	}
} // namespace android::os

