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
	
	// Constructors
	
	// Methods
} // namespace android::view::animation

