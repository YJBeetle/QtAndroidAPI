#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Point;
}
namespace android::graphics
{
	class Rect;
}
namespace android::util
{
	class Size;
}

namespace android::hardware::camera2::params
{
	class MeteringRectangle : public __JniBaseClass
	{
	public:
		// Fields
		static jint METERING_WEIGHT_DONT_CARE();
		static jint METERING_WEIGHT_MAX();
		static jint METERING_WEIGHT_MIN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MeteringRectangle(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MeteringRectangle(QAndroidJniObject obj);
		
		// Constructors
		MeteringRectangle(android::graphics::Rect arg0, jint arg1);
		MeteringRectangle(android::graphics::Point arg0, android::util::Size arg1, jint arg2);
		MeteringRectangle(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		
		// Methods
		jboolean equals(android::hardware::camera2::params::MeteringRectangle arg0);
		jboolean equals(jobject arg0);
		jint getHeight();
		jint getMeteringWeight();
		android::graphics::Rect getRect();
		android::util::Size getSize();
		android::graphics::Point getUpperLeftPoint();
		jint getWidth();
		jint getX();
		jint getY();
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2::params

