#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "Shape.hpp"

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
namespace __jni_impl::android::graphics
{
	class RectF;
}
namespace __jni_impl::android::graphics::drawable::shapes
{
	class Shape;
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
		QAndroidJniObject clone();
		void draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1);
		jboolean equals(jobject arg0);
		void getOutline(__jni_impl::android::graphics::Outline arg0);
		jint hashCode();
	};
} // namespace __jni_impl::android::graphics::drawable::shapes

#include "../../Canvas.hpp"
#include "../../Outline.hpp"
#include "../../Paint.hpp"
#include "../../RectF.hpp"
#include "Shape.hpp"

namespace __jni_impl::android::graphics::drawable::shapes
{
	// Fields
	
	// Constructors
	void RectShape::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.shapes.RectShape",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject RectShape::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/RectShape;"
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
	jboolean RectShape::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jint RectShape::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
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

