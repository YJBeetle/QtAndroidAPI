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

namespace android::hardware::camera2
{
	class CaptureRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CaptureRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CaptureRequest_Builder(QJniObject obj);
		
		// Constructors
		
		// Methods
		void addTarget(android::view::Surface arg0);
		android::hardware::camera2::CaptureRequest build();
		jobject get(android::hardware::camera2::CaptureRequest_Key arg0);
		jobject getPhysicalCameraKey(android::hardware::camera2::CaptureRequest_Key arg0, jstring arg1);
		void removeTarget(android::view::Surface arg0);
		void set(android::hardware::camera2::CaptureRequest_Key arg0, jobject arg1);
		android::hardware::camera2::CaptureRequest_Builder setPhysicalCameraKey(android::hardware::camera2::CaptureRequest_Key arg0, jobject arg1, jstring arg2);
		void setTag(jobject arg0);
	};
} // namespace android::hardware::camera2

