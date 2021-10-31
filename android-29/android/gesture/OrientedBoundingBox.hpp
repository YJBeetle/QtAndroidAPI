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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OrientedBoundingBox(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		OrientedBoundingBox(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::gesture

