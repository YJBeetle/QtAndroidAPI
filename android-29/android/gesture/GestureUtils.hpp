#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::gesture
{
	class Gesture;
}
namespace android::gesture
{
	class GestureStroke;
}
namespace android::gesture
{
	class OrientedBoundingBox;
}
namespace java::util
{
	class ArrayList;
}

namespace android::gesture
{
	class GestureUtils : public __JniBaseClass
	{
	public:
		// Fields
		
		GestureUtils(QAndroidJniObject obj);
		// Constructors
		GestureUtils() = default;
		
		// Methods
		static QAndroidJniObject computeOrientedBoundingBox(jfloatArray arg0);
		static QAndroidJniObject computeOrientedBoundingBox(java::util::ArrayList arg0);
		static jfloatArray spatialSampling(android::gesture::Gesture arg0, jint arg1);
		static jfloatArray spatialSampling(android::gesture::Gesture arg0, jint arg1, jboolean arg2);
		static jfloatArray temporalSampling(android::gesture::GestureStroke arg0, jint arg1);
	};
} // namespace android::gesture

