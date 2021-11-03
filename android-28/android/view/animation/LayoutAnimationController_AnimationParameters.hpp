#pragma once

#include "../../../JObject.hpp"

namespace android::view::animation
{
	class LayoutAnimationController_AnimationParameters : public JObject
	{
	public:
		// Fields
		jint count();
		jint index();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LayoutAnimationController_AnimationParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LayoutAnimationController_AnimationParameters(QAndroidJniObject obj);
		
		// Constructors
		LayoutAnimationController_AnimationParameters();
		
		// Methods
	};
} // namespace android::view::animation

