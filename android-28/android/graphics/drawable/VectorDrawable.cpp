#include "../../../JIntArray.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../PorterDuff_Mode.hpp"
#include "./Drawable.hpp"
#include "./Drawable_ConstantState.hpp"
#include "./VectorDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QAndroidJniObject forward
	VectorDrawable::VectorDrawable(QAndroidJniObject obj) : android::graphics::drawable::Drawable(obj) {}
	
	// Constructors
	VectorDrawable::VectorDrawable()
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.VectorDrawable",
			"()V"
		) {}
	
	// Methods
	void VectorDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jboolean VectorDrawable::canApplyTheme()
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void VectorDrawable::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint VectorDrawable::getAlpha()
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint VectorDrawable::getChangingConfigurations()
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::graphics::ColorFilter VectorDrawable::getColorFilter()
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	android::graphics::drawable::Drawable_ConstantState VectorDrawable::getConstantState()
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	jint VectorDrawable::getIntrinsicHeight()
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint VectorDrawable::getIntrinsicWidth()
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint VectorDrawable::getOpacity()
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void VectorDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3)
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
	jboolean VectorDrawable::isAutoMirrored()
	{
		return callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	jboolean VectorDrawable::isStateful()
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	android::graphics::drawable::Drawable VectorDrawable::mutate()
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void VectorDrawable::setAlpha(jint arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void VectorDrawable::setAutoMirrored(jboolean arg0)
	{
		callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	void VectorDrawable::setColorFilter(android::graphics::ColorFilter arg0)
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void VectorDrawable::setTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void VectorDrawable::setTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		callMethod<void>(
			"setTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable

