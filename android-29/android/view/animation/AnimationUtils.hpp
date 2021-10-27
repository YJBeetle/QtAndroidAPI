#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::view::animation
{
	class Animation;
}
namespace android::view::animation
{
	class LayoutAnimationController;
}

namespace android::view::animation
{
	class AnimationUtils : public __JniBaseClass
	{
	public:
		// Fields
		
		AnimationUtils(QAndroidJniObject obj);
		// Constructors
		AnimationUtils();
		
		// Methods
		static jlong currentAnimationTimeMillis();
		static QAndroidJniObject loadAnimation(android::content::Context arg0, jint arg1);
		static QAndroidJniObject loadInterpolator(android::content::Context arg0, jint arg1);
		static QAndroidJniObject loadLayoutAnimation(android::content::Context arg0, jint arg1);
		static QAndroidJniObject makeInAnimation(android::content::Context arg0, jboolean arg1);
		static QAndroidJniObject makeInChildBottomAnimation(android::content::Context arg0);
		static QAndroidJniObject makeOutAnimation(android::content::Context arg0, jboolean arg1);
	};
} // namespace android::view::animation

