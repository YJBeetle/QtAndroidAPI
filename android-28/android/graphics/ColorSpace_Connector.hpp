#pragma once

#include "../../JFloatArray.hpp"
#include "./ColorSpace.def.hpp"
#include "./ColorSpace_RenderIntent.def.hpp"
#include "./ColorSpace_Connector.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::graphics::ColorSpace ColorSpace_Connector::getDestination() const
	{
		return callObjectMethod(
			"getDestination",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	inline android::graphics::ColorSpace_RenderIntent ColorSpace_Connector::getRenderIntent() const
	{
		return callObjectMethod(
			"getRenderIntent",
			"()Landroid/graphics/ColorSpace$RenderIntent;"
		);
	}
	inline android::graphics::ColorSpace ColorSpace_Connector::getSource() const
	{
		return callObjectMethod(
			"getSource",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	inline JFloatArray ColorSpace_Connector::transform(JFloatArray arg0) const
	{
		return callObjectMethod(
			"transform",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	inline JFloatArray ColorSpace_Connector::transform(jfloat arg0, jfloat arg1, jfloat arg2) const
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

// Base class headers

