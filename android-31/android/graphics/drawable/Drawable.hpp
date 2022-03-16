#pragma once

#include "../../../JIntArray.hpp"
#include "../../content/res/ColorStateList.def.hpp"
#include "../../content/res/Resources.def.hpp"
#include "../../content/res/Resources_Theme.def.hpp"
#include "../BitmapFactory_Options.def.hpp"
#include "../BlendMode.def.hpp"
#include "../Canvas.def.hpp"
#include "../ColorFilter.def.hpp"
#include "../Insets.def.hpp"
#include "../Outline.def.hpp"
#include "../PorterDuff_Mode.def.hpp"
#include "../Rect.def.hpp"
#include "../Region.def.hpp"
#include "./Drawable_ConstantState.def.hpp"
#include "../../util/TypedValue.def.hpp"
#include "../../../java/io/InputStream.def.hpp"
#include "../../../JString.hpp"
#include "./Drawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	inline Drawable::Drawable()
		: JObject(
			"android.graphics.drawable.Drawable",
			"()V"
		) {}
	
	// Methods
	inline android::graphics::drawable::Drawable Drawable::createFromPath(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromPath",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0.object<jstring>()
		);
	}
	inline android::graphics::drawable::Drawable Drawable::createFromResourceStream(android::content::res::Resources arg0, android::util::TypedValue arg1, java::io::InputStream arg2, JString arg3)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromResourceStream",
			"(Landroid/content/res/Resources;Landroid/util/TypedValue;Ljava/io/InputStream;Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jstring>()
		);
	}
	inline android::graphics::drawable::Drawable Drawable::createFromResourceStream(android::content::res::Resources arg0, android::util::TypedValue arg1, java::io::InputStream arg2, JString arg3, android::graphics::BitmapFactory_Options arg4)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromResourceStream",
			"(Landroid/content/res/Resources;Landroid/util/TypedValue;Ljava/io/InputStream;Ljava/lang/String;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jstring>(),
			arg4.object()
		);
	}
	inline android::graphics::drawable::Drawable Drawable::createFromStream(java::io::InputStream arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromStream",
			"(Ljava/io/InputStream;Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::graphics::drawable::Drawable Drawable::createFromXml(android::content::res::Resources arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromXml",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::graphics::drawable::Drawable Drawable::createFromXml(android::content::res::Resources arg0, JObject arg1, android::content::res::Resources_Theme arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromXml",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::graphics::drawable::Drawable Drawable::createFromXmlInner(android::content::res::Resources arg0, JObject arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromXmlInner",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::graphics::drawable::Drawable Drawable::createFromXmlInner(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromXmlInner",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline jint Drawable::resolveOpacity(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.graphics.drawable.Drawable",
			"resolveOpacity",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline void Drawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	inline jboolean Drawable::canApplyTheme() const
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	inline void Drawable::clearColorFilter() const
	{
		callMethod<void>(
			"clearColorFilter",
			"()V"
		);
	}
	inline android::graphics::Rect Drawable::copyBounds() const
	{
		return callObjectMethod(
			"copyBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	inline void Drawable::copyBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"copyBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void Drawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jint Drawable::getAlpha() const
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	inline android::graphics::Rect Drawable::getBounds() const
	{
		return callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	inline JObject Drawable::getCallback() const
	{
		return callObjectMethod(
			"getCallback",
			"()Landroid/graphics/drawable/Drawable$Callback;"
		);
	}
	inline jint Drawable::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	inline android::graphics::ColorFilter Drawable::getColorFilter() const
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	inline android::graphics::drawable::Drawable_ConstantState Drawable::getConstantState() const
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	inline android::graphics::drawable::Drawable Drawable::getCurrent() const
	{
		return callObjectMethod(
			"getCurrent",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::Rect Drawable::getDirtyBounds() const
	{
		return callObjectMethod(
			"getDirtyBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	inline void Drawable::getHotspotBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getHotspotBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline jint Drawable::getIntrinsicHeight() const
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	inline jint Drawable::getIntrinsicWidth() const
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	inline jint Drawable::getLayoutDirection() const
	{
		return callMethod<jint>(
			"getLayoutDirection",
			"()I"
		);
	}
	inline jint Drawable::getLevel() const
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	inline jint Drawable::getMinimumHeight() const
	{
		return callMethod<jint>(
			"getMinimumHeight",
			"()I"
		);
	}
	inline jint Drawable::getMinimumWidth() const
	{
		return callMethod<jint>(
			"getMinimumWidth",
			"()I"
		);
	}
	inline jint Drawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	inline android::graphics::Insets Drawable::getOpticalInsets() const
	{
		return callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	inline void Drawable::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	inline jboolean Drawable::getPadding(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline JIntArray Drawable::getState() const
	{
		return callObjectMethod(
			"getState",
			"()[I"
		);
	}
	inline android::graphics::Region Drawable::getTransparentRegion() const
	{
		return callObjectMethod(
			"getTransparentRegion",
			"()Landroid/graphics/Region;"
		);
	}
	inline jboolean Drawable::hasFocusStateSpecified() const
	{
		return callMethod<jboolean>(
			"hasFocusStateSpecified",
			"()Z"
		);
	}
	inline void Drawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void Drawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
	inline void Drawable::invalidateSelf() const
	{
		callMethod<void>(
			"invalidateSelf",
			"()V"
		);
	}
	inline jboolean Drawable::isAutoMirrored() const
	{
		return callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	inline jboolean Drawable::isFilterBitmap() const
	{
		return callMethod<jboolean>(
			"isFilterBitmap",
			"()Z"
		);
	}
	inline jboolean Drawable::isProjected() const
	{
		return callMethod<jboolean>(
			"isProjected",
			"()Z"
		);
	}
	inline jboolean Drawable::isStateful() const
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	inline jboolean Drawable::isVisible() const
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	inline void Drawable::jumpToCurrentState() const
	{
		callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	inline android::graphics::drawable::Drawable Drawable::mutate() const
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jboolean Drawable::onLayoutDirectionChanged(jint arg0) const
	{
		return callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	inline void Drawable::scheduleSelf(JObject arg0, jlong arg1) const
	{
		callMethod<void>(
			"scheduleSelf",
			"(Ljava/lang/Runnable;J)V",
			arg0.object(),
			arg1
		);
	}
	inline void Drawable::setAlpha(jint arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	inline void Drawable::setAutoMirrored(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	inline void Drawable::setBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void Drawable::setBounds(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setBounds",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void Drawable::setCallback(JObject arg0) const
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/graphics/drawable/Drawable$Callback;)V",
			arg0.object()
		);
	}
	inline void Drawable::setChangingConfigurations(jint arg0) const
	{
		callMethod<void>(
			"setChangingConfigurations",
			"(I)V",
			arg0
		);
	}
	inline void Drawable::setColorFilter(android::graphics::ColorFilter arg0) const
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	inline void Drawable::setColorFilter(jint arg0, android::graphics::PorterDuff_Mode arg1) const
	{
		callMethod<void>(
			"setColorFilter",
			"(ILandroid/graphics/PorterDuff$Mode;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Drawable::setDither(jboolean arg0) const
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	inline void Drawable::setFilterBitmap(jboolean arg0) const
	{
		callMethod<void>(
			"setFilterBitmap",
			"(Z)V",
			arg0
		);
	}
	inline void Drawable::setHotspot(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Drawable::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline jboolean Drawable::setLayoutDirection(jint arg0) const
	{
		return callMethod<jboolean>(
			"setLayoutDirection",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Drawable::setLevel(jint arg0) const
	{
		return callMethod<jboolean>(
			"setLevel",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Drawable::setState(JIntArray arg0) const
	{
		return callMethod<jboolean>(
			"setState",
			"([I)Z",
			arg0.object<jintArray>()
		);
	}
	inline void Drawable::setTint(jint arg0) const
	{
		callMethod<void>(
			"setTint",
			"(I)V",
			arg0
		);
	}
	inline void Drawable::setTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	inline void Drawable::setTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void Drawable::setTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	inline jboolean Drawable::setVisible(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	inline void Drawable::unscheduleSelf(JObject arg0) const
	{
		callMethod<void>(
			"unscheduleSelf",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable

// Base class headers

