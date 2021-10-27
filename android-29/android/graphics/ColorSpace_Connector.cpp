#include "./ColorSpace.hpp"
#include "./ColorSpace_RenderIntent.hpp"
#include "./ColorSpace_Connector.hpp"

namespace android::graphics
{
	// Fields
	
	ColorSpace_Connector::ColorSpace_Connector(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ColorSpace_Connector::getDestination()
	{
		return __thiz.callObjectMethod(
			"getDestination",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	QAndroidJniObject ColorSpace_Connector::getRenderIntent()
	{
		return __thiz.callObjectMethod(
			"getRenderIntent",
			"()Landroid/graphics/ColorSpace$RenderIntent;"
		);
	}
	QAndroidJniObject ColorSpace_Connector::getSource()
	{
		return __thiz.callObjectMethod(
			"getSource",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	jfloatArray ColorSpace_Connector::transform(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"transform",
			"([F)[F",
			arg0
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace_Connector::transform(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callObjectMethod(
			"transform",
			"(FFF)[F",
			arg0,
			arg1,
			arg2
		).object<jfloatArray>();
	}
} // namespace android::graphics

