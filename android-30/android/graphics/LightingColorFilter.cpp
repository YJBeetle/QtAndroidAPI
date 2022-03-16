#include "./LightingColorFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	LightingColorFilter::LightingColorFilter(jint arg0, jint arg1)
		: android::graphics::ColorFilter(
			"android.graphics.LightingColorFilter",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint LightingColorFilter::getColorAdd() const
	{
		return callMethod<jint>(
			"getColorAdd",
			"()I"
		);
	}
	jint LightingColorFilter::getColorMultiply() const
	{
		return callMethod<jint>(
			"getColorMultiply",
			"()I"
		);
	}
} // namespace android::graphics

