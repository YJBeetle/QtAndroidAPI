#include "./MediaDrm_KeyStatus.hpp"

namespace android::media
{
	// Fields
	jint MediaDrm_KeyStatus::STATUS_EXPIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_EXPIRED"
		);
	}
	jint MediaDrm_KeyStatus::STATUS_INTERNAL_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_INTERNAL_ERROR"
		);
	}
	jint MediaDrm_KeyStatus::STATUS_OUTPUT_NOT_ALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_OUTPUT_NOT_ALLOWED"
		);
	}
	jint MediaDrm_KeyStatus::STATUS_PENDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_PENDING"
		);
	}
	jint MediaDrm_KeyStatus::STATUS_USABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_USABLE"
		);
	}
	jint MediaDrm_KeyStatus::STATUS_USABLE_IN_FUTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_USABLE_IN_FUTURE"
		);
	}
	
	MediaDrm_KeyStatus::MediaDrm_KeyStatus(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jbyteArray MediaDrm_KeyStatus::getKeyId()
	{
		return __thiz.callObjectMethod(
			"getKeyId",
			"()[B"
		).object<jbyteArray>();
	}
	jint MediaDrm_KeyStatus::getStatusCode()
	{
		return __thiz.callMethod<jint>(
			"getStatusCode",
			"()I"
		);
	}
} // namespace android::media

