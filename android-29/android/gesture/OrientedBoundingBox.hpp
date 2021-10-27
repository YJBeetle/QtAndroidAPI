#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::gesture
{
	class OrientedBoundingBox : public __JniBaseClass
	{
	public:
		// Fields
		jfloat centerX();
		jfloat centerY();
		jfloat height();
		jfloat orientation();
		jfloat squareness();
		jfloat width();
		
		OrientedBoundingBox(QAndroidJniObject obj);
		// Constructors
		OrientedBoundingBox() = default;
		
		// Methods
	};
} // namespace android::gesture

