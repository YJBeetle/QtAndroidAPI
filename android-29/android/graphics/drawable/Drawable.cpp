#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../BitmapFactory_Options.hpp"
#include "../BlendMode.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Insets.hpp"
#include "../Outline.hpp"
#include "../PorterDuff_Mode.hpp"
#include "../Rect.hpp"
#include "../Region.hpp"
#include "./Drawable_ConstantState.hpp"
#include "../../util/TypedValue.hpp"
#include "../../../java/io/InputStream.hpp"
#include "./Drawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QAndroidJniObject forward
	Drawable::Drawable(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Drawable::Drawable()
		: JObject(
			"android.graphics.drawable.Drawable",
			"()V"
		) {}
	
	// Methods
	android::graphics::drawable::Drawable Drawable::createFromPath(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromPath",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	android::graphics::drawable::Drawable Drawable::createFromResourceStream(android::content::res::Resources arg0, android::util::TypedValue arg1, java::io::InputStream arg2, jstring arg3)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromResourceStream",
			"(Landroid/content/res/Resources;Landroid/util/TypedValue;Ljava/io/InputStream;Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	android::graphics::drawable::Drawable Drawable::createFromResourceStream(android::content::res::Resources arg0, android::util::TypedValue arg1, java::io::InputStream arg2, jstring arg3, android::graphics::BitmapFactory_Options arg4)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromResourceStream",
			"(Landroid/content/res/Resources;Landroid/util/TypedValue;Ljava/io/InputStream;Ljava/lang/String;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3,
			arg4.object()
		);
	}
	android::graphics::drawable::Drawable Drawable::createFromStream(java::io::InputStream arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromStream",
			"(Ljava/io/InputStream;Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1
		);
	}
	android::graphics::drawable::Drawable Drawable::createFromXml(android::content::res::Resources arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromXml",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1.object()
		);
	}
	android::graphics::drawable::Drawable Drawable::createFromXml(android::content::res::Resources arg0, JObject arg1, android::content::res::Resources_Theme arg2)
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
	android::graphics::drawable::Drawable Drawable::createFromXmlInner(android::content::res::Resources arg0, JObject arg1, JObject arg2)
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
	android::graphics::drawable::Drawable Drawable::createFromXmlInner(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3)
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
	jint Drawable::resolveOpacity(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.graphics.drawable.Drawable",
			"resolveOpacity",
			"(II)I",
			arg0,
			arg1
		);
	}
	void Drawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jboolean Drawable::canApplyTheme()
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void Drawable::clearColorFilter()
	{
		callMethod<void>(
			"clearColorFilter",
			"()V"
		);
	}
	android::graphics::Rect Drawable::copyBounds()
	{
		return callObjectMethod(
			"copyBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	void Drawable::copyBounds(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"copyBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void Drawable::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint Drawable::getAlpha()
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	android::graphics::Rect Drawable::getBounds()
	{
		return callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	JObject Drawable::getCallback()
	{
		return callObjectMethod(
			"getCallback",
			"()Landroid/graphics/drawable/Drawable$Callback;"
		);
	}
	jint Drawable::getChangingConfigurations()
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::graphics::ColorFilter Drawable::getColorFilter()
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	android::graphics::drawable::Drawable_ConstantState Drawable::getConstantState()
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	android::graphics::drawable::Drawable Drawable::getCurrent()
	{
		return callObjectMethod(
			"getCurrent",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::Rect Drawable::getDirtyBounds()
	{
		return callObjectMethod(
			"getDirtyBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	void Drawable::getHotspotBounds(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"getHotspotBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jint Drawable::getIntrinsicHeight()
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint Drawable::getIntrinsicWidth()
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint Drawable::getLayoutDirection()
	{
		return callMethod<jint>(
			"getLayoutDirection",
			"()I"
		);
	}
	jint Drawable::getLevel()
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint Drawable::getMinimumHeight()
	{
		return callMethod<jint>(
			"getMinimumHeight",
			"()I"
		);
	}
	jint Drawable::getMinimumWidth()
	{
		return callMethod<jint>(
			"getMinimumWidth",
			"()I"
		);
	}
	jint Drawable::getOpacity()
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	android::graphics::Insets Drawable::getOpticalInsets()
	{
		return callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	void Drawable::getOutline(android::graphics::Outline arg0)
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jboolean Drawable::getPadding(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jintArray Drawable::getState()
	{
		return callObjectMethod(
			"getState",
			"()[I"
		).object<jintArray>();
	}
	android::graphics::Region Drawable::getTransparentRegion()
	{
		return callObjectMethod(
			"getTransparentRegion",
			"()Landroid/graphics/Region;"
		);
	}
	void Drawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2)
	{
		callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Drawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3)
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
	void Drawable::invalidateSelf()
	{
		callMethod<void>(
			"invalidateSelf",
			"()V"
		);
	}
	jboolean Drawable::isAutoMirrored()
	{
		return callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	jboolean Drawable::isFilterBitmap()
	{
		return callMethod<jboolean>(
			"isFilterBitmap",
			"()Z"
		);
	}
	jboolean Drawable::isProjected()
	{
		return callMethod<jboolean>(
			"isProjected",
			"()Z"
		);
	}
	jboolean Drawable::isStateful()
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	jboolean Drawable::isVisible()
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	void Drawable::jumpToCurrentState()
	{
		callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	android::graphics::drawable::Drawable Drawable::mutate()
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jboolean Drawable::onLayoutDirectionChanged(jint arg0)
	{
		return callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	void Drawable::scheduleSelf(JObject arg0, jlong arg1)
	{
		callMethod<void>(
			"scheduleSelf",
			"(Ljava/lang/Runnable;J)V",
			arg0.object(),
			arg1
		);
	}
	void Drawable::setAlpha(jint arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void Drawable::setAutoMirrored(jboolean arg0)
	{
		callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	void Drawable::setBounds(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"setBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void Drawable::setBounds(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void Drawable::setCallback(JObject arg0)
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/graphics/drawable/Drawable$Callback;)V",
			arg0.object()
		);
	}
	void Drawable::setChangingConfigurations(jint arg0)
	{
		callMethod<void>(
			"setChangingConfigurations",
			"(I)V",
			arg0
		);
	}
	void Drawable::setColorFilter(android::graphics::ColorFilter arg0)
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void Drawable::setColorFilter(jint arg0, android::graphics::PorterDuff_Mode arg1)
	{
		callMethod<void>(
			"setColorFilter",
			"(ILandroid/graphics/PorterDuff$Mode;)V",
			arg0,
			arg1.object()
		);
	}
	void Drawable::setDither(jboolean arg0)
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void Drawable::setFilterBitmap(jboolean arg0)
	{
		callMethod<void>(
			"setFilterBitmap",
			"(Z)V",
			arg0
		);
	}
	void Drawable::setHotspot(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Drawable::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3)
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
	jboolean Drawable::setLayoutDirection(jint arg0)
	{
		return callMethod<jboolean>(
			"setLayoutDirection",
			"(I)Z",
			arg0
		);
	}
	jboolean Drawable::setLevel(jint arg0)
	{
		return callMethod<jboolean>(
			"setLevel",
			"(I)Z",
			arg0
		);
	}
	jboolean Drawable::setState(jintArray arg0)
	{
		return callMethod<jboolean>(
			"setState",
			"([I)Z",
			arg0
		);
	}
	void Drawable::setTint(jint arg0)
	{
		callMethod<void>(
			"setTint",
			"(I)V",
			arg0
		);
	}
	void Drawable::setTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void Drawable::setTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void Drawable::setTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		callMethod<void>(
			"setTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	jboolean Drawable::setVisible(jboolean arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	void Drawable::unscheduleSelf(JObject arg0)
	{
		callMethod<void>(
			"unscheduleSelf",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable

