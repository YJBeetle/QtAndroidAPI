#pragma once

#include "./LayoutAnimationController_AnimationParameters.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit GridLayoutAnimationController_AnimationParameters(const char *className, const char *sig, Ts...agv) : android::view::animation::LayoutAnimationController_AnimationParameters(className, sig, std::forward<Ts>(agv)...) {}
		GridLayoutAnimationController_AnimationParameters(QJniObject obj) : android::view::animation::LayoutAnimationController_AnimationParameters(obj) {}
		
		// Constructors
		GridLayoutAnimationController_AnimationParameters();
		
		// Methods
	};
} // namespace android::view::animation

