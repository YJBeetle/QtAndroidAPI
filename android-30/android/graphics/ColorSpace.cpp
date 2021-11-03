#include "./ColorSpace_Adaptation.hpp"
#include "./ColorSpace_Connector.hpp"
#include "./ColorSpace_Model.hpp"
#include "./ColorSpace_Named.hpp"
#include "./ColorSpace_RenderIntent.hpp"
#include "./ColorSpace_Rgb_TransferParameters.hpp"
#include "./ColorSpace.hpp"

namespace android::graphics
{
	// Fields
	jfloatArray ColorSpace::ILLUMINANT_A()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_A",
			"[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::ILLUMINANT_B()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_B",
			"[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::ILLUMINANT_C()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_C",
			"[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::ILLUMINANT_D50()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D50",
			"[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::ILLUMINANT_D55()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D55",
			"[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::ILLUMINANT_D60()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D60",
			"[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::ILLUMINANT_D65()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D65",
			"[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::ILLUMINANT_D75()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D75",
			"[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::ILLUMINANT_E()
	{
		return getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_E",
			"[F"
		).object<jfloatArray>();
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
	
	// QAndroidJniObject forward
	ColorSpace::ColorSpace(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::ColorSpace ColorSpace::adapt(android::graphics::ColorSpace arg0, jfloatArray arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"adapt",
			"(Landroid/graphics/ColorSpace;[F)Landroid/graphics/ColorSpace;",
			arg0.object(),
			arg1
		);
	}
	android::graphics::ColorSpace ColorSpace::adapt(android::graphics::ColorSpace arg0, jfloatArray arg1, android::graphics::ColorSpace_Adaptation arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"adapt",
			"(Landroid/graphics/ColorSpace;[FLandroid/graphics/ColorSpace$Adaptation;)Landroid/graphics/ColorSpace;",
			arg0.object(),
			arg1,
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
	android::graphics::ColorSpace ColorSpace::match(jfloatArray arg0, android::graphics::ColorSpace_Rgb_TransferParameters arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"match",
			"([FLandroid/graphics/ColorSpace$Rgb$TransferParameters;)Landroid/graphics/ColorSpace;",
			arg0,
			arg1.object()
		);
	}
	jboolean ColorSpace::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloatArray ColorSpace::fromXyz(jfloatArray arg0)
	{
		return callObjectMethod(
			"fromXyz",
			"([F)[F",
			arg0
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::fromXyz(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return callObjectMethod(
			"fromXyz",
			"(FFF)[F",
			arg0,
			arg1,
			arg2
		).object<jfloatArray>();
	}
	jint ColorSpace::getComponentCount()
	{
		return callMethod<jint>(
			"getComponentCount",
			"()I"
		);
	}
	jint ColorSpace::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jfloat ColorSpace::getMaxValue(jint arg0)
	{
		return callMethod<jfloat>(
			"getMaxValue",
			"(I)F",
			arg0
		);
	}
	jfloat ColorSpace::getMinValue(jint arg0)
	{
		return callMethod<jfloat>(
			"getMinValue",
			"(I)F",
			arg0
		);
	}
	android::graphics::ColorSpace_Model ColorSpace::getModel()
	{
		return callObjectMethod(
			"getModel",
			"()Landroid/graphics/ColorSpace$Model;"
		);
	}
	jstring ColorSpace::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ColorSpace::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ColorSpace::isSrgb()
	{
		return callMethod<jboolean>(
			"isSrgb",
			"()Z"
		);
	}
	jboolean ColorSpace::isWideGamut()
	{
		return callMethod<jboolean>(
			"isWideGamut",
			"()Z"
		);
	}
	jstring ColorSpace::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jfloatArray ColorSpace::toXyz(jfloatArray arg0)
	{
		return callObjectMethod(
			"toXyz",
			"([F)[F",
			arg0
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::toXyz(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return callObjectMethod(
			"toXyz",
			"(FFF)[F",
			arg0,
			arg1,
			arg2
		).object<jfloatArray>();
	}
} // namespace android::graphics

