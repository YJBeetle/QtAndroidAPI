#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::gesture
{
	class OrientedBoundingBox;
}
namespace android::graphics
{
	class Path;
}
namespace android::graphics
{
	class RectF;
}
namespace java::util
{
	class ArrayList;
}

namespace android::gesture
{
	class GestureStroke : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject boundingBox();
		jfloat length();
		jfloatArray points();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GestureStroke(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GestureStroke(QAndroidJniObject obj);
		
		// Constructors
		GestureStroke(java::util::ArrayList arg0);
		
		// Methods
		void clearPath();
		jobject clone();
		QAndroidJniObject computeOrientedBoundingBox();
		QAndroidJniObject getPath();
		QAndroidJniObject toPath(jfloat arg0, jfloat arg1, jint arg2);
	};
} // namespace android::gesture

