#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./BaseInterpolator.hpp"

namespace android::content
{
	class Context;
}

namespace android::view::animation
{
	class AccelerateInterpolator : public android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		AccelerateInterpolator(QAndroidJniObject obj);
		// Constructors
		AccelerateInterpolator();
		AccelerateInterpolator(jfloat arg0);
		AccelerateInterpolator(android::content::Context arg0, __JniBaseClass arg1);
		
		// Methods
		jfloat getInterpolation(jfloat arg0);
	};
} // namespace android::view::animation

