#pragma once

#include "../../../JObject.hpp"

namespace android::graphics::drawable
{
	class Drawable;
}

namespace android::graphics::drawable
{
	class Animatable2_AnimationCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Animatable2_AnimationCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Animatable2_AnimationCallback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Animatable2_AnimationCallback();
		
		// Methods
		void onAnimationEnd(android::graphics::drawable::Drawable arg0) const;
		void onAnimationStart(android::graphics::drawable::Drawable arg0) const;
	};
} // namespace android::graphics::drawable

