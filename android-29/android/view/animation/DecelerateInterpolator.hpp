#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./BaseInterpolator.hpp"

namespace android::content
{
	class Context;
}

namespace android::view::animation
{
	class DecelerateInterpolator : public android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		DecelerateInterpolator(QAndroidJniObject obj);
		// Constructors
		DecelerateInterpolator();
		DecelerateInterpolator(jfloat &arg0);
		DecelerateInterpolator(android::content::Context &arg0, __JniBaseClass &arg1);
		
		// Methods
		jfloat getInterpolation(jfloat arg0);
	};
} // namespace android::view::animation

