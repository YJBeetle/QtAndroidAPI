#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_SHAPES_ROUNDRECTSHAPE
#define ANDROID_GRAPHICS_DRAWABLE_SHAPES_ROUNDRECTSHAPE

#include "../../../../__JniBaseClass.hpp"
#include "Shape.hpp"
#include "RectShape.hpp"

namespace __jni_impl::android::graphics
{
	class RectF;
}
namespace __jni_impl::android::graphics::drawable::shapes
{
	class RectShape;
}
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
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}

namespace __jni_impl::android::graphics::drawable::shapes
{
	class RoundRectShape : public __jni_impl::android::graphics::drawable::shapes::RectShape
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jfloatArray arg0, __jni_impl::android::graphics::RectF arg1, jfloatArray arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject clone();
		void getOutline(__jni_impl::android::graphics::Outline arg0);
		void draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1);
	};
} // namespace __jni_impl::android::graphics::drawable::shapes

#include "../../RectF.hpp"
#include "RectShape.hpp"
#include "Shape.hpp"
#include "../../Outline.hpp"
#include "../../Canvas.hpp"
#include "../../Paint.hpp"

namespace __jni_impl::android::graphics::drawable::shapes
{
	// Fields
	
	// Constructors
	void RoundRectShape::__constructor(jfloatArray arg0, __jni_impl::android::graphics::RectF arg1, jfloatArray arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.shapes.RoundRectShape",
			"([FLandroid/graphics/RectF;[F)V",
			arg0,
			arg1.__jniObject().object(),
			arg2);
	}
	
	// Methods
	jboolean RoundRectShape::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint RoundRectShape::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject RoundRectShape::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/RoundRectShape;");
	}
	void RoundRectShape::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object());
	}
	void RoundRectShape::draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1)
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
	class RoundRectShape : public __jni_impl::android::graphics::drawable::shapes::RoundRectShape
	{
	public:
		RoundRectShape(QAndroidJniObject obj) { __thiz = obj; }
		RoundRectShape(jfloatArray arg0, __jni_impl::android::graphics::RectF arg1, jfloatArray arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::graphics::drawable::shapes

#endif // ANDROID_GRAPHICS_DRAWABLE_SHAPES_ROUNDRECTSHAPE

