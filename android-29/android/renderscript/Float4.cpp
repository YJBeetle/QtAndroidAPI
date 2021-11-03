#include "./Float4.hpp"

namespace android::renderscript
{
	// Fields
	jfloat Float4::w()
	{
		return getField<jfloat>(
			"w"
		);
	}
	jfloat Float4::x()
	{
		return getField<jfloat>(
			"x"
		);
	}
	jfloat Float4::y()
	{
		return getField<jfloat>(
			"y"
		);
	}
	jfloat Float4::z()
	{
		return getField<jfloat>(
			"z"
		);
	}
	
	// QJniObject forward
	Float4::Float4(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Float4::Float4()
		: JObject(
			"android.renderscript.Float4",
			"()V"
		) {}
	Float4::Float4(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		: JObject(
			"android.renderscript.Float4",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::renderscript

