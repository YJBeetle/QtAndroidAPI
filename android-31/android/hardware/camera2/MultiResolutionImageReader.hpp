#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class MultiResolutionImageReader : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MultiResolutionImageReader(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MultiResolutionImageReader(QJniObject obj);
		
		// Constructors
		MultiResolutionImageReader(__JniBaseClass arg0, jint arg1, jint arg2);
		
		// Methods
		void close();
		void flush();
		android::hardware::camera2::params::MultiResolutionStreamInfo getStreamInfoForImageReader(android::media::ImageReader arg0);
		android::view::Surface getSurface();
		void setOnImageAvailableListener(__JniBaseClass arg0, __JniBaseClass arg1);
	};
} // namespace android::hardware::camera2

