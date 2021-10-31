#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::util
{
	class Size;
}
namespace android::view
{
	class Surface;
}

namespace android::hardware::camera2::params
{
	class OutputConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint SURFACE_GROUP_ID_NONE();
		
		OutputConfiguration(QAndroidJniObject obj);
		// Constructors
		OutputConfiguration(android::view::Surface arg0);
		OutputConfiguration(android::util::Size arg0, jclass arg1);
		OutputConfiguration(jint arg0, android::view::Surface arg1);
		OutputConfiguration() = default;
		
		// Methods
		void addSurface(android::view::Surface arg0);
		jint describeContents();
		void enableSurfaceSharing();
		jboolean equals(jobject arg0);
		jint getMaxSharedSurfaceCount();
		QAndroidJniObject getSurface();
		jint getSurfaceGroupId();
		QAndroidJniObject getSurfaces();
		jint hashCode();
		void removeSurface(android::view::Surface arg0);
		void setPhysicalCameraId(jstring arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::camera2::params

