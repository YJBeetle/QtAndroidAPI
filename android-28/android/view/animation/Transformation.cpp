#include "../../graphics/Matrix.hpp"
#include "../../../JString.hpp"
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
	
	// QAndroidJniObject forward
	Transformation::Transformation(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Transformation::Transformation()
		: JObject(
			"android.view.animation.Transformation",
			"()V"
		) {}
	
	// Methods
	void Transformation::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void Transformation::compose(android::view::animation::Transformation arg0) const
	{
		callMethod<void>(
			"compose",
			"(Landroid/view/animation/Transformation;)V",
			arg0.object()
		);
	}
	jfloat Transformation::getAlpha() const
	{
		return callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	android::graphics::Matrix Transformation::getMatrix() const
	{
		return callObjectMethod(
			"getMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	jint Transformation::getTransformationType() const
	{
		return callMethod<jint>(
			"getTransformationType",
			"()I"
		);
	}
	void Transformation::set(android::view::animation::Transformation arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/view/animation/Transformation;)V",
			arg0.object()
		);
	}
	void Transformation::setAlpha(jfloat arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
	void Transformation::setTransformationType(jint arg0) const
	{
		callMethod<void>(
			"setTransformationType",
			"(I)V",
			arg0
		);
	}
	JString Transformation::toShortString() const
	{
		return callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		);
	}
	JString Transformation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view::animation

