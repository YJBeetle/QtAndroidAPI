#include "./Long2.hpp"

namespace android::renderscript
{
	// Fields
	jlong Long2::x()
	{
		return getField<jlong>(
			"x"
		);
	}
	jlong Long2::y()
	{
		return getField<jlong>(
			"y"
		);
	}
	
	// QAndroidJniObject forward
	Long2::Long2(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Long2::Long2()
		: __JniBaseClass(
			"android.renderscript.Long2",
			"()V"
		) {}
	Long2::Long2(jlong arg0, jlong arg1)
		: __JniBaseClass(
			"android.renderscript.Long2",
			"(JJ)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::renderscript

