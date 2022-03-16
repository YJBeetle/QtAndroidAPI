#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Interpolator_Result.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Interpolator_Result Interpolator_Result::FREEZE_END()
	{
		return getStaticObjectField(
			"android.graphics.Interpolator$Result",
			"FREEZE_END",
			"Landroid/graphics/Interpolator$Result;"
		);
	}
	android::graphics::Interpolator_Result Interpolator_Result::FREEZE_START()
	{
		return getStaticObjectField(
			"android.graphics.Interpolator$Result",
			"FREEZE_START",
			"Landroid/graphics/Interpolator$Result;"
		);
	}
	android::graphics::Interpolator_Result Interpolator_Result::NORMAL()
	{
		return getStaticObjectField(
			"android.graphics.Interpolator$Result",
			"NORMAL",
			"Landroid/graphics/Interpolator$Result;"
		);
	}
	
	// Constructors
	
	// Methods
	android::graphics::Interpolator_Result Interpolator_Result::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Interpolator$Result",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Interpolator$Result;",
			arg0.object<jstring>()
		);
	}
	JArray Interpolator_Result::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Interpolator$Result",
			"values",
			"()[Landroid/graphics/Interpolator$Result;"
		);
	}
} // namespace android::graphics

