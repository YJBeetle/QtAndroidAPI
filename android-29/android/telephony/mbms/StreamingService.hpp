#pragma once

#ifndef ANDROID_TELEPHONY_MBMS_STREAMINGSERVICE
#define ANDROID_TELEPHONY_MBMS_STREAMINGSERVICE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::telephony::mbms
{
	class StreamingServiceInfo;
}

namespace __jni_impl::android::telephony::mbms
{
	class StreamingService : public __JniBaseClass
	{
	public:
		// Fields
		static jint BROADCAST_METHOD();
		static jint REASON_BY_USER_REQUEST();
		static jint REASON_END_OF_SESSION();
		static jint REASON_FREQUENCY_CONFLICT();
		static jint REASON_LEFT_MBMS_BROADCAST_AREA();
		static jint REASON_NONE();
		static jint REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE();
		static jint REASON_OUT_OF_MEMORY();
		static jint STATE_STALLED();
		static jint STATE_STARTED();
		static jint STATE_STOPPED();
		static jint UNICAST_METHOD();
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		QAndroidJniObject getPlaybackUri();
		QAndroidJniObject getInfo();
	};
} // namespace __jni_impl::android::telephony::mbms

#include "../../net/Uri.hpp"
#include "StreamingServiceInfo.hpp"

namespace __jni_impl::android::telephony::mbms
{
	// Fields
	jint StreamingService::BROADCAST_METHOD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"BROADCAST_METHOD"
		);
	}
	jint StreamingService::REASON_BY_USER_REQUEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_BY_USER_REQUEST"
		);
	}
	jint StreamingService::REASON_END_OF_SESSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_END_OF_SESSION"
		);
	}
	jint StreamingService::REASON_FREQUENCY_CONFLICT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_FREQUENCY_CONFLICT"
		);
	}
	jint StreamingService::REASON_LEFT_MBMS_BROADCAST_AREA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_LEFT_MBMS_BROADCAST_AREA"
		);
	}
	jint StreamingService::REASON_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_NONE"
		);
	}
	jint StreamingService::REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE"
		);
	}
	jint StreamingService::REASON_OUT_OF_MEMORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_OUT_OF_MEMORY"
		);
	}
	jint StreamingService::STATE_STALLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"STATE_STALLED"
		);
	}
	jint StreamingService::STATE_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"STATE_STARTED"
		);
	}
	jint StreamingService::STATE_STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"STATE_STOPPED"
		);
	}
	jint StreamingService::UNICAST_METHOD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"UNICAST_METHOD"
		);
	}
	
	// Constructors
	void StreamingService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.StreamingService",
			"(V)V");
	}
	
	// Methods
	void StreamingService::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject StreamingService::getPlaybackUri()
	{
		return __thiz.callObjectMethod(
			"getPlaybackUri",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject StreamingService::getInfo()
	{
		return __thiz.callObjectMethod(
			"getInfo",
			"()Landroid/telephony/mbms/StreamingServiceInfo;"
		);
	}
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class StreamingService : public __jni_impl::android::telephony::mbms::StreamingService
	{
	public:
		StreamingService(QAndroidJniObject obj) { __thiz = obj; }
		StreamingService()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

#endif // ANDROID_TELEPHONY_MBMS_STREAMINGSERVICE

