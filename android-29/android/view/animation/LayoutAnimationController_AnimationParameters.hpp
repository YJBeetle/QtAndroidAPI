#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::view::animation
{
	class LayoutAnimationController_AnimationParameters : public __JniBaseClass
	{
	public:
		// Fields
		jint count();
		jint index();
		
		LayoutAnimationController_AnimationParameters(QAndroidJniObject obj);
		// Constructors
		LayoutAnimationController_AnimationParameters();
		
		// Methods
	};
} // namespace android::view::animation

