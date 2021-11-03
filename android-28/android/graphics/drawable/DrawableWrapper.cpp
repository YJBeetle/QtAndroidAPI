#include "../../../JIntArray.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Outline.hpp"
#include "../PorterDuff_Mode.hpp"
#include "../Rect.hpp"
#include "./Drawable.hpp"
#include "./Drawable_ConstantState.hpp"
#include "./DrawableWrapper.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QAndroidJniObject forward
	DrawableWrapper::DrawableWrapper(QAndroidJniObject obj) : android::graphics::drawable::Drawable(obj) {}
	
	// Constructors
	DrawableWrapper::DrawableWrapper(android::graphics::drawable::Drawable arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.DrawableWrapper",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		) {}
	
	// Methods
	void DrawableWrapper::applyTheme(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jboolean DrawableWrapper::canApplyTheme()
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void DrawableWrapper::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint DrawableWrapper::getAlpha()
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint DrawableWrapper::getChangingConfigurations()
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::graphics::ColorFilter DrawableWrapper::getColorFilter()
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	android::graphics::drawable::Drawable_ConstantState DrawableWrapper::getConstantState()
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	android::graphics::drawable::Drawable DrawableWrapper::getDrawable()
	{
		return callObjectMethod(
			"getDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void DrawableWrapper::getHotspotBounds(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"getHotspotBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jint DrawableWrapper::getIntrinsicHeight()
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint DrawableWrapper::getIntrinsicWidth()
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint DrawableWrapper::getOpacity()
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void DrawableWrapper::getOutline(android::graphics::Outline arg0)
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jboolean DrawableWrapper::getPadding(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	void DrawableWrapper::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3)
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
	void DrawableWrapper::invalidateDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	jboolean DrawableWrapper::isStateful()
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	android::graphics::drawable::Drawable DrawableWrapper::mutate()
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jboolean DrawableWrapper::onLayoutDirectionChanged(jint arg0)
	{
		return callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	void DrawableWrapper::scheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1, jlong arg2)
	{
		callMethod<void>(
			"scheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void DrawableWrapper::setAlpha(jint arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void DrawableWrapper::setColorFilter(android::graphics::ColorFilter arg0)
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void DrawableWrapper::setDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void DrawableWrapper::setHotspot(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void DrawableWrapper::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"setHotspotBounds",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void DrawableWrapper::setTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void DrawableWrapper::setTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		callMethod<void>(
			"setTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	jboolean DrawableWrapper::setVisible(jboolean arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	void DrawableWrapper::unscheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1)
	{
		callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::graphics::drawable

