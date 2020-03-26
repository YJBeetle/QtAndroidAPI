#pragma once

#ifndef ANDROID_VIEW_ANIMATION_TRANSFORMATION
#define ANDROID_VIEW_ANIMATION_TRANSFORMATION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Matrix;
}

namespace __jni_impl::android::view::animation
{
	class Transformation : public __JniBaseClass
	{
	public:
		// Fields
		static jint TYPE_ALPHA();
		static jint TYPE_BOTH();
		static jint TYPE_IDENTITY();
		static jint TYPE_MATRIX();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		void clear();
		void set(__jni_impl::android::view::animation::Transformation arg0);
		jstring toShortString();
		void compose(__jni_impl::android::view::animation::Transformation arg0);
		QAndroidJniObject getMatrix();
		jfloat getAlpha();
		jint getTransformationType();
		void setTransformationType(jint arg0);
		void setAlpha(jfloat arg0);
	};
} // namespace __jni_impl::android::view::animation

#include "../../graphics/Matrix.hpp"

namespace __jni_impl::android::view::animation
{
	// Fields
	jint Transformation::TYPE_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.Transformation",
			"TYPE_ALPHA"
		);
	}
	jint Transformation::TYPE_BOTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.Transformation",
			"TYPE_BOTH"
		);
	}
	jint Transformation::TYPE_IDENTITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.Transformation",
			"TYPE_IDENTITY"
		);
	}
	jint Transformation::TYPE_MATRIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.Transformation",
			"TYPE_MATRIX"
		);
	}
	
	// Constructors
	void Transformation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.Transformation",
			"()V");
	}
	
	// Methods
	jstring Transformation::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Transformation::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	void Transformation::set(__jni_impl::android::view::animation::Transformation arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/view/animation/Transformation;)V",
			arg0.__jniObject().object()
		);
	}
	jstring Transformation::toShortString()
	{
		return __thiz.callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Transformation::compose(__jni_impl::android::view::animation::Transformation arg0)
	{
		__thiz.callMethod<void>(
			"compose",
			"(Landroid/view/animation/Transformation;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Transformation::getMatrix()
	{
		return __thiz.callObjectMethod(
			"getMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	jfloat Transformation::getAlpha()
	{
		return __thiz.callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	jint Transformation::getTransformationType()
	{
		return __thiz.callMethod<jint>(
			"getTransformationType",
			"()I"
		);
	}
	void Transformation::setTransformationType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTransformationType",
			"(I)V",
			arg0
		);
	}
	void Transformation::setAlpha(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class Transformation : public __jni_impl::android::view::animation::Transformation
	{
	public:
		Transformation(QAndroidJniObject obj) { __thiz = obj; }
		Transformation()
		{
			__constructor();
		}
	};
} // namespace android::view::animation

#endif // ANDROID_VIEW_ANIMATION_TRANSFORMATION

