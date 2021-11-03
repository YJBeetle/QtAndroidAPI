#pragma once

#include "../../../../JObject.hpp"


namespace android::hardware::camera2::params
{
	class MultiResolutionStreamInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MultiResolutionStreamInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MultiResolutionStreamInfo(QAndroidJniObject obj);
		
		// Constructors
		MultiResolutionStreamInfo(jint arg0, jint arg1, jstring arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getHeight();
		jstring getPhysicalCameraId();
		jint getWidth();
		jint hashCode();
	};
} // namespace android::hardware::camera2::params

