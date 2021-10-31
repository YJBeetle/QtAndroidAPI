#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::os
{
	class CancellationSignal;
}
namespace android::util
{
	class Size;
}
namespace java::io
{
	class File;
}

namespace android::media
{
	class ThumbnailUtils : public __JniBaseClass
	{
	public:
		// Fields
		static jint OPTIONS_RECYCLE_INPUT();
		
		// QJniObject forward
		template<typename ...Ts> explicit ThumbnailUtils(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ThumbnailUtils(QJniObject obj);
		
		// Constructors
		ThumbnailUtils();
		
		// Methods
		static android::graphics::Bitmap createAudioThumbnail(jstring arg0, jint arg1);
		static android::graphics::Bitmap createAudioThumbnail(java::io::File arg0, android::util::Size arg1, android::os::CancellationSignal arg2);
		static android::graphics::Bitmap createImageThumbnail(jstring arg0, jint arg1);
		static android::graphics::Bitmap createImageThumbnail(java::io::File arg0, android::util::Size arg1, android::os::CancellationSignal arg2);
		static android::graphics::Bitmap createVideoThumbnail(jstring arg0, jint arg1);
		static android::graphics::Bitmap createVideoThumbnail(java::io::File arg0, android::util::Size arg1, android::os::CancellationSignal arg2);
		static android::graphics::Bitmap extractThumbnail(android::graphics::Bitmap arg0, jint arg1, jint arg2);
		static android::graphics::Bitmap extractThumbnail(android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::media

