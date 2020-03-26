#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_SHAPES_OVALSHAPE
#define ANDROID_GRAPHICS_DRAWABLE_SHAPES_OVALSHAPE

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
	class OvalShape : public __jni_impl::android::graphics::drawable::shapes::RectShape
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject clone();
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
	void OvalShape::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.shapes.OvalShape",
			"()V");
	}
	
	// Methods
	QAndroidJniObject OvalShape::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/OvalShape;"
		);
	}
	void OvalShape::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	void OvalShape::draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1)
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
	class OvalShape : public __jni_impl::android::graphics::drawable::shapes::OvalShape
	{
	public:
		OvalShape(QAndroidJniObject obj) { __thiz = obj; }
		OvalShape()
		{
			__constructor();
		}
	};
} // namespace android::graphics::drawable::shapes

#endif // ANDROID_GRAPHICS_DRAWABLE_SHAPES_OVALSHAPE

