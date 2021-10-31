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
		
		ThumbnailUtils(QAndroidJniObject obj);
		// Constructors
		ThumbnailUtils();
		
		// Methods
		static QAndroidJniObject createAudioThumbnail(jstring arg0, jint arg1);
		static QAndroidJniObject createAudioThumbnail(java::io::File arg0, android::util::Size arg1, android::os::CancellationSignal arg2);
		static QAndroidJniObject createImageThumbnail(jstring arg0, jint arg1);
		static QAndroidJniObject createImageThumbnail(java::io::File arg0, android::util::Size arg1, android::os::CancellationSignal arg2);
		static QAndroidJniObject createVideoThumbnail(jstring arg0, jint arg1);
		static QAndroidJniObject createVideoThumbnail(java::io::File arg0, android::util::Size arg1, android::os::CancellationSignal arg2);
		static QAndroidJniObject extractThumbnail(android::graphics::Bitmap arg0, jint arg1, jint arg2);
		static QAndroidJniObject extractThumbnail(android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::media

