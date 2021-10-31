#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../BlendMode.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Outline.hpp"
#include "./Drawable.hpp"
#include "./Drawable_ConstantState.hpp"
#include "./ColorDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QJniObject forward
	ColorDrawable::ColorDrawable(QJniObject obj) : android::graphics::drawable::Drawable(obj) {}
	
	// Constructors
	ColorDrawable::ColorDrawable()
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.ColorDrawable",
			"()V"
		) {}
	ColorDrawable::ColorDrawable(jint arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.ColorDrawable",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void ColorDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jboolean ColorDrawable::canApplyTheme()
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void ColorDrawable::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint ColorDrawable::getAlpha()
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint ColorDrawable::getChangingConfigurations()
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	jint ColorDrawable::getColor()
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	android::graphics::ColorFilter ColorDrawable::getColorFilter()
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	android::graphics::drawable::Drawable_ConstantState ColorDrawable::getConstantState()
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	jint ColorDrawable::getOpacity()
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void ColorDrawable::getOutline(android::graphics::Outline arg0)
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jboolean ColorDrawable::hasFocusStateSpecified()
	{
		return callMethod<jboolean>(
			"hasFocusStateSpecified",
			"()Z"
		);
	}
	void ColorDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
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
	jboolean ColorDrawable::isStateful()
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	android::graphics::drawable::Drawable ColorDrawable::mutate()
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void ColorDrawable::setAlpha(jint arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void ColorDrawable::setColor(jint arg0)
	{
		callMethod<void>(
			"setColor",
			"(I)V",
			arg0
		);
	}
	void ColorDrawable::setColorFilter(android::graphics::ColorFilter arg0)
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void ColorDrawable::setTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void ColorDrawable::setTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable

