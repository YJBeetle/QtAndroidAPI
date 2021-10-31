#include "./MediaDrm_SessionException.hpp"

namespace android::media
{
	// Fields
	jint MediaDrm_SessionException::ERROR_RESOURCE_CONTENTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$SessionException",
			"ERROR_RESOURCE_CONTENTION"
		);
	}
	jint MediaDrm_SessionException::ERROR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$SessionException",
			"ERROR_UNKNOWN"
		);
	}
	
	MediaDrm_SessionException::MediaDrm_SessionException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaDrm_SessionException::MediaDrm_SessionException(jint arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrm$SessionException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint MediaDrm_SessionException::getErrorCode()
	{
		return __thiz.callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
} // namespace android::media

