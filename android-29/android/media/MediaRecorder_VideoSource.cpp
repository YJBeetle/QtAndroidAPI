#include "./MediaRecorder.hpp"
#include "./MediaRecorder_VideoSource.hpp"

namespace android::media
{
	// Fields
	jint MediaRecorder_VideoSource::CAMERA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$VideoSource",
			"CAMERA"
		);
	}
	jint MediaRecorder_VideoSource::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$VideoSource",
			"DEFAULT"
		);
	}
	jint MediaRecorder_VideoSource::SURFACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$VideoSource",
			"SURFACE"
		);
	}
	
	// QAndroidJniObject forward
	MediaRecorder_VideoSource::MediaRecorder_VideoSource(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

