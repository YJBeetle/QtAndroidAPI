#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "./Drawable.hpp"
#include "./DrawableContainer_DrawableContainerState.hpp"
#include "./StateListDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	StateListDrawable::StateListDrawable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StateListDrawable::StateListDrawable()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.StateListDrawable",
			"()V"
		);
	}
	
	// Methods
	void StateListDrawable::addState(jintArray arg0, android::graphics::drawable::Drawable arg1)
	{
		__thiz.callMethod<void>(
			"addState",
			"([ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void StateListDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	jint StateListDrawable::findStateDrawableIndex(jintArray arg0)
	{
		return __thiz.callMethod<jint>(
			"findStateDrawableIndex",
			"([I)I",
			arg0
		);
	}
	jint StateListDrawable::getStateCount()
	{
		return __thiz.callMethod<jint>(
			"getStateCount",
			"()I"
		);
	}
	QAndroidJniObject StateListDrawable::getStateDrawable(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getStateDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jintArray StateListDrawable::getStateSet(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getStateSet",
			"(I)[I",
			arg0
		).object<jintArray>();
	}
	void StateListDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
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
	jboolean StateListDrawable::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	QAndroidJniObject StateListDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
} // namespace android::graphics::drawable

