#include "../../graphics/Matrix.hpp"
#include "./Transformation.hpp"

namespace android::view::animation
{
	// Fields
	jint Transformation::TYPE_ALPHA()
	{
		return getStaticField<jint>(
			"android.view.animation.Transformation",
			"TYPE_ALPHA"
		);
	}
	jint Transformation::TYPE_BOTH()
	{
		return getStaticField<jint>(
			"android.view.animation.Transformation",
			"TYPE_BOTH"
		);
	}
	jint Transformation::TYPE_IDENTITY()
	{
		return getStaticField<jint>(
			"android.view.animation.Transformation",
			"TYPE_IDENTITY"
		);
	}
	jint Transformation::TYPE_MATRIX()
	{
		return getStaticField<jint>(
			"android.view.animation.Transformation",
			"TYPE_MATRIX"
		);
	}
	
	// QJniObject forward
	Transformation::Transformation(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Transformation::Transformation()
		: JObject(
			"android.view.animation.Transformation",
			"()V"
		) {}
	
	// Methods
	void Transformation::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void Transformation::compose(android::view::animation::Transformation arg0)
	{
		callMethod<void>(
			"compose",
			"(Landroid/view/animation/Transformation;)V",
			arg0.object()
		);
	}
	jfloat Transformation::getAlpha()
	{
		return callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	android::graphics::Matrix Transformation::getMatrix()
	{
		return callObjectMethod(
			"getMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	jint Transformation::getTransformationType()
	{
		return callMethod<jint>(
			"getTransformationType",
			"()I"
		);
	}
	void Transformation::set(android::view::animation::Transformation arg0)
	{
		callMethod<void>(
			"set",
			"(Landroid/view/animation/Transformation;)V",
			arg0.object()
		);
	}
	void Transformation::setAlpha(jfloat arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
	void Transformation::setTransformationType(jint arg0)
	{
		callMethod<void>(
			"setTransformationType",
			"(I)V",
			arg0
		);
	}
	jstring Transformation::toShortString()
	{
		return callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Transformation::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::view::animation

