#include "./MediaDataSource.hpp"

namespace android::media
{
	// Fields
	
	MediaDataSource::MediaDataSource(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaDataSource::MediaDataSource()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDataSource",
			"()V"
		);
	}
	
	// Methods
	jlong MediaDataSource::getSize()
	{
		return __thiz.callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	jint MediaDataSource::readAt(jlong arg0, jbyteArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"readAt",
			"(J[BII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::media

