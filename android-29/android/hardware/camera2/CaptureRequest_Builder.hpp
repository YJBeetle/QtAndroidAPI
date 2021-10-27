#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class CaptureRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		CaptureRequest_Builder(QAndroidJniObject obj);
		// Constructors
		CaptureRequest_Builder() = default;
		
		// Methods
		void addTarget(android::view::Surface arg0);
		QAndroidJniObject build();
		jobject get(android::hardware::camera2::CaptureRequest_Key arg0);
		jobject getPhysicalCameraKey(android::hardware::camera2::CaptureRequest_Key arg0, jstring arg1);
		jobject getPhysicalCameraKey(android::hardware::camera2::CaptureRequest_Key arg0, const QString &arg1);
		void removeTarget(android::view::Surface arg0);
		void set(android::hardware::camera2::CaptureRequest_Key arg0, jobject arg1);
		QAndroidJniObject setPhysicalCameraKey(android::hardware::camera2::CaptureRequest_Key arg0, jobject arg1, jstring arg2);
		QAndroidJniObject setPhysicalCameraKey(android::hardware::camera2::CaptureRequest_Key arg0, jobject arg1, const QString &arg2);
		void setTag(jobject arg0);
	};
} // namespace android::hardware::camera2

