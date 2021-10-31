#include "./ColorMatrix.hpp"
#include "./ColorMatrixColorFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	ColorMatrixColorFilter::ColorMatrixColorFilter(QAndroidJniObject obj) : android::graphics::ColorFilter(obj) {}
	
	// Constructors
	ColorMatrixColorFilter::ColorMatrixColorFilter(jfloatArray arg0)
		: android::graphics::ColorFilter(
			"android.graphics.ColorMatrixColorFilter",
			"([F)V",
			arg0
		) {}
	ColorMatrixColorFilter::ColorMatrixColorFilter(android::graphics::ColorMatrix arg0)
		: android::graphics::ColorFilter(
			"android.graphics.ColorMatrixColorFilter",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.object()
		) {}
	
	// Methods
	void ColorMatrixColorFilter::getColorMatrix(android::graphics::ColorMatrix arg0)
	{
		callMethod<void>(
			"getColorMatrix",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.object()
		);
	}
} // namespace android::graphics

