#include "./Float3.hpp"

namespace android::renderscript
{
	// Fields
	jfloat Float3::x()
	{
		return getField<jfloat>(
			"x"
		);
	}
	jfloat Float3::y()
	{
		return getField<jfloat>(
			"y"
		);
	}
	jfloat Float3::z()
	{
		return getField<jfloat>(
			"z"
		);
	}
	
	// QAndroidJniObject forward
	Float3::Float3(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Float3::Float3()
		: JObject(
			"android.renderscript.Float3",
			"()V"
		) {}
	Float3::Float3(jfloat arg0, jfloat arg1, jfloat arg2)
		: JObject(
			"android.renderscript.Float3",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::renderscript

