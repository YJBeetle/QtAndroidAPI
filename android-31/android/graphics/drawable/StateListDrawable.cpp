#include "../../../JIntArray.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "./Drawable.hpp"
#include "./DrawableContainer_DrawableContainerState.hpp"
#include "./StateListDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QJniObject forward
	StateListDrawable::StateListDrawable(QJniObject obj) : android::graphics::drawable::DrawableContainer(obj) {}
	
	// Constructors
	StateListDrawable::StateListDrawable()
		: android::graphics::drawable::DrawableContainer(
			"android.graphics.drawable.StateListDrawable",
			"()V"
		) {}
	
	// Methods
	void StateListDrawable::addState(JIntArray arg0, android::graphics::drawable::Drawable arg1)
	{
		callMethod<void>(
			"addState",
			"([ILandroid/graphics/drawable/Drawable;)V",
			arg0.object<jintArray>(),
			arg1.object()
		);
	}
	void StateListDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jint StateListDrawable::findStateDrawableIndex(JIntArray arg0)
	{
		return callMethod<jint>(
			"findStateDrawableIndex",
			"([I)I",
			arg0.object<jintArray>()
		);
	}
	jint StateListDrawable::getStateCount()
	{
		return callMethod<jint>(
			"getStateCount",
			"()I"
		);
	}
	android::graphics::drawable::Drawable StateListDrawable::getStateDrawable(jint arg0)
	{
		return callObjectMethod(
			"getStateDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	JIntArray StateListDrawable::getStateSet(jint arg0)
	{
		return callObjectMethod(
			"getStateSet",
			"(I)[I",
			arg0
		);
	}
	jboolean StateListDrawable::hasFocusStateSpecified()
	{
		return callMethod<jboolean>(
			"hasFocusStateSpecified",
			"()Z"
		);
	}
	void StateListDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3)
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
	jboolean StateListDrawable::isStateful()
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	android::graphics::drawable::Drawable StateListDrawable::mutate()
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
} // namespace android::graphics::drawable

