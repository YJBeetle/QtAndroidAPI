#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::view::animation
{
	class Animation_Description : public __JniBaseClass
	{
	public:
		// Fields
		jint type();
		jfloat value();
		
		Animation_Description(QAndroidJniObject obj);
		// Constructors
		Animation_Description() = default;
		
		// Methods
	};
} // namespace android::view::animation

