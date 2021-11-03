#pragma once

#include "../../../JObject.hpp"
#include "./LayoutAnimationController_AnimationParameters.hpp"


namespace android::view::animation
{
	class GridLayoutAnimationController_AnimationParameters : public android::view::animation::LayoutAnimationController_AnimationParameters
	{
	public:
		// Fields
		jint column();
		jint columnsCount();
		jint row();
		jint rowsCount();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GridLayoutAnimationController_AnimationParameters(const char *className, const char *sig, Ts...agv) : android::view::animation::LayoutAnimationController_AnimationParameters(className, sig, std::forward<Ts>(agv)...) {}
		GridLayoutAnimationController_AnimationParameters(QAndroidJniObject obj);
		
		// Constructors
		GridLayoutAnimationController_AnimationParameters();
		
		// Methods
	};
} // namespace android::view::animation

