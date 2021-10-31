#include "./Float2.hpp"

namespace android::renderscript
{
	// Fields
	jfloat Float2::x()
	{
		return getField<jfloat>(
			"x"
		);
	}
	jfloat Float2::y()
	{
		return getField<jfloat>(
			"y"
		);
	}
	
	// QJniObject forward
	Float2::Float2(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Float2::Float2()
		: __JniBaseClass(
			"android.renderscript.Float2",
			"()V"
		) {}
	Float2::Float2(jfloat arg0, jfloat arg1)
		: __JniBaseClass(
			"android.renderscript.Float2",
			"(FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::renderscript

