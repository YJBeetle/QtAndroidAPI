#include "./Int4.hpp"

namespace android::renderscript
{
	// Fields
	jint Int4::w()
	{
		return __thiz.getField<jint>(
			"w"
		);
	}
	jint Int4::x()
	{
		return __thiz.getField<jint>(
			"x"
		);
	}
	jint Int4::y()
	{
		return __thiz.getField<jint>(
			"y"
		);
	}
	jint Int4::z()
	{
		return __thiz.getField<jint>(
			"z"
		);
	}
	
	Int4::Int4(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Int4::Int4()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Int4",
			"()V"
		);
	}
	Int4::Int4(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Int4",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace android::renderscript

