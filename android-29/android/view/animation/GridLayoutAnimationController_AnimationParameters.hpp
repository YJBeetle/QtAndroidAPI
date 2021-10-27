#pragma once

#include "../../../__JniBaseClass.hpp"
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
		
		GridLayoutAnimationController_AnimationParameters(QAndroidJniObject obj);
		// Constructors
		GridLayoutAnimationController_AnimationParameters();
		
		// Methods
	};
} // namespace android::view::animation

