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
	
	// Constructors
	Long2::Long2()
		: JObject(
			"android.renderscript.Long2",
			"()V"
		) {}
	Long2::Long2(jlong arg0, jlong arg1)
		: JObject(
			"android.renderscript.Long2",
			"(JJ)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::renderscript

