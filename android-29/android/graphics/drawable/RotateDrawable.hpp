#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Drawable.hpp"
#include "DrawableWrapper.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}

namespace __jni_impl::android::graphics::drawable
{
	class RotateDrawable : public __jni_impl::android::graphics::drawable::DrawableWrapper
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void applyTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		void draw(__jni_impl::android::graphics::Canvas arg0);
		jfloat getFromDegrees();
		jfloat getPivotX();
		jfloat getPivotY();
		jfloat getToDegrees();
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		jboolean isPivotXRelative();
		jboolean isPivotYRelative();
		void setFromDegrees(jfloat arg0);
		void setPivotX(jfloat arg0);
		void setPivotXRelative(jboolean arg0);
		void setPivotY(jfloat arg0);
		void setPivotYRelative(jboolean arg0);
		void setToDegrees(jfloat arg0);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Canvas.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void RotateDrawable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.RotateDrawable",
			"()V"
		);
	}
	
	// Methods
	void RotateDrawable::applyTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	void RotateDrawable::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jfloat RotateDrawable::getFromDegrees()
	{
		return __thiz.callMethod<jfloat>(
			"getFromDegrees",
			"()F"
		);
	}
	jfloat RotateDrawable::getPivotX()
	{
		return __thiz.callMethod<jfloat>(
			"getPivotX",
			"()F"
		);
	}
	jfloat RotateDrawable::getPivotY()
	{
		return __thiz.callMethod<jfloat>(
			"getPivotY",
			"()F"
		);
	}
	jfloat RotateDrawable::getToDegrees()
	{
		return __thiz.callMethod<jfloat>(
			"getToDegrees",
			"()F"
		);
	}
	void RotateDrawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
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
	jboolean RotateDrawable::isPivotXRelative()
	{
		return __thiz.callMethod<jboolean>(
			"isPivotXRelative",
			"()Z"
		);
	}
	jboolean RotateDrawable::isPivotYRelative()
	{
		return __thiz.callMethod<jboolean>(
			"isPivotYRelative",
			"()Z"
		);
	}
	void RotateDrawable::setFromDegrees(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setFromDegrees",
			"(F)V",
			arg0
		);
	}
	void RotateDrawable::setPivotX(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setPivotX",
			"(F)V",
			arg0
		);
	}
	void RotateDrawable::setPivotXRelative(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPivotXRelative",
			"(Z)V",
			arg0
		);
	}
	void RotateDrawable::setPivotY(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setPivotY",
			"(F)V",
			arg0
		);
	}
	void RotateDrawable::setPivotYRelative(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPivotYRelative",
			"(Z)V",
			arg0
		);
	}
	void RotateDrawable::setToDegrees(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setToDegrees",
			"(F)V",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class RotateDrawable : public __jni_impl::android::graphics::drawable::RotateDrawable
	{
	public:
		RotateDrawable(QAndroidJniObject obj) { __thiz = obj; }
		RotateDrawable()
		{
			__constructor();
		}
	};
} // namespace android::graphics::drawable

