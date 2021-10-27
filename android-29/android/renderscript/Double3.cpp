#include "./Double3.hpp"

namespace android::renderscript
{
	// Fields
	jdouble Double3::x()
	{
		return __thiz.getField<jdouble>(
			"x"
		);
	}
	jdouble Double3::y()
	{
		return __thiz.getField<jdouble>(
			"y"
		);
	}
	jdouble Double3::z()
	{
		return __thiz.getField<jdouble>(
			"z"
		);
	}
	
	Double3::Double3(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Double3::Double3()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Double3",
			"()V"
		);
	}
	Double3::Double3(jdouble &arg0, jdouble &arg1, jdouble &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Double3",
			"(DDD)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace android::renderscript

