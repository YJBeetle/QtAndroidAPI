#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Drawable.hpp"
#include "DrawableContainer.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::graphics::drawable
{
	class DrawableContainer_DrawableContainerState;
}

namespace __jni_impl::android::graphics::drawable
{
	class LevelListDrawable : public __jni_impl::android::graphics::drawable::DrawableContainer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void addLevel(jint arg0, jint arg1, __jni_impl::android::graphics::drawable::Drawable arg2);
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		QAndroidJniObject mutate();
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "Drawable.hpp"
#include "DrawableContainer_DrawableContainerState.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void LevelListDrawable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.LevelListDrawable",
			"()V"
		);
	}
	
	// Methods
	void LevelListDrawable::addLevel(jint arg0, jint arg1, __jni_impl::android::graphics::drawable::Drawable arg2)
	{
		__thiz.callMethod<void>(
			"addLevel",
			"(IILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void LevelListDrawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
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
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class LevelListDrawable : public __jni_impl::android::graphics::drawable::LevelListDrawable
	{
	public:
		LevelListDrawable(QAndroidJniObject obj) { __thiz = obj; }
		LevelListDrawable()
		{
			__constructor();
		}
	};
} // namespace android::graphics::drawable

