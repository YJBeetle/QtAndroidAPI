#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./BaseInterpolator.hpp"

namespace android::content
{
	class Context;
}

namespace android::view::animation
{
	class AnticipateInterpolator : public android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		AnticipateInterpolator(QAndroidJniObject obj);
		// Constructors
		AnticipateInterpolator();
		AnticipateInterpolator(jfloat &arg0);
		AnticipateInterpolator(android::content::Context &arg0, __JniBaseClass &arg1);
		
		// Methods
		jfloat getInterpolation(jfloat arg0);
	};
} // namespace android::view::animation

