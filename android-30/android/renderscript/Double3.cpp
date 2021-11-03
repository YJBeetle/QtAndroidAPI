#include "./Double3.hpp"

namespace android::renderscript
{
	// Fields
	jdouble Double3::x()
	{
		return getField<jdouble>(
			"x"
		);
	}
	jdouble Double3::y()
	{
		return getField<jdouble>(
			"y"
		);
	}
	jdouble Double3::z()
	{
		return getField<jdouble>(
			"z"
		);
	}
	
	// QAndroidJniObject forward
	Double3::Double3(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Double3::Double3()
		: JObject(
			"android.renderscript.Double3",
			"()V"
		) {}
	Double3::Double3(jdouble arg0, jdouble arg1, jdouble arg2)
		: JObject(
			"android.renderscript.Double3",
			"(DDD)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::renderscript

