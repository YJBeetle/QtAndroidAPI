#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Canvas.hpp"
#include "../Rect.hpp"
#include "./Drawable.hpp"
#include "./ScaleDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	ScaleDrawable::ScaleDrawable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ScaleDrawable::ScaleDrawable(android::graphics::drawable::Drawable &arg0, jint &arg1, jfloat &arg2, jfloat &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.ScaleDrawable",
			"(Landroid/graphics/drawable/Drawable;IFF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	void ScaleDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	void ScaleDrawable::draw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jint ScaleDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void ScaleDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
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

