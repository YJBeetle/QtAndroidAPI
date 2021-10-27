#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics::drawable
{
	class Drawable;
}

namespace android::graphics::drawable
{
	class Animatable2_AnimationCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		Animatable2_AnimationCallback(QAndroidJniObject obj);
		// Constructors
		Animatable2_AnimationCallback();
		
		// Methods
		void onAnimationEnd(android::graphics::drawable::Drawable arg0);
		void onAnimationStart(android::graphics::drawable::Drawable arg0);
	};
} // namespace android::graphics::drawable

