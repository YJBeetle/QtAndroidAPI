#include "../../JFloatArray.hpp"
#include "./ColorSpace.hpp"
#include "./ColorSpace_RenderIntent.hpp"
#include "./ColorSpace_Connector.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	ColorSpace_Connector::ColorSpace_Connector(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::ColorSpace ColorSpace_Connector::getDestination()
	{
		return callObjectMethod(
			"getDestination",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	android::graphics::ColorSpace_RenderIntent ColorSpace_Connector::getRenderIntent()
	{
		return callObjectMethod(
			"getRenderIntent",
			"()Landroid/graphics/ColorSpace$RenderIntent;"
		);
	}
	android::graphics::ColorSpace ColorSpace_Connector::getSource()
	{
		return callObjectMethod(
			"getSource",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	JFloatArray ColorSpace_Connector::transform(JFloatArray arg0)
	{
		return callObjectMethod(
			"transform",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	JFloatArray ColorSpace_Connector::transform(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return callObjectMethod(
			"transform",
			"(FFF)[F",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::graphics

