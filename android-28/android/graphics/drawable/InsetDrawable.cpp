#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Outline.hpp"
#include "../Rect.hpp"
#include "./Drawable.hpp"
#include "./InsetDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	InsetDrawable::InsetDrawable(android::graphics::drawable::Drawable arg0, jfloat arg1)
		: android::graphics::drawable::DrawableWrapper(
			"android.graphics.drawable.InsetDrawable",
			"(Landroid/graphics/drawable/Drawable;F)V",
			arg0.object(),
			arg1
		) {}
	InsetDrawable::InsetDrawable(android::graphics::drawable::Drawable arg0, jint arg1)
		: android::graphics::drawable::DrawableWrapper(
			"android.graphics.drawable.InsetDrawable",
			"(Landroid/graphics/drawable/Drawable;I)V",
			arg0.object(),
			arg1
		) {}
	InsetDrawable::InsetDrawable(android::graphics::drawable::Drawable arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4)
		: android::graphics::drawable::DrawableWrapper(
			"android.graphics.drawable.InsetDrawable",
			"(Landroid/graphics/drawable/Drawable;FFFF)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	InsetDrawable::InsetDrawable(android::graphics::drawable::Drawable arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: android::graphics::drawable::DrawableWrapper(
			"android.graphics.drawable.InsetDrawable",
			"(Landroid/graphics/drawable/Drawable;IIII)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	void InsetDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jint InsetDrawable::getIntrinsicHeight() const
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint InsetDrawable::getIntrinsicWidth() const
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint InsetDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void InsetDrawable::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jboolean InsetDrawable::getPadding(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	void InsetDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
} // namespace android::graphics::drawable

