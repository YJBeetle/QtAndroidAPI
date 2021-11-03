#include "./Animation_Description.hpp"

namespace android::view::animation
{
	// Fields
	jint Animation_Description::type()
	{
		return getField<jint>(
			"type"
		);
	}
	jfloat Animation_Description::value()
	{
		return getField<jfloat>(
			"value"
		);
	}
	
	// QAndroidJniObject forward
	Animation_Description::Animation_Description(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::view::animation

