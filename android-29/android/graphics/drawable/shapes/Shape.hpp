#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_SHAPES_SHAPE
#define ANDROID_GRAPHICS_DRAWABLE_SHAPES_SHAPE

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Outline;
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
	class Shape : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject clone();
		void resize(jfloat arg0, jfloat arg1);
		jboolean hasAlpha();
		jfloat getWidth();
		jfloat getHeight();
		void getOutline(__jni_impl::android::graphics::Outline arg0);
		void draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1);
	};
} // namespace __jni_impl::android::graphics::drawable::shapes

#include "../../Outline.hpp"
#include "../../Canvas.hpp"
#include "../../Paint.hpp"

namespace __jni_impl::android::graphics::drawable::shapes
{
	// Fields
	
	// Constructors
	void Shape::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.shapes.Shape",
			"()V");
	}
	
	// Methods
	jboolean Shape::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint Shape::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject Shape::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/Shape;");
	}
	void Shape::resize(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"resize",
			"(FF)V",
			arg0,
			arg1);
	}
	jboolean Shape::hasAlpha()
	{
		return __thiz.callMethod<jboolean>(
			"hasAlpha",
			"()Z");
	}
	jfloat Shape::getWidth()
	{
		return __thiz.callMethod<jfloat>(
			"getWidth",
			"()F");
	}
	jfloat Shape::getHeight()
	{
		return __thiz.callMethod<jfloat>(
			"getHeight",
			"()F");
	}
	void Shape::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object());
	}
	void Shape::draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::graphics::drawable::shapes

namespace android::graphics::drawable::shapes
{
	class Shape : public __jni_impl::android::graphics::drawable::shapes::Shape
	{
	public:
		Shape(QAndroidJniObject obj) { __thiz = obj; }
		Shape()
		{
			__constructor();
		}
	};
} // namespace android::graphics::drawable::shapes

#endif // ANDROID_GRAPHICS_DRAWABLE_SHAPES_SHAPE

