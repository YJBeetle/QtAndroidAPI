#include "../../../JIntArray.hpp"
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
#include "../../../JString.hpp"
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
	android::graphics::drawable::Drawable Drawable::createFromPath(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromPath",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0.object<jstring>()
		);
	}
	android::graphics::drawable::Drawable Drawable::createFromResourceStream(android::content::res::Resources arg0, android::util::TypedValue arg1, java::io::InputStream arg2, JString arg3)
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
	android::graphics::drawable::Drawable Drawable::createFromResourceStream(android::content::res::Resources arg0, android::util::TypedValue arg1, java::io::InputStream arg2, JString arg3, android::graphics::BitmapFactory_Options arg4)
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
	android::graphics::drawable::Drawable Drawable::createFromStream(java::io::InputStream arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromStream",
			"(Ljava/io/InputStream;Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1.object<jstring>()
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
	void Drawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jboolean Drawable::canApplyTheme() const
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void Drawable::clearColorFilter() const
	{
		callMethod<void>(
			"clearColorFilter",
			"()V"
		);
	}
	android::graphics::Rect Drawable::copyBounds() const
	{
		return callObjectMethod(
			"copyBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	void Drawable::copyBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"copyBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void Drawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint Drawable::getAlpha() const
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	android::graphics::Rect Drawable::getBounds() const
	{
		return callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	JObject Drawable::getCallback() const
	{
		return callObjectMethod(
			"getCallback",
			"()Landroid/graphics/drawable/Drawable$Callback;"
		);
	}
	jint Drawable::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::graphics::ColorFilter Drawable::getColorFilter() const
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	android::graphics::drawable::Drawable_ConstantState Drawable::getConstantState() const
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	android::graphics::drawable::Drawable Drawable::getCurrent() const
	{
		return callObjectMethod(
			"getCurrent",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::Rect Drawable::getDirtyBounds() const
	{
		return callObjectMethod(
			"getDirtyBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	void Drawable::getHotspotBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getHotspotBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jint Drawable::getIntrinsicHeight() const
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint Drawable::getIntrinsicWidth() const
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint Drawable::getLayoutDirection() const
	{
		return callMethod<jint>(
			"getLayoutDirection",
			"()I"
		);
	}
	jint Drawable::getLevel() const
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint Drawable::getMinimumHeight() const
	{
		return callMethod<jint>(
			"getMinimumHeight",
			"()I"
		);
	}
	jint Drawable::getMinimumWidth() const
	{
		return callMethod<jint>(
			"getMinimumWidth",
			"()I"
		);
	}
	jint Drawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	android::graphics::Insets Drawable::getOpticalInsets() const
	{
		return callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	void Drawable::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jboolean Drawable::getPadding(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	JIntArray Drawable::getState() const
	{
		return callObjectMethod(
			"getState",
			"()[I"
		);
	}
	android::graphics::Region Drawable::getTransparentRegion() const
	{
		return callObjectMethod(
			"getTransparentRegion",
			"()Landroid/graphics/Region;"
		);
	}
	void Drawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Drawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
	void Drawable::invalidateSelf() const
	{
		callMethod<void>(
			"invalidateSelf",
			"()V"
		);
	}
	jboolean Drawable::isAutoMirrored() const
	{
		return callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	jboolean Drawable::isFilterBitmap() const
	{
		return callMethod<jboolean>(
			"isFilterBitmap",
			"()Z"
		);
	}
	jboolean Drawable::isProjected() const
	{
		return callMethod<jboolean>(
			"isProjected",
			"()Z"
		);
	}
	jboolean Drawable::isStateful() const
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	jboolean Drawable::isVisible() const
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	void Drawable::jumpToCurrentState() const
	{
		callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	android::graphics::drawable::Drawable Drawable::mutate() const
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jboolean Drawable::onLayoutDirectionChanged(jint arg0) const
	{
		return callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	void Drawable::scheduleSelf(JObject arg0, jlong arg1) const
	{
		callMethod<void>(
			"scheduleSelf",
			"(Ljava/lang/Runnable;J)V",
			arg0.object(),
			arg1
		);
	}
	void Drawable::setAlpha(jint arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void Drawable::setAutoMirrored(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	void Drawable::setBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void Drawable::setBounds(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void Drawable::setCallback(JObject arg0) const
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/graphics/drawable/Drawable$Callback;)V",
			arg0.object()
		);
	}
	void Drawable::setChangingConfigurations(jint arg0) const
	{
		callMethod<void>(
			"setChangingConfigurations",
			"(I)V",
			arg0
		);
	}
	void Drawable::setColorFilter(android::graphics::ColorFilter arg0) const
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void Drawable::setColorFilter(jint arg0, android::graphics::PorterDuff_Mode arg1) const
	{
		callMethod<void>(
			"setColorFilter",
			"(ILandroid/graphics/PorterDuff$Mode;)V",
			arg0,
			arg1.object()
		);
	}
	void Drawable::setDither(jboolean arg0) const
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void Drawable::setFilterBitmap(jboolean arg0) const
	{
		callMethod<void>(
			"setFilterBitmap",
			"(Z)V",
			arg0
		);
	}
	void Drawable::setHotspot(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Drawable::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	jboolean Drawable::setLayoutDirection(jint arg0) const
	{
		return callMethod<jboolean>(
			"setLayoutDirection",
			"(I)Z",
			arg0
		);
	}
	jboolean Drawable::setLevel(jint arg0) const
	{
		return callMethod<jboolean>(
			"setLevel",
			"(I)Z",
			arg0
		);
	}
	jboolean Drawable::setState(JIntArray arg0) const
	{
		return callMethod<jboolean>(
			"setState",
			"([I)Z",
			arg0.object<jintArray>()
		);
	}
	void Drawable::setTint(jint arg0) const
	{
		callMethod<void>(
			"setTint",
			"(I)V",
			arg0
		);
	}
	void Drawable::setTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void Drawable::setTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void Drawable::setTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	jboolean Drawable::setVisible(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	void Drawable::unscheduleSelf(JObject arg0) const
	{
		callMethod<void>(
			"unscheduleSelf",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable

