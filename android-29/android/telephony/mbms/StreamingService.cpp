#include "../../net/Uri.hpp"
#include "./StreamingServiceInfo.hpp"
#include "./StreamingService.hpp"

namespace android::telephony::mbms
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
	
	StreamingService::StreamingService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void StreamingService::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject StreamingService::getInfo()
	{
		return __thiz.callObjectMethod(
			"getInfo",
			"()Landroid/telephony/mbms/StreamingServiceInfo;"
		);
	}
	QAndroidJniObject StreamingService::getPlaybackUri()
	{
		return __thiz.callObjectMethod(
			"getPlaybackUri",
			"()Landroid/net/Uri;"
		);
	}
} // namespace android::telephony::mbms

