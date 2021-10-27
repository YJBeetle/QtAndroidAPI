#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::view::animation
{
	class BaseInterpolator : public __JniBaseClass
	{
	public:
		// Fields
		
		BaseInterpolator(QAndroidJniObject obj);
		// Constructors
		BaseInterpolator();
		
		// Methods
	};
} // namespace android::view::animation

