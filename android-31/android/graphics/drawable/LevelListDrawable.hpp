#pragma once

#include "../../content/res/Resources.def.hpp"
#include "../../content/res/Resources_Theme.def.hpp"
#include "./Drawable.def.hpp"
#include "./DrawableContainer_DrawableContainerState.def.hpp"
#include "./LevelListDrawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	inline LevelListDrawable::LevelListDrawable()
		: android::graphics::drawable::DrawableContainer(
			"android.graphics.drawable.LevelListDrawable",
			"()V"
		) {}
	
	// Methods
	inline void LevelListDrawable::addLevel(jint arg0, jint arg1, android::graphics::drawable::Drawable arg2) const
	{
		callMethod<void>(
			"addLevel",
			"(IILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void LevelListDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
	inline android::graphics::drawable::Drawable LevelListDrawable::mutate() const
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
} // namespace android::graphics::drawable

// Base class headers
#include "./Drawable.hpp"
#include "./DrawableContainer.hpp"

