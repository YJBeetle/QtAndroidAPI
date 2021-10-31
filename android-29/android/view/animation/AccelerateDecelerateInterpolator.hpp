#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./BaseInterpolator.hpp"

namespace android::content
{
	class Context;
}

namespace android::view::animation
{
	class AccelerateDecelerateInterpolator : public android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		AccelerateDecelerateInterpolator(QAndroidJniObject obj);
		// Constructors
		AccelerateDecelerateInterpolator();
		AccelerateDecelerateInterpolator(android::content::Context arg0, __JniBaseClass arg1);
		
		// Methods
		jfloat getInterpolation(jfloat arg0);
	};
} // namespace android::view::animation

