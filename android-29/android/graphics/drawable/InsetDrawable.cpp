#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Insets.hpp"
#include "../Outline.hpp"
#include "../Rect.hpp"
#include "./Drawable.hpp"
#include "./InsetDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	InsetDrawable::InsetDrawable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InsetDrawable::InsetDrawable(android::graphics::drawable::Drawable &arg0, jfloat &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.InsetDrawable",
			"(Landroid/graphics/drawable/Drawable;F)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	InsetDrawable::InsetDrawable(android::graphics::drawable::Drawable &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.InsetDrawable",
			"(Landroid/graphics/drawable/Drawable;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	InsetDrawable::InsetDrawable(android::graphics::drawable::Drawable &arg0, jfloat &arg1, jfloat &arg2, jfloat &arg3, jfloat &arg4)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.InsetDrawable",
			"(Landroid/graphics/drawable/Drawable;FFFF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	InsetDrawable::InsetDrawable(android::graphics::drawable::Drawable &arg0, jint &arg1, jint &arg2, jint &arg3, jint &arg4)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.InsetDrawable",
			"(Landroid/graphics/drawable/Drawable;IIII)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	
	// Methods
	void InsetDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	jint InsetDrawable::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint InsetDrawable::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint InsetDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	QAndroidJniObject InsetDrawable::getOpticalInsets()
	{
		return __thiz.callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	void InsetDrawable::getOutline(android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean InsetDrawable::getPadding(android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	void InsetDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
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
} // namespace android::graphics::drawable

