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
		
		// QJniObject forward
		template<typename ...Ts> explicit MultiResolutionImageReader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MultiResolutionImageReader(QJniObject obj);
		
		// Constructors
		MultiResolutionImageReader(JObject arg0, jint arg1, jint arg2);
		
		// Methods
		void close() const;
		void flush() const;
		android::hardware::camera2::params::MultiResolutionStreamInfo getStreamInfoForImageReader(android::media::ImageReader arg0) const;
		android::view::Surface getSurface() const;
		void setOnImageAvailableListener(JObject arg0, JObject arg1) const;
	};
} // namespace android::hardware::camera2

