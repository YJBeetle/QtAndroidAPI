#include "./DiscretePathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	DiscretePathEffect::DiscretePathEffect(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DiscretePathEffect::DiscretePathEffect(jfloat &arg0, jfloat &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.DiscretePathEffect",
			"(FF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::graphics

