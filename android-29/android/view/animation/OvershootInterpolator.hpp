#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./BaseInterpolator.hpp"

namespace android::content
{
	class Context;
}

namespace android::view::animation
{
	class OvershootInterpolator : public android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		OvershootInterpolator(QAndroidJniObject obj);
		// Constructors
		OvershootInterpolator();
		OvershootInterpolator(jfloat &arg0);
		OvershootInterpolator(android::content::Context &arg0, __JniBaseClass &arg1);
		
		// Methods
		jfloat getInterpolation(jfloat arg0);
	};
} // namespace android::view::animation

