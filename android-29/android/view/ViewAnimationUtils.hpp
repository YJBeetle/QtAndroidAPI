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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewAnimationUtils(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ViewAnimationUtils(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::animation::Animator createCircularReveal(android::view::View arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4);
	};
} // namespace android::view

