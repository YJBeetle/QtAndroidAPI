#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_SHAPES_ARCSHAPE
#define ANDROID_GRAPHICS_DRAWABLE_SHAPES_ARCSHAPE

#include "../../../../__JniBaseClass.hpp"
#include "Shape.hpp"
#include "RectShape.hpp"

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
	class ArcShape : public __jni_impl::android::graphics::drawable::shapes::RectShape
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jfloat arg0, jfloat arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject clone();
		jfloat getSweepAngle();
		jfloat getStartAngle();
		void getOutline(__jni_impl::android::graphics::Outline arg0);
		void draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1);
	};
} // namespace __jni_impl::android::graphics::drawable::shapes

#include "RectShape.hpp"
#include "Shape.hpp"
#include "../../Outline.hpp"
#include "../../Canvas.hpp"
#include "../../Paint.hpp"

namespace __jni_impl::android::graphics::drawable::shapes
{
	// Fields
	
	// Constructors
	void ArcShape::__constructor(jfloat arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.shapes.ArcShape",
			"(FF)V",
			arg0,
			arg1);
	}
	
	// Methods
	jboolean ArcShape::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint ArcShape::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject ArcShape::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/ArcShape;");
	}
	jfloat ArcShape::getSweepAngle()
	{
		return __thiz.callMethod<jfloat>(
			"getSweepAngle",
			"()F");
	}
	jfloat ArcShape::getStartAngle()
	{
		return __thiz.callMethod<jfloat>(
			"getStartAngle",
			"()F");
	}
	void ArcShape::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object());
	}
	void ArcShape::draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1)
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
	class ArcShape : public __jni_impl::android::graphics::drawable::shapes::ArcShape
	{
	public:
		ArcShape(QAndroidJniObject obj) { __thiz = obj; }
		ArcShape(jfloat arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics::drawable::shapes

#endif // ANDROID_GRAPHICS_DRAWABLE_SHAPES_ARCSHAPE

