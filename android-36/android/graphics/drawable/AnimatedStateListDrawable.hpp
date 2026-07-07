#pragma once

#include "../../../JIntArray.hpp"
#include "../../content/res/Resources.def.hpp"
#include "../../content/res/Resources_Theme.def.hpp"
#include "./Drawable.def.hpp"
#include "./DrawableContainer_DrawableContainerState.def.hpp"
#include "./AnimatedStateListDrawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	inline AnimatedStateListDrawable::AnimatedStateListDrawable()
		: android::graphics::drawable::StateListDrawable(
			"android.graphics.drawable.AnimatedStateListDrawable",
			"()V"
		) {}
	
	// Methods
	inline void AnimatedStateListDrawable::addState(JIntArray arg0, android::graphics::drawable::Drawable arg1, jint arg2) const
	{
		callMethod<void>(
			"addState",
			"([ILandroid/graphics/drawable/Drawable;I)V",
			arg0.object<jintArray>(),
			arg1.object(),
			arg2
		);
	}
	inline void AnimatedStateListDrawable::addTransition(jint arg0, jint arg1, android::graphics::drawable::Drawable arg2, jboolean arg3) const
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
	inline void AnimatedStateListDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	inline void AnimatedStateListDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
	inline jboolean AnimatedStateListDrawable::isStateful() const
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	inline void AnimatedStateListDrawable::jumpToCurrentState() const
	{
		callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	inline android::graphics::drawable::Drawable AnimatedStateListDrawable::mutate() const
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jboolean AnimatedStateListDrawable::setVisible(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::drawable

// Base class headers
#include "./Drawable.hpp"
#include "./DrawableContainer.hpp"
#include "./StateListDrawable.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::drawable;
#endif
