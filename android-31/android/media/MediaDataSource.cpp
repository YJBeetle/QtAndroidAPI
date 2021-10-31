#include "./MediaDataSource.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaDataSource::MediaDataSource(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaDataSource::MediaDataSource()
		: __JniBaseClass(
			"android.media.MediaDataSource",
			"()V"
		) {}
	
	// Methods
	jlong MediaDataSource::getSize()
	{
		return callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	jint MediaDataSource::readAt(jlong arg0, jbyteArray arg1, jint arg2, jint arg3)
	{
		return callMethod<jint>(
			"readAt",
			"(J[BII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::media

