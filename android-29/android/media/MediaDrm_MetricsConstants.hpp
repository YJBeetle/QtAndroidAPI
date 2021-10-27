#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class MediaDrm_MetricsConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CLOSE_SESSION_ERROR_COUNT();
		static jstring CLOSE_SESSION_ERROR_LIST();
		static jstring CLOSE_SESSION_OK_COUNT();
		static jstring EVENT_KEY_EXPIRED_COUNT();
		static jstring EVENT_KEY_NEEDED_COUNT();
		static jstring EVENT_PROVISION_REQUIRED_COUNT();
		static jstring EVENT_SESSION_RECLAIMED_COUNT();
		static jstring EVENT_VENDOR_DEFINED_COUNT();
		static jstring GET_DEVICE_UNIQUE_ID_ERROR_COUNT();
		static jstring GET_DEVICE_UNIQUE_ID_ERROR_LIST();
		static jstring GET_DEVICE_UNIQUE_ID_OK_COUNT();
		static jstring GET_KEY_REQUEST_ERROR_COUNT();
		static jstring GET_KEY_REQUEST_ERROR_LIST();
		static jstring GET_KEY_REQUEST_OK_COUNT();
		static jstring GET_KEY_REQUEST_OK_TIME_MICROS();
		static jstring GET_PROVISION_REQUEST_ERROR_COUNT();
		static jstring GET_PROVISION_REQUEST_ERROR_LIST();
		static jstring GET_PROVISION_REQUEST_OK_COUNT();
		static jstring KEY_STATUS_EXPIRED_COUNT();
		static jstring KEY_STATUS_INTERNAL_ERROR_COUNT();
		static jstring KEY_STATUS_OUTPUT_NOT_ALLOWED_COUNT();
		static jstring KEY_STATUS_PENDING_COUNT();
		static jstring KEY_STATUS_USABLE_COUNT();
		static jstring OPEN_SESSION_ERROR_COUNT();
		static jstring OPEN_SESSION_ERROR_LIST();
		static jstring OPEN_SESSION_OK_COUNT();
		static jstring PROVIDE_KEY_RESPONSE_ERROR_COUNT();
		static jstring PROVIDE_KEY_RESPONSE_ERROR_LIST();
		static jstring PROVIDE_KEY_RESPONSE_OK_COUNT();
		static jstring PROVIDE_KEY_RESPONSE_OK_TIME_MICROS();
		static jstring PROVIDE_PROVISION_RESPONSE_ERROR_COUNT();
		static jstring PROVIDE_PROVISION_RESPONSE_ERROR_LIST();
		static jstring PROVIDE_PROVISION_RESPONSE_OK_COUNT();
		static jstring SESSION_END_TIMES_MS();
		static jstring SESSION_START_TIMES_MS();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
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
	
	// Constructors
	void MediaDrm_MetricsConstants::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrm$MetricsConstants",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaDrm_MetricsConstants : public __jni_impl::android::media::MediaDrm_MetricsConstants
	{
	public:
		MediaDrm_MetricsConstants(QAndroidJniObject obj) { __thiz = obj; }
		MediaDrm_MetricsConstants()
		{
			__constructor();
		}
	};
} // namespace android::media

