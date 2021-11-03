#include "./MediaDrm_KeyStatus.hpp"

namespace android::media
{
	// Fields
	jint MediaDrm_KeyStatus::STATUS_EXPIRED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_EXPIRED"
		);
	}
	jint MediaDrm_KeyStatus::STATUS_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_INTERNAL_ERROR"
		);
	}
	jint MediaDrm_KeyStatus::STATUS_OUTPUT_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_OUTPUT_NOT_ALLOWED"
		);
	}
	jint MediaDrm_KeyStatus::STATUS_PENDING()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_PENDING"
		);
	}
	jint MediaDrm_KeyStatus::STATUS_USABLE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_USABLE"
		);
	}
	jint MediaDrm_KeyStatus::STATUS_USABLE_IN_FUTURE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_USABLE_IN_FUTURE"
		);
	}
	
	// QAndroidJniObject forward
	MediaDrm_KeyStatus::MediaDrm_KeyStatus(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jbyteArray MediaDrm_KeyStatus::getKeyId()
	{
		return callObjectMethod(
			"getKeyId",
			"()[B"
		).object<jbyteArray>();
	}
	jint MediaDrm_KeyStatus::getStatusCode()
	{
		return callMethod<jint>(
			"getStatusCode",
			"()I"
		);
	}
} // namespace android::media

