#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::camera2::params
{
	class MultiResolutionStreamInfo;
}
namespace android::media
{
	class ImageReader;
}
namespace android::view
{
	class Surface;
}

namespace android::hardware::camera2
{
	class MultiResolutionImageReader : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MultiResolutionImageReader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MultiResolutionImageReader(QAndroidJniObject obj);
		
		// Constructors
		MultiResolutionImageReader(JObject arg0, jint arg1, jint arg2);
		
		// Methods
		void close();
		void flush();
		android::hardware::camera2::params::MultiResolutionStreamInfo getStreamInfoForImageReader(android::media::ImageReader arg0);
		android::view::Surface getSurface();
		void setOnImageAvailableListener(JObject arg0, JObject arg1);
	};
} // namespace android::hardware::camera2

