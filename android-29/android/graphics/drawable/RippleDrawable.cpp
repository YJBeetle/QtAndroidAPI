#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Canvas.hpp"
#include "../Outline.hpp"
#include "../Rect.hpp"
#include "./Drawable.hpp"
#include "./Drawable_ConstantState.hpp"
#include "./RippleDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	jint RippleDrawable::RADIUS_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.RippleDrawable",
			"RADIUS_AUTO"
		);
	}
	
	RippleDrawable::RippleDrawable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RippleDrawable::RippleDrawable(android::content::res::ColorStateList &arg0, android::graphics::drawable::Drawable &arg1, android::graphics::drawable::Drawable &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.RippleDrawable",
			"(Landroid/content/res/ColorStateList;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	void RippleDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean RippleDrawable::canApplyTheme()
	{
		return __thiz.callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void RippleDrawable::draw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RippleDrawable::getConstantState()
	{
		return __thiz.callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	QAndroidJniObject RippleDrawable::getDirtyBounds()
	{
		return __thiz.callObjectMethod(
			"getDirtyBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	void RippleDrawable::getHotspotBounds(android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getHotspotBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	jint RippleDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void RippleDrawable::getOutline(android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	jint RippleDrawable::getRadius()
	{
		return __thiz.callMethod<jint>(
			"getRadius",
			"()I"
		);
	}
	void RippleDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
	{
		__thiz.callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void RippleDrawable::invalidateSelf()
	{
		__thiz.callMethod<void>(
			"invalidateSelf",
			"()V"
		);
	}
	jboolean RippleDrawable::isProjected()
	{
		return __thiz.callMethod<jboolean>(
			"isProjected",
			"()Z"
		);
	}
	jboolean RippleDrawable::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void RippleDrawable::jumpToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	QAndroidJniObject RippleDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void RippleDrawable::setColor(android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean RippleDrawable::setDrawableByLayerId(jint arg0, android::graphics::drawable::Drawable arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setDrawableByLayerId",
			"(ILandroid/graphics/drawable/Drawable;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void RippleDrawable::setHotspot(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void RippleDrawable::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setHotspotBounds",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void RippleDrawable::setPaddingMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPaddingMode",
			"(I)V",
			arg0
		);
	}
	void RippleDrawable::setRadius(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRadius",
			"(I)V",
			arg0
		);
	}
	jboolean RippleDrawable::setVisible(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::drawable

