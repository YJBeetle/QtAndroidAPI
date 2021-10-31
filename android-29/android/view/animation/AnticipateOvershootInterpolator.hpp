#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./BaseInterpolator.hpp"

namespace android::content
{
	class Context;
}

namespace android::view::animation
{
	class AnticipateOvershootInterpolator : public android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		AnticipateOvershootInterpolator(QAndroidJniObject obj);
		// Constructors
		AnticipateOvershootInterpolator();
		AnticipateOvershootInterpolator(jfloat arg0);
		AnticipateOvershootInterpolator(android::content::Context arg0, __JniBaseClass arg1);
		AnticipateOvershootInterpolator(jfloat arg0, jfloat arg1);
		
		// Methods
		jfloat getInterpolation(jfloat arg0);
	};
} // namespace android::view::animation

