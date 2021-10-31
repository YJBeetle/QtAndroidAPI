#include "./LightingColorFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	LightingColorFilter::LightingColorFilter(QJniObject obj) : android::graphics::ColorFilter(obj) {}
	
	// Constructors
	LightingColorFilter::LightingColorFilter(jint arg0, jint arg1)
		: android::graphics::ColorFilter(
			"android.graphics.LightingColorFilter",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint LightingColorFilter::getColorAdd()
	{
		return callMethod<jint>(
			"getColorAdd",
			"()I"
		);
	}
	jint LightingColorFilter::getColorMultiply()
	{
		return callMethod<jint>(
			"getColorMultiply",
			"()I"
		);
	}
} // namespace android::graphics

