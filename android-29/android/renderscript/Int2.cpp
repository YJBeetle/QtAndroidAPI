#include "./Int2.hpp"

namespace android::renderscript
{
	// Fields
	jint Int2::x()
	{
		return __thiz.getField<jint>(
			"x"
		);
	}
	jint Int2::y()
	{
		return __thiz.getField<jint>(
			"y"
		);
	}
	
	Int2::Int2(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Int2::Int2()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Int2",
			"()V"
		);
	}
	Int2::Int2(jint &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Int2",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::renderscript

