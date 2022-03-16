#pragma once

#include "../../../../JObject.hpp"

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
class JObject;
class JString;

namespace android::hardware::camera2::params
{
	class MeteringRectangle : public JObject
	{
	public:
		// Fields
		static jint METERING_WEIGHT_DONT_CARE();
		static jint METERING_WEIGHT_MAX();
		static jint METERING_WEIGHT_MIN();
		
		// QJniObject forward
		template<typename ...Ts> explicit MeteringRectangle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MeteringRectangle(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MeteringRectangle(android::graphics::Rect arg0, jint arg1);
		MeteringRectangle(android::graphics::Point arg0, android::util::Size arg1, jint arg2);
		MeteringRectangle(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		
		// Methods
		jboolean equals(android::hardware::camera2::params::MeteringRectangle arg0) const;
		jboolean equals(JObject arg0) const;
		jint getHeight() const;
		jint getMeteringWeight() const;
		android::graphics::Rect getRect() const;
		android::util::Size getSize() const;
		android::graphics::Point getUpperLeftPoint() const;
		jint getWidth() const;
		jint getX() const;
		jint getY() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::hardware::camera2::params

