#include "./MediaDrm_MetricsConstants.hpp"

namespace android::media
{
	// Fields
	jstring MediaDrm_MetricsConstants::CLOSE_SESSION_ERROR_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"CLOSE_SESSION_ERROR_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::CLOSE_SESSION_ERROR_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"CLOSE_SESSION_ERROR_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::CLOSE_SESSION_OK_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"CLOSE_SESSION_OK_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::EVENT_KEY_EXPIRED_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"EVENT_KEY_EXPIRED_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::EVENT_KEY_NEEDED_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"EVENT_KEY_NEEDED_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::EVENT_PROVISION_REQUIRED_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"EVENT_PROVISION_REQUIRED_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::EVENT_SESSION_RECLAIMED_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"EVENT_SESSION_RECLAIMED_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::EVENT_VENDOR_DEFINED_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"EVENT_VENDOR_DEFINED_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::GET_DEVICE_UNIQUE_ID_ERROR_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"GET_DEVICE_UNIQUE_ID_ERROR_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::GET_DEVICE_UNIQUE_ID_ERROR_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"GET_DEVICE_UNIQUE_ID_ERROR_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::GET_DEVICE_UNIQUE_ID_OK_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"GET_DEVICE_UNIQUE_ID_OK_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::GET_KEY_REQUEST_ERROR_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"GET_KEY_REQUEST_ERROR_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::GET_KEY_REQUEST_ERROR_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"GET_KEY_REQUEST_ERROR_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::GET_KEY_REQUEST_OK_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"GET_KEY_REQUEST_OK_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::GET_KEY_REQUEST_OK_TIME_MICROS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"GET_KEY_REQUEST_OK_TIME_MICROS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::GET_PROVISION_REQUEST_ERROR_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"GET_PROVISION_REQUEST_ERROR_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::GET_PROVISION_REQUEST_ERROR_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"GET_PROVISION_REQUEST_ERROR_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::GET_PROVISION_REQUEST_OK_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"GET_PROVISION_REQUEST_OK_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::KEY_STATUS_EXPIRED_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"KEY_STATUS_EXPIRED_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::KEY_STATUS_INTERNAL_ERROR_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"KEY_STATUS_INTERNAL_ERROR_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::KEY_STATUS_OUTPUT_NOT_ALLOWED_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"KEY_STATUS_OUTPUT_NOT_ALLOWED_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::KEY_STATUS_PENDING_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"KEY_STATUS_PENDING_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::KEY_STATUS_USABLE_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"KEY_STATUS_USABLE_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::OPEN_SESSION_ERROR_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"OPEN_SESSION_ERROR_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::OPEN_SESSION_ERROR_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"OPEN_SESSION_ERROR_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::OPEN_SESSION_OK_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"OPEN_SESSION_OK_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::PROVIDE_KEY_RESPONSE_ERROR_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"PROVIDE_KEY_RESPONSE_ERROR_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::PROVIDE_KEY_RESPONSE_ERROR_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"PROVIDE_KEY_RESPONSE_ERROR_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::PROVIDE_KEY_RESPONSE_OK_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"PROVIDE_KEY_RESPONSE_OK_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::PROVIDE_KEY_RESPONSE_OK_TIME_MICROS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"PROVIDE_KEY_RESPONSE_OK_TIME_MICROS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::PROVIDE_PROVISION_RESPONSE_ERROR_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"PROVIDE_PROVISION_RESPONSE_ERROR_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::PROVIDE_PROVISION_RESPONSE_ERROR_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"PROVIDE_PROVISION_RESPONSE_ERROR_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::PROVIDE_PROVISION_RESPONSE_OK_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"PROVIDE_PROVISION_RESPONSE_OK_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::SESSION_END_TIMES_MS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"SESSION_END_TIMES_MS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm_MetricsConstants::SESSION_START_TIMES_MS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm$MetricsConstants",
			"SESSION_START_TIMES_MS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	MediaDrm_MetricsConstants::MediaDrm_MetricsConstants(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media
