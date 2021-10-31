#include "./ColorMatrix.hpp"
#include "./ColorMatrixColorFilter.hpp"

namespace android::graphics
{
	// Fields
	
	ColorMatrixColorFilter::ColorMatrixColorFilter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ColorMatrixColorFilter::ColorMatrixColorFilter(jfloatArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorMatrixColorFilter",
			"([F)V",
			arg0
		);
	}
	ColorMatrixColorFilter::ColorMatrixColorFilter(android::graphics::ColorMatrix arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorMatrixColorFilter",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void ColorMatrixColorFilter::getColorMatrix(android::graphics::ColorMatrix arg0)
	{
		__thiz.callMethod<void>(
			"getColorMatrix",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::graphics

