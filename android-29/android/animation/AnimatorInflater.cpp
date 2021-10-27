#include "./Animator.hpp"
#include "./StateListAnimator.hpp"
#include "../content/Context.hpp"
#include "./AnimatorInflater.hpp"

namespace android::animation
{
	// Fields
	
	AnimatorInflater::AnimatorInflater(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AnimatorInflater::AnimatorInflater()
	{
		__thiz = QAndroidJniObject(
			"android.animation.AnimatorInflater",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject AnimatorInflater::loadAnimator(android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.AnimatorInflater",
			"loadAnimator",
			"(Landroid/content/Context;I)Landroid/animation/Animator;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AnimatorInflater::loadStateListAnimator(android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.AnimatorInflater",
			"loadStateListAnimator",
			"(Landroid/content/Context;I)Landroid/animation/StateListAnimator;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::animation

