#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_SHAPES_PATHSHAPE
#define ANDROID_GRAPHICS_DRAWABLE_SHAPES_PATHSHAPE

#include "../../../../__JniBaseClass.hpp"
#include "Shape.hpp"

namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::graphics
{
	class Path;
}
namespace __jni_impl::android::graphics::drawable::shapes
{
	class Shape;
}

namespace __jni_impl::android::graphics::drawable::shapes
{
	class PathShape : public __jni_impl::android::graphics::drawable::shapes::Shape
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::Path arg0, jfloat arg1, jfloat arg2);
		
		// Methods
		QAndroidJniObject clone();
		void draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1);
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace __jni_impl::android::graphics::drawable::shapes

#include "../../Canvas.hpp"
#include "../../Paint.hpp"
#include "../../Path.hpp"
#include "Shape.hpp"

namespace __jni_impl::android::graphics::drawable::shapes
{
	// Fields
	
	// Constructors
	void PathShape::__constructor(__jni_impl::android::graphics::Path arg0, jfloat arg1, jfloat arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.shapes.PathShape",
			"(Landroid/graphics/Path;FF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject PathShape::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/PathShape;"
		);
	}
	void PathShape::draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean PathShape::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PathShape::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace __jni_impl::android::graphics::drawable::shapes

namespace android::graphics::drawable::shapes
{
	class PathShape : public __jni_impl::android::graphics::drawable::shapes::PathShape
	{
	public:
		PathShape(QAndroidJniObject obj) { __thiz = obj; }
		PathShape(__jni_impl::android::graphics::Path arg0, jfloat arg1, jfloat arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::graphics::drawable::shapes

#endif // ANDROID_GRAPHICS_DRAWABLE_SHAPES_PATHSHAPE

