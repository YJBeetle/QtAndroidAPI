#include "./Animation_Description.hpp"

namespace android::view::animation
{
	// Fields
	jint Animation_Description::type()
	{
		return __thiz.getField<jint>(
			"type"
		);
	}
	jfloat Animation_Description::value()
	{
		return __thiz.getField<jfloat>(
			"value"
		);
	}
	
	Animation_Description::Animation_Description(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::view::animation

