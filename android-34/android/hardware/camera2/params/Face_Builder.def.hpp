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
namespace android::hardware::camera2::params
{
	class Face;
}

namespace android::hardware::camera2::params
{
	class Face_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Face_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Face_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Face_Builder();
		Face_Builder(android::hardware::camera2::params::Face arg0);
		
		// Methods
		android::hardware::camera2::params::Face build() const;
		android::hardware::camera2::params::Face_Builder setBounds(android::graphics::Rect arg0) const;
		android::hardware::camera2::params::Face_Builder setId(jint arg0) const;
		android::hardware::camera2::params::Face_Builder setLeftEyePosition(android::graphics::Point arg0) const;
		android::hardware::camera2::params::Face_Builder setMouthPosition(android::graphics::Point arg0) const;
		android::hardware::camera2::params::Face_Builder setRightEyePosition(android::graphics::Point arg0) const;
		android::hardware::camera2::params::Face_Builder setScore(jint arg0) const;
	};
} // namespace android::hardware::camera2::params

