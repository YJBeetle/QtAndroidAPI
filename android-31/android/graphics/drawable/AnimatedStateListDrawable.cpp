#include "../../../JIntArray.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "./Drawable.hpp"
#include "./DrawableContainer_DrawableContainerState.hpp"
#include "./AnimatedStateListDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QAndroidJniObject forward
	AnimatedStateListDrawable::AnimatedStateListDrawable(QAndroidJniObject obj) : android::graphics::drawable::StateListDrawable(obj) {}
	
	// Constructors
	AnimatedStateListDrawable::AnimatedStateListDrawable()
		: android::graphics::drawable::StateListDrawable(
			"android.graphics.drawable.AnimatedStateListDrawable",
			"()V"
		) {}
	
	// Methods
	void AnimatedStateListDrawable::addState(JIntArray arg0, android::graphics::drawable::Drawable arg1, jint arg2)
	{
		callMethod<void>(
			"addState",
			"([ILandroid/graphics/drawable/Drawable;I)V",
			arg0.object<jintArray>(),
			arg1.object(),
			arg2
		);
	}
	void AnimatedStateListDrawable::addTransition(jint arg0, jint arg1, android::graphics::drawable::Drawable arg2, jboolean arg3)
	{
		callMethod<void>(
			"addTransition",
			"(IILandroid/graphics/drawable/Drawable;Z)V",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	void AnimatedStateListDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	void AnimatedStateListDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3)
	{
		callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	jboolean AnimatedStateListDrawable::isStateful()
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void AnimatedStateListDrawable::jumpToCurrentState()
	{
		callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	android::graphics::drawable::Drawable AnimatedStateListDrawable::mutate()
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jboolean AnimatedStateListDrawable::setVisible(jboolean arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::drawable

