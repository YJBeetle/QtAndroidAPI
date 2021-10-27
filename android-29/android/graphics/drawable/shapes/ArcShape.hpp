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
	class ArcShape : public __jni_impl::android::graphics::drawable::shapes::RectShape
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jfloat arg0, jfloat arg1);
		
		// Methods
		QAndroidJniObject clone();
		void draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1);
		jboolean equals(jobject arg0);
		void getOutline(__jni_impl::android::graphics::Outline arg0);
		jfloat getStartAngle();
		jfloat getSweepAngle();
		jint hashCode();
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
	void ArcShape::__constructor(jfloat arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.shapes.ArcShape",
			"(FF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject ArcShape::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/ArcShape;"
		);
	}
	void ArcShape::draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean ArcShape::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void ArcShape::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	jfloat ArcShape::getStartAngle()
	{
		return __thiz.callMethod<jfloat>(
			"getStartAngle",
			"()F"
		);
	}
	jfloat ArcShape::getSweepAngle()
	{
		return __thiz.callMethod<jfloat>(
			"getSweepAngle",
			"()F"
		);
	}
	jint ArcShape::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
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

