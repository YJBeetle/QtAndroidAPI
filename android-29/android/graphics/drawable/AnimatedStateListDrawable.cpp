#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "./Drawable.hpp"
#include "./DrawableContainer_DrawableContainerState.hpp"
#include "./AnimatedStateListDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	AnimatedStateListDrawable::AnimatedStateListDrawable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AnimatedStateListDrawable::AnimatedStateListDrawable()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.AnimatedStateListDrawable",
			"()V"
		);
	}
	
	// Methods
	void AnimatedStateListDrawable::addState(jintArray arg0, android::graphics::drawable::Drawable arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"addState",
			"([ILandroid/graphics/drawable/Drawable;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void AnimatedStateListDrawable::addTransition(jint arg0, jint arg1, android::graphics::drawable::Drawable arg2, jboolean arg3)
	{
		__thiz.callMethod<void>(
			"addTransition",
			"(IILandroid/graphics/drawable/Drawable;Z)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void AnimatedStateListDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	void AnimatedStateListDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
	{
		__thiz.callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jboolean AnimatedStateListDrawable::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void AnimatedStateListDrawable::jumpToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	QAndroidJniObject AnimatedStateListDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jboolean AnimatedStateListDrawable::setVisible(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::drawable

