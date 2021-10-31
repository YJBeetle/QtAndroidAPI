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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Animatable2_AnimationCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Animatable2_AnimationCallback(QAndroidJniObject obj);
		
		// Constructors
		Animatable2_AnimationCallback();
		
		// Methods
		void onAnimationEnd(android::graphics::drawable::Drawable arg0);
		void onAnimationStart(android::graphics::drawable::Drawable arg0);
	};
} // namespace android::graphics::drawable

