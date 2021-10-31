#include "./OrientedBoundingBox.hpp"

namespace android::gesture
{
	// Fields
	jfloat OrientedBoundingBox::centerX()
	{
		return getField<jfloat>(
			"centerX"
		);
	}
	jfloat OrientedBoundingBox::centerY()
	{
		return getField<jfloat>(
			"centerY"
		);
	}
	jfloat OrientedBoundingBox::height()
	{
		return getField<jfloat>(
			"height"
		);
	}
	jfloat OrientedBoundingBox::orientation()
	{
		return getField<jfloat>(
			"orientation"
		);
	}
	jfloat OrientedBoundingBox::squareness()
	{
		return getField<jfloat>(
			"squareness"
		);
	}
	jfloat OrientedBoundingBox::width()
	{
		return getField<jfloat>(
			"width"
		);
	}
	
	// QJniObject forward
	OrientedBoundingBox::OrientedBoundingBox(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::gesture

