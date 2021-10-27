#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "./Drawable.hpp"
#include "./DrawableContainer_DrawableContainerState.hpp"
#include "./LevelListDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	LevelListDrawable::LevelListDrawable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LevelListDrawable::LevelListDrawable()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.LevelListDrawable",
			"()V"
		);
	}
	
	// Methods
	void LevelListDrawable::addLevel(jint arg0, jint arg1, android::graphics::drawable::Drawable arg2)
	{
		__thiz.callMethod<void>(
			"addLevel",
			"(IILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void LevelListDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
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
	QAndroidJniObject LevelListDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
} // namespace android::graphics::drawable

