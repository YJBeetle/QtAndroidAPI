#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./Shape.hpp"
#include "./RectShape.hpp"

namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Outline;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::graphics::drawable::shapes
{
	class RectShape;
}
namespace __jni_impl::android::graphics::drawable::shapes
{
	class Shape;
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
		void draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1);
		void getOutline(__jni_impl::android::graphics::Outline arg0);
	};
} // namespace __jni_impl::android::graphics::drawable::shapes

#include "../../Canvas.hpp"
#include "../../Outline.hpp"
#include "../../Paint.hpp"
#include "./RectShape.hpp"
#include "./Shape.hpp"

namespace __jni_impl::android::graphics::drawable::shapes
{
	// Fields
	
	// Constructors
	void OvalShape::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.shapes.OvalShape",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject OvalShape::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/OvalShape;"
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
	void OvalShape::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
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

