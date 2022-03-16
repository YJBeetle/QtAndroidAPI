#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::camera2
{
	class CaptureRequest;
}
namespace android::hardware::camera2
{
	class CaptureRequest_Key;
}
namespace android::view
{
	class Surface;
}
class JObject;
class JString;

namespace android::hardware::camera2
{
	class CaptureRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CaptureRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CaptureRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void addTarget(android::view::Surface arg0) const;
		android::hardware::camera2::CaptureRequest build() const;
		JObject get(android::hardware::camera2::CaptureRequest_Key arg0) const;
		JObject getPhysicalCameraKey(android::hardware::camera2::CaptureRequest_Key arg0, JString arg1) const;
		void removeTarget(android::view::Surface arg0) const;
		void set(android::hardware::camera2::CaptureRequest_Key arg0, JObject arg1) const;
		android::hardware::camera2::CaptureRequest_Builder setPhysicalCameraKey(android::hardware::camera2::CaptureRequest_Key arg0, JObject arg1, JString arg2) const;
		void setTag(JObject arg0) const;
	};
} // namespace android::hardware::camera2

