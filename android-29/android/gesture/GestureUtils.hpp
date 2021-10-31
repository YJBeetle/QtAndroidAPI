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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GestureUtils(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GestureUtils(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject computeOrientedBoundingBox(jfloatArray arg0);
		static QAndroidJniObject computeOrientedBoundingBox(java::util::ArrayList arg0);
		static jfloatArray spatialSampling(android::gesture::Gesture arg0, jint arg1);
		static jfloatArray spatialSampling(android::gesture::Gesture arg0, jint arg1, jboolean arg2);
		static jfloatArray temporalSampling(android::gesture::GestureStroke arg0, jint arg1);
	};
} // namespace android::gesture

