#include "./OrientedBoundingBox.hpp"

namespace android::gesture
{
	// Fields
	jfloat OrientedBoundingBox::centerX()
	{
		return __thiz.getField<jfloat>(
			"centerX"
		);
	}
	jfloat OrientedBoundingBox::centerY()
	{
		return __thiz.getField<jfloat>(
			"centerY"
		);
	}
	jfloat OrientedBoundingBox::height()
	{
		return __thiz.getField<jfloat>(
			"height"
		);
	}
	jfloat OrientedBoundingBox::orientation()
	{
		return __thiz.getField<jfloat>(
			"orientation"
		);
	}
	jfloat OrientedBoundingBox::squareness()
	{
		return __thiz.getField<jfloat>(
			"squareness"
		);
	}
	jfloat OrientedBoundingBox::width()
	{
		return __thiz.getField<jfloat>(
			"width"
		);
	}
	
	OrientedBoundingBox::OrientedBoundingBox(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::gesture

