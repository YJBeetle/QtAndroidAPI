#pragma once

#include "../../JObject.hpp"

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
	class GestureUtils : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GestureUtils(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GestureUtils(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::gesture::OrientedBoundingBox computeOrientedBoundingBox(jfloatArray arg0);
		static android::gesture::OrientedBoundingBox computeOrientedBoundingBox(java::util::ArrayList arg0);
		static jfloatArray spatialSampling(android::gesture::Gesture arg0, jint arg1);
		static jfloatArray spatialSampling(android::gesture::Gesture arg0, jint arg1, jboolean arg2);
		static jfloatArray temporalSampling(android::gesture::GestureStroke arg0, jint arg1);
	};
} // namespace android::gesture

