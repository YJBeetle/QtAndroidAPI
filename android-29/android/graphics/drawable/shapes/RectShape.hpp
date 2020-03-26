#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_SHAPES_RECTSHAPE
#define ANDROID_GRAPHICS_DRAWABLE_SHAPES_RECTSHAPE

#include "../../../../__JniBaseClass.hpp"
#include "Shape.hpp"

namespace __jni_impl::android::graphics::drawable::shapes
{
	class Shape;
}
namespace __jni_impl::android::graphics
{
	class Outline;
}
namespace __jni_impl::android::graphics
{
	class RectF;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}

namespace __jni_impl::android::graphics::drawable::shapes
{
	class RectShape : public __jni_impl::android::graphics::drawable::shapes::Shape
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject clone();
		void getOutline(__jni_impl::android::graphics::Outline arg0);
		void draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1);
	};
} // namespace __jni_impl::android::graphics::drawable::shapes

#include "Shape.hpp"
#include "../../Outline.hpp"
#include "../../RectF.hpp"
#include "../../Canvas.hpp"
#include "../../Paint.hpp"

namespace __jni_impl::android::graphics::drawable::shapes
{
	// Fields
	
	// Constructors
	void RectShape::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.shapes.RectShape",
			"()V");
	}
	
	// Methods
	jboolean RectShape::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint RectShape::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject RectShape::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/RectShape;"
		);
	}
	void RectShape::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	void RectShape::draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::graphics::drawable::shapes

namespace android::graphics::drawable::shapes
{
	class RectShape : public __jni_impl::android::graphics::drawable::shapes::RectShape
	{
	public:
		RectShape(QAndroidJniObject obj) { __thiz = obj; }
		RectShape()
		{
			__constructor();
		}
	};
} // namespace android::graphics::drawable::shapes

#endif // ANDROID_GRAPHICS_DRAWABLE_SHAPES_RECTSHAPE

