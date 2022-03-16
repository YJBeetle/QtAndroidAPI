#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Interpolator_Result.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::Interpolator_Result Interpolator_Result::FREEZE_END()
	{
		return getStaticObjectField(
			"android.graphics.Interpolator$Result",
			"FREEZE_END",
			"Landroid/graphics/Interpolator$Result;"
		);
	}
	inline android::graphics::Interpolator_Result Interpolator_Result::FREEZE_START()
	{
		return getStaticObjectField(
			"android.graphics.Interpolator$Result",
			"FREEZE_START",
			"Landroid/graphics/Interpolator$Result;"
		);
	}
	inline android::graphics::Interpolator_Result Interpolator_Result::NORMAL()
	{
		return getStaticObjectField(
			"android.graphics.Interpolator$Result",
			"NORMAL",
			"Landroid/graphics/Interpolator$Result;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Interpolator_Result Interpolator_Result::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Interpolator$Result",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Interpolator$Result;",
			arg0.object<jstring>()
		);
	}
	inline JArray Interpolator_Result::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Interpolator$Result",
			"values",
			"()[Landroid/graphics/Interpolator$Result;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

