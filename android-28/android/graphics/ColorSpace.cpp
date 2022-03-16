#include "../../JFloatArray.hpp"
#include "./ColorSpace_Adaptation.hpp"
#include "./ColorSpace_Connector.hpp"
#include "./ColorSpace_Model.hpp"
#include "./ColorSpace_Named.hpp"
#include "./ColorSpace_RenderIntent.hpp"
#include "./ColorSpace_Rgb_TransferParameters.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ColorSpace.hpp"

namespace android::graphics
{
	// Fields
	JFloatArray ColorSpace::ILLUMINANT_A()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_A",
			"[F"
		);
	}
	JFloatArray ColorSpace::ILLUMINANT_B()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_B",
			"[F"
		);
	}
	JFloatArray ColorSpace::ILLUMINANT_C()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_C",
			"[F"
		);
	}
	JFloatArray ColorSpace::ILLUMINANT_D50()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D50",
			"[F"
		);
	}
	JFloatArray ColorSpace::ILLUMINANT_D55()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D55",
			"[F"
		);
	}
	JFloatArray ColorSpace::ILLUMINANT_D60()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D60",
			"[F"
		);
	}
	JFloatArray ColorSpace::ILLUMINANT_D65()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D65",
			"[F"
		);
	}
	JFloatArray ColorSpace::ILLUMINANT_D75()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D75",
			"[F"
		);
	}
	JFloatArray ColorSpace::ILLUMINANT_E()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_E",
			"[F"
		);
	}
	jint ColorSpace::MAX_ID()
	{
		return getStaticField<jint>(
			"android.graphics.ColorSpace",
			"MAX_ID"
		);
	}
	jint ColorSpace::MIN_ID()
	{
		return getStaticField<jint>(
			"android.graphics.ColorSpace",
			"MIN_ID"
		);
	}
	
	// Constructors
	
	// Methods
	android::graphics::ColorSpace ColorSpace::adapt(android::graphics::ColorSpace arg0, JFloatArray arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"adapt",
			"(Landroid/graphics/ColorSpace;[F)Landroid/graphics/ColorSpace;",
			arg0.object(),
			arg1.object<jfloatArray>()
		);
	}
	android::graphics::ColorSpace ColorSpace::adapt(android::graphics::ColorSpace arg0, JFloatArray arg1, android::graphics::ColorSpace_Adaptation arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"adapt",
			"(Landroid/graphics/ColorSpace;[FLandroid/graphics/ColorSpace$Adaptation;)Landroid/graphics/ColorSpace;",
			arg0.object(),
			arg1.object<jfloatArray>(),
			arg2.object()
		);
	}
	android::graphics::ColorSpace_Connector ColorSpace::connect(android::graphics::ColorSpace arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"connect",
			"(Landroid/graphics/ColorSpace;)Landroid/graphics/ColorSpace$Connector;",
			arg0.object()
		);
	}
	android::graphics::ColorSpace_Connector ColorSpace::connect(android::graphics::ColorSpace arg0, android::graphics::ColorSpace arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"connect",
			"(Landroid/graphics/ColorSpace;Landroid/graphics/ColorSpace;)Landroid/graphics/ColorSpace$Connector;",
			arg0.object(),
			arg1.object()
		);
	}
	android::graphics::ColorSpace_Connector ColorSpace::connect(android::graphics::ColorSpace arg0, android::graphics::ColorSpace_RenderIntent arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"connect",
			"(Landroid/graphics/ColorSpace;Landroid/graphics/ColorSpace$RenderIntent;)Landroid/graphics/ColorSpace$Connector;",
			arg0.object(),
			arg1.object()
		);
	}
	android::graphics::ColorSpace_Connector ColorSpace::connect(android::graphics::ColorSpace arg0, android::graphics::ColorSpace arg1, android::graphics::ColorSpace_RenderIntent arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"connect",
			"(Landroid/graphics/ColorSpace;Landroid/graphics/ColorSpace;Landroid/graphics/ColorSpace$RenderIntent;)Landroid/graphics/ColorSpace$Connector;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::graphics::ColorSpace ColorSpace::get(android::graphics::ColorSpace_Named arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"get",
			"(Landroid/graphics/ColorSpace$Named;)Landroid/graphics/ColorSpace;",
			arg0.object()
		);
	}
	android::graphics::ColorSpace ColorSpace::match(JFloatArray arg0, android::graphics::ColorSpace_Rgb_TransferParameters arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"match",
			"([FLandroid/graphics/ColorSpace$Rgb$TransferParameters;)Landroid/graphics/ColorSpace;",
			arg0.object<jfloatArray>(),
			arg1.object()
		);
	}
	jboolean ColorSpace::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JFloatArray ColorSpace::fromXyz(JFloatArray arg0) const
	{
		return callObjectMethod(
			"fromXyz",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	JFloatArray ColorSpace::fromXyz(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		return callObjectMethod(
			"fromXyz",
			"(FFF)[F",
			arg0,
			arg1,
			arg2
		);
	}
	jint ColorSpace::getComponentCount() const
	{
		return callMethod<jint>(
			"getComponentCount",
			"()I"
		);
	}
	jint ColorSpace::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jfloat ColorSpace::getMaxValue(jint arg0) const
	{
		return callMethod<jfloat>(
			"getMaxValue",
			"(I)F",
			arg0
		);
	}
	jfloat ColorSpace::getMinValue(jint arg0) const
	{
		return callMethod<jfloat>(
			"getMinValue",
			"(I)F",
			arg0
		);
	}
	android::graphics::ColorSpace_Model ColorSpace::getModel() const
	{
		return callObjectMethod(
			"getModel",
			"()Landroid/graphics/ColorSpace$Model;"
		);
	}
	JString ColorSpace::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint ColorSpace::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ColorSpace::isSrgb() const
	{
		return callMethod<jboolean>(
			"isSrgb",
			"()Z"
		);
	}
	jboolean ColorSpace::isWideGamut() const
	{
		return callMethod<jboolean>(
			"isWideGamut",
			"()Z"
		);
	}
	JString ColorSpace::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JFloatArray ColorSpace::toXyz(JFloatArray arg0) const
	{
		return callObjectMethod(
			"toXyz",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	JFloatArray ColorSpace::toXyz(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		return callObjectMethod(
			"toXyz",
			"(FFF)[F",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::graphics

