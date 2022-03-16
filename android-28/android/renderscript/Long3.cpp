#include "./Long3.hpp"

namespace android::renderscript
{
	// Fields
	jlong Long3::x()
	{
		return getField<jlong>(
			"x"
		);
	}
	jlong Long3::y()
	{
		return getField<jlong>(
			"y"
		);
	}
	jlong Long3::z()
	{
		return getField<jlong>(
			"z"
		);
	}
	
	// Constructors
	Long3::Long3()
		: JObject(
			"android.renderscript.Long3",
			"()V"
		) {}
	Long3::Long3(jlong arg0, jlong arg1, jlong arg2)
		: JObject(
			"android.renderscript.Long3",
			"(JJJ)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::renderscript

