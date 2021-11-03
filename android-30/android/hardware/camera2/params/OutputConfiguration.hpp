#pragma once

#include "../../../../JObject.hpp"

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
class JClass;
class JObject;
class JString;

namespace android::hardware::camera2::params
{
	class OutputConfiguration : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint SURFACE_GROUP_ID_NONE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OutputConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OutputConfiguration(QAndroidJniObject obj);
		
		// Constructors
		OutputConfiguration(android::view::Surface arg0);
		OutputConfiguration(android::util::Size arg0, JClass arg1);
		OutputConfiguration(jint arg0, android::view::Surface arg1);
		
		// Methods
		void addSurface(android::view::Surface arg0);
		jint describeContents();
		void enableSurfaceSharing();
		jboolean equals(JObject arg0);
		jint getMaxSharedSurfaceCount();
		android::view::Surface getSurface();
		jint getSurfaceGroupId();
		JObject getSurfaces();
		jint hashCode();
		void removeSurface(android::view::Surface arg0);
		void setPhysicalCameraId(JString arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::camera2::params

