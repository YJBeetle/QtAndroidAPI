#pragma once

#include "../../../../JObject.hpp"

namespace android::hardware::camera2
{
	class MultiResolutionImageReader;
}
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
		static jint MIRROR_MODE_AUTO();
		static jint MIRROR_MODE_H();
		static jint MIRROR_MODE_NONE();
		static jint MIRROR_MODE_V();
		static jint SURFACE_GROUP_ID_NONE();
		static jint TIMESTAMP_BASE_CHOREOGRAPHER_SYNCED();
		static jint TIMESTAMP_BASE_DEFAULT();
		static jint TIMESTAMP_BASE_MONOTONIC();
		static jint TIMESTAMP_BASE_REALTIME();
		static jint TIMESTAMP_BASE_SENSOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OutputConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OutputConfiguration(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		OutputConfiguration(android::view::Surface arg0);
		OutputConfiguration(android::util::Size arg0, JClass arg1);
		OutputConfiguration(jint arg0, android::view::Surface arg1);
		
		// Methods
		static JObject createInstancesForMultiResolutionOutput(android::hardware::camera2::MultiResolutionImageReader arg0);
		void addSensorPixelModeUsed(jint arg0) const;
		void addSurface(android::view::Surface arg0) const;
		jint describeContents() const;
		void enableSurfaceSharing() const;
		jboolean equals(JObject arg0) const;
		jlong getDynamicRangeProfile() const;
		jint getMaxSharedSurfaceCount() const;
		jint getMirrorMode() const;
		jlong getStreamUseCase() const;
		android::view::Surface getSurface() const;
		jint getSurfaceGroupId() const;
		JObject getSurfaces() const;
		jint getTimestampBase() const;
		jint hashCode() const;
		void removeSensorPixelModeUsed(jint arg0) const;
		void removeSurface(android::view::Surface arg0) const;
		void setDynamicRangeProfile(jlong arg0) const;
		void setMirrorMode(jint arg0) const;
		void setPhysicalCameraId(JString arg0) const;
		void setStreamUseCase(jlong arg0) const;
		void setTimestampBase(jint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::hardware::camera2::params

