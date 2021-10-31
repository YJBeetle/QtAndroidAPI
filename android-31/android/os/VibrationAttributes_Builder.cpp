#include "./VibrationAttributes.hpp"
#include "./VibrationAttributes_Builder.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	VibrationAttributes_Builder::VibrationAttributes_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	VibrationAttributes_Builder::VibrationAttributes_Builder()
		: __JniBaseClass(
			"android.os.VibrationAttributes$Builder",
			"()V"
		) {}
	VibrationAttributes_Builder::VibrationAttributes_Builder(android::os::VibrationAttributes arg0)
		: __JniBaseClass(
			"android.os.VibrationAttributes$Builder",
			"(Landroid/os/VibrationAttributes;)V",
			arg0.object()
		) {}
	
	// Methods
	android::os::VibrationAttributes VibrationAttributes_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/os/VibrationAttributes;"
		);
	}
	android::os::VibrationAttributes_Builder VibrationAttributes_Builder::setFlags(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setFlags",
			"(II)Landroid/os/VibrationAttributes$Builder;",
			arg0,
			arg1
		);
	}
	android::os::VibrationAttributes_Builder VibrationAttributes_Builder::setUsage(jint arg0)
	{
		return callObjectMethod(
			"setUsage",
			"(I)Landroid/os/VibrationAttributes$Builder;",
			arg0
		);
	}
} // namespace android::os

