#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Drawable.hpp"

namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
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
	class BlendMode;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class ColorFilter;
}
namespace __jni_impl::android::graphics
{
	class Outline;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable_ConstantState;
}
namespace __jni_impl::android::graphics::drawable
{
	class ShapeDrawable_ShaderFactory;
}
namespace __jni_impl::android::graphics::drawable::shapes
{
	class Shape;
}

namespace __jni_impl::android::graphics::drawable
{
	class ShapeDrawable : public __jni_impl::android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::graphics::drawable::shapes::Shape arg0);
		
		// Methods
		void applyTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		void draw(__jni_impl::android::graphics::Canvas arg0);
		jint getAlpha();
		jint getChangingConfigurations();
		QAndroidJniObject getConstantState();
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getOpacity();
		void getOutline(__jni_impl::android::graphics::Outline arg0);
		jboolean getPadding(__jni_impl::android::graphics::Rect arg0);
		QAndroidJniObject getPaint();
		QAndroidJniObject getShaderFactory();
		QAndroidJniObject getShape();
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		jboolean isStateful();
		QAndroidJniObject mutate();
		void setAlpha(jint arg0);
		void setColorFilter(__jni_impl::android::graphics::ColorFilter arg0);
		void setDither(jboolean arg0);
		void setIntrinsicHeight(jint arg0);
		void setIntrinsicWidth(jint arg0);
		void setPadding(__jni_impl::android::graphics::Rect arg0);
		void setPadding(jint arg0, jint arg1, jint arg2, jint arg3);
		void setShaderFactory(__jni_impl::android::graphics::drawable::ShapeDrawable_ShaderFactory arg0);
		void setShape(__jni_impl::android::graphics::drawable::shapes::Shape arg0);
		void setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		void setTintList(__jni_impl::android::content::res::ColorStateList arg0);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../BlendMode.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Outline.hpp"
#include "../Paint.hpp"
#include "../Rect.hpp"
#include "./Drawable.hpp"
#include "./Drawable_ConstantState.hpp"
#include "./ShapeDrawable_ShaderFactory.hpp"
#include "./shapes/Shape.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void ShapeDrawable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.ShapeDrawable",
			"()V"
		);
	}
	void ShapeDrawable::__constructor(__jni_impl::android::graphics::drawable::shapes::Shape arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.ShapeDrawable",
			"(Landroid/graphics/drawable/shapes/Shape;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void ShapeDrawable::applyTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	void ShapeDrawable::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jint ShapeDrawable::getAlpha()
	{
		return __thiz.callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint ShapeDrawable::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	QAndroidJniObject ShapeDrawable::getConstantState()
	{
		return __thiz.callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	jint ShapeDrawable::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint ShapeDrawable::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint ShapeDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void ShapeDrawable::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ShapeDrawable::getPadding(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ShapeDrawable::getPaint()
	{
		return __thiz.callObjectMethod(
			"getPaint",
			"()Landroid/graphics/Paint;"
		);
	}
	QAndroidJniObject ShapeDrawable::getShaderFactory()
	{
		return __thiz.callObjectMethod(
			"getShaderFactory",
			"()Landroid/graphics/drawable/ShapeDrawable$ShaderFactory;"
		);
	}
	QAndroidJniObject ShapeDrawable::getShape()
	{
		return __thiz.callObjectMethod(
			"getShape",
			"()Landroid/graphics/drawable/shapes/Shape;"
		);
	}
	void ShapeDrawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
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
	jboolean ShapeDrawable::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	QAndroidJniObject ShapeDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void ShapeDrawable::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void ShapeDrawable::setColorFilter(__jni_impl::android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object()
		);
	}
	void ShapeDrawable::setDither(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void ShapeDrawable::setIntrinsicHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIntrinsicHeight",
			"(I)V",
			arg0
		);
	}
	void ShapeDrawable::setIntrinsicWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIntrinsicWidth",
			"(I)V",
			arg0
		);
	}
	void ShapeDrawable::setPadding(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setPadding",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void ShapeDrawable::setPadding(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setPadding",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void ShapeDrawable::setShaderFactory(__jni_impl::android::graphics::drawable::ShapeDrawable_ShaderFactory arg0)
	{
		__thiz.callMethod<void>(
			"setShaderFactory",
			"(Landroid/graphics/drawable/ShapeDrawable$ShaderFactory;)V",
			arg0.__jniObject().object()
		);
	}
	void ShapeDrawable::setShape(__jni_impl::android::graphics::drawable::shapes::Shape arg0)
	{
		__thiz.callMethod<void>(
			"setShape",
			"(Landroid/graphics/drawable/shapes/Shape;)V",
			arg0.__jniObject().object()
		);
	}
	void ShapeDrawable::setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void ShapeDrawable::setTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class ShapeDrawable : public __jni_impl::android::graphics::drawable::ShapeDrawable
	{
	public:
		ShapeDrawable(QAndroidJniObject obj) { __thiz = obj; }
		ShapeDrawable()
		{
			__constructor();
		}
		ShapeDrawable(__jni_impl::android::graphics::drawable::shapes::Shape arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics::drawable

