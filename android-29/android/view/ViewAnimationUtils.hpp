#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::animation
{
	class Animator;
}
namespace android::view
{
	class View;
}

namespace android::view
{
	class ViewAnimationUtils : public __JniBaseClass
	{
	public:
		// Fields
		
		ViewAnimationUtils(QAndroidJniObject obj);
		// Constructors
		ViewAnimationUtils() = default;
		
		// Methods
		static QAndroidJniObject createCircularReveal(android::view::View arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4);
	};
} // namespace android::view

