#include "../../graphics/Matrix.hpp"
#include "./Transformation.hpp"

namespace android::view::animation
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
	
	Transformation::Transformation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Transformation::Transformation()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.Transformation",
			"()V"
		);
	}
	
	// Methods
	void Transformation::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	void Transformation::compose(android::view::animation::Transformation arg0)
	{
		__thiz.callMethod<void>(
			"compose",
			"(Landroid/view/animation/Transformation;)V",
			arg0.__jniObject().object()
		);
	}
	jfloat Transformation::getAlpha()
	{
		return __thiz.callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	QAndroidJniObject Transformation::getMatrix()
	{
		return __thiz.callObjectMethod(
			"getMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	jint Transformation::getTransformationType()
	{
		return __thiz.callMethod<jint>(
			"getTransformationType",
			"()I"
		);
	}
	void Transformation::set(android::view::animation::Transformation arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/view/animation/Transformation;)V",
			arg0.__jniObject().object()
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
	void Transformation::setTransformationType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTransformationType",
			"(I)V",
			arg0
		);
	}
	jstring Transformation::toShortString()
	{
		return __thiz.callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Transformation::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::view::animation

