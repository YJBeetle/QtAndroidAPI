#include "./Int2.hpp"

namespace android::renderscript
{
	// Fields
	jint Int2::x()
	{
		return getField<jint>(
			"x"
		);
	}
	jint Int2::y()
	{
		return getField<jint>(
			"y"
		);
	}
	
	// QAndroidJniObject forward
	Int2::Int2(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Int2::Int2()
		: JObject(
			"android.renderscript.Int2",
			"()V"
		) {}
	Int2::Int2(jint arg0, jint arg1)
		: JObject(
			"android.renderscript.Int2",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::renderscript

