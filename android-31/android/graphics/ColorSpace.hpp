#pragma once

#include "../../JFloatArray.hpp"
#include "./ColorSpace_Adaptation.def.hpp"
#include "./ColorSpace_Connector.def.hpp"
#include "./ColorSpace_Model.def.hpp"
#include "./ColorSpace_Named.def.hpp"
#include "./ColorSpace_RenderIntent.def.hpp"
#include "./ColorSpace_Rgb_TransferParameters.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ColorSpace.def.hpp"

namespace android::graphics
{
	// Fields
	inline JFloatArray ColorSpace::ILLUMINANT_A()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_A",
			"[F"
		);
	}
	inline JFloatArray ColorSpace::ILLUMINANT_B()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_B",
			"[F"
		);
	}
	inline JFloatArray ColorSpace::ILLUMINANT_C()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_C",
			"[F"
		);
	}
	inline JFloatArray ColorSpace::ILLUMINANT_D50()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D50",
			"[F"
		);
	}
	inline JFloatArray ColorSpace::ILLUMINANT_D55()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D55",
			"[F"
		);
	}
	inline JFloatArray ColorSpace::ILLUMINANT_D60()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D60",
			"[F"
		);
	}
	inline JFloatArray ColorSpace::ILLUMINANT_D65()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D65",
			"[F"
		);
	}
	inline JFloatArray ColorSpace::ILLUMINANT_D75()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D75",
			"[F"
		);
	}
	inline JFloatArray ColorSpace::ILLUMINANT_E()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_E",
			"[F"
		);
	}
	inline jint ColorSpace::MAX_ID()
	{
		return getStaticField<jint>(
			"android.graphics.ColorSpace",
			"MAX_ID"
		);
	}
	inline jint ColorSpace::MIN_ID()
	{
		return getStaticField<jint>(
			"android.graphics.ColorSpace",
			"MIN_ID"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::ColorSpace ColorSpace::adapt(android::graphics::ColorSpace arg0, JFloatArray arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"adapt",
			"(Landroid/graphics/ColorSpace;[F)Landroid/graphics/ColorSpace;",
			arg0.object(),
			arg1.object<jfloatArray>()
		);
	}
	inline android::graphics::ColorSpace ColorSpace::adapt(android::graphics::ColorSpace arg0, JFloatArray arg1, android::graphics::ColorSpace_Adaptation arg2)
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
	inline JFloatArray ColorSpace::cctToXyz(jint arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"cctToXyz",
			"(I)[F",
			arg0
		);
	}
	inline JFloatArray ColorSpace::chromaticAdaptation(android::graphics::ColorSpace_Adaptation arg0, JFloatArray arg1, JFloatArray arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"chromaticAdaptation",
			"(Landroid/graphics/ColorSpace$Adaptation;[F[F)[F",
			arg0.object(),
			arg1.object<jfloatArray>(),
			arg2.object<jfloatArray>()
		);
	}
	inline android::graphics::ColorSpace_Connector ColorSpace::connect(android::graphics::ColorSpace arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"connect",
			"(Landroid/graphics/ColorSpace;)Landroid/graphics/ColorSpace$Connector;",
			arg0.object()
		);
	}
	inline android::graphics::ColorSpace_Connector ColorSpace::connect(android::graphics::ColorSpace arg0, android::graphics::ColorSpace arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"connect",
			"(Landroid/graphics/ColorSpace;Landroid/graphics/ColorSpace;)Landroid/graphics/ColorSpace$Connector;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::graphics::ColorSpace_Connector ColorSpace::connect(android::graphics::ColorSpace arg0, android::graphics::ColorSpace_RenderIntent arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"connect",
			"(Landroid/graphics/ColorSpace;Landroid/graphics/ColorSpace$RenderIntent;)Landroid/graphics/ColorSpace$Connector;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::graphics::ColorSpace_Connector ColorSpace::connect(android::graphics::ColorSpace arg0, android::graphics::ColorSpace arg1, android::graphics::ColorSpace_RenderIntent arg2)
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
	inline android::graphics::ColorSpace ColorSpace::get(android::graphics::ColorSpace_Named arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"get",
			"(Landroid/graphics/ColorSpace$Named;)Landroid/graphics/ColorSpace;",
			arg0.object()
		);
	}
	inline android::graphics::ColorSpace ColorSpace::match(JFloatArray arg0, android::graphics::ColorSpace_Rgb_TransferParameters arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"match",
			"([FLandroid/graphics/ColorSpace$Rgb$TransferParameters;)Landroid/graphics/ColorSpace;",
			arg0.object<jfloatArray>(),
			arg1.object()
		);
	}
	inline jboolean ColorSpace::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JFloatArray ColorSpace::fromXyz(JFloatArray arg0) const
	{
		return callObjectMethod(
			"fromXyz",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	inline JFloatArray ColorSpace::fromXyz(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		return callObjectMethod(
			"fromXyz",
			"(FFF)[F",
			arg0,
			arg1,
			arg2
		);
	}
	inline jint ColorSpace::getComponentCount() const
	{
		return callMethod<jint>(
			"getComponentCount",
			"()I"
		);
	}
	inline jint ColorSpace::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline jfloat ColorSpace::getMaxValue(jint arg0) const
	{
		return callMethod<jfloat>(
			"getMaxValue",
			"(I)F",
			arg0
		);
	}
	inline jfloat ColorSpace::getMinValue(jint arg0) const
	{
		return callMethod<jfloat>(
			"getMinValue",
			"(I)F",
			arg0
		);
	}
	inline android::graphics::ColorSpace_Model ColorSpace::getModel() const
	{
		return callObjectMethod(
			"getModel",
			"()Landroid/graphics/ColorSpace$Model;"
		);
	}
	inline JString ColorSpace::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint ColorSpace::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ColorSpace::isSrgb() const
	{
		return callMethod<jboolean>(
			"isSrgb",
			"()Z"
		);
	}
	inline jboolean ColorSpace::isWideGamut() const
	{
		return callMethod<jboolean>(
			"isWideGamut",
			"()Z"
		);
	}
	inline JString ColorSpace::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JFloatArray ColorSpace::toXyz(JFloatArray arg0) const
	{
		return callObjectMethod(
			"toXyz",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	inline JFloatArray ColorSpace::toXyz(jfloat arg0, jfloat arg1, jfloat arg2) const
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

// Base class headers

