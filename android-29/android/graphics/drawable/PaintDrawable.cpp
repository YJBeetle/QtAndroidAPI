#include "../../content/res/Resources.hpp"
#include "./PaintDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	PaintDrawable::PaintDrawable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PaintDrawable::PaintDrawable()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.PaintDrawable",
			"()V"
		);
	}
	PaintDrawable::PaintDrawable(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.PaintDrawable",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	void PaintDrawable::setCornerRadii(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"setCornerRadii",
			"([F)V",
			arg0
		);
	}
	void PaintDrawable::setCornerRadius(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setCornerRadius",
			"(F)V",
			arg0
		);
	}
} // namespace android::graphics::drawable

