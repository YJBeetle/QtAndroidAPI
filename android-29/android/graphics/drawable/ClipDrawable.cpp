#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Canvas.hpp"
#include "./Drawable.hpp"
#include "./ClipDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	jint ClipDrawable::HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.ClipDrawable",
			"HORIZONTAL"
		);
	}
	jint ClipDrawable::VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.ClipDrawable",
			"VERTICAL"
		);
	}
	
	ClipDrawable::ClipDrawable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ClipDrawable::ClipDrawable(android::graphics::drawable::Drawable arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.ClipDrawable",
			"(Landroid/graphics/drawable/Drawable;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	void ClipDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	void ClipDrawable::draw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jint ClipDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void ClipDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
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

