#include "./Int3.hpp"

namespace android::renderscript
{
	// Fields
	jint Int3::x()
	{
		return getField<jint>(
			"x"
		);
	}
	jint Int3::y()
	{
		return getField<jint>(
			"y"
		);
	}
	jint Int3::z()
	{
		return getField<jint>(
			"z"
		);
	}
	
	// QJniObject forward
	Int3::Int3(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Int3::Int3()
		: JObject(
			"android.renderscript.Int3",
			"()V"
		) {}
	Int3::Int3(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.renderscript.Int3",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::renderscript

