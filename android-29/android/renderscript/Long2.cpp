#include "./Long2.hpp"

namespace android::renderscript
{
	// Fields
	jlong Long2::x()
	{
		return __thiz.getField<jlong>(
			"x"
		);
	}
	jlong Long2::y()
	{
		return __thiz.getField<jlong>(
			"y"
		);
	}
	
	Long2::Long2(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Long2::Long2()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Long2",
			"()V"
		);
	}
	Long2::Long2(jlong arg0, jlong arg1)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Long2",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::renderscript

