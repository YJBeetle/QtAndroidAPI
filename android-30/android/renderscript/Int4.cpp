#include "./Int4.hpp"

namespace android::renderscript
{
	// Fields
	jint Int4::w()
	{
		return getField<jint>(
			"w"
		);
	}
	jint Int4::x()
	{
		return getField<jint>(
			"x"
		);
	}
	jint Int4::y()
	{
		return getField<jint>(
			"y"
		);
	}
	jint Int4::z()
	{
		return getField<jint>(
			"z"
		);
	}
	
	// QJniObject forward
	Int4::Int4(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Int4::Int4()
		: JObject(
			"android.renderscript.Int4",
			"()V"
		) {}
	Int4::Int4(jint arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.renderscript.Int4",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::renderscript

