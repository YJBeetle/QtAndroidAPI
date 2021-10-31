#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./BaseInterpolator.hpp"

namespace android::content
{
	class Context;
}

namespace android::view::animation
{
	class CycleInterpolator : public android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		CycleInterpolator(QAndroidJniObject obj);
		// Constructors
		CycleInterpolator(jfloat arg0);
		CycleInterpolator(android::content::Context arg0, __JniBaseClass arg1);
		CycleInterpolator() = default;
		
		// Methods
		jfloat getInterpolation(jfloat arg0);
	};
} // namespace android::view::animation

