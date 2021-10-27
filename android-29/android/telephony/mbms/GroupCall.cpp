#include "./GroupCall.hpp"

namespace android::telephony::mbms
{
	// Fields
	jint GroupCall::REASON_BY_USER_REQUEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_BY_USER_REQUEST"
		);
	}
	jint GroupCall::REASON_FREQUENCY_CONFLICT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_FREQUENCY_CONFLICT"
		);
	}
	jint GroupCall::REASON_LEFT_MBMS_BROADCAST_AREA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_LEFT_MBMS_BROADCAST_AREA"
		);
	}
	jint GroupCall::REASON_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_NONE"
		);
	}
	jint GroupCall::REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE"
		);
	}
	jint GroupCall::REASON_OUT_OF_MEMORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_OUT_OF_MEMORY"
		);
	}
	jint GroupCall::STATE_STALLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"STATE_STALLED"
		);
	}
	jint GroupCall::STATE_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"STATE_STARTED"
		);
	}
	jint GroupCall::STATE_STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"STATE_STOPPED"
		);
	}
	
	GroupCall::GroupCall(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void GroupCall::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jlong GroupCall::getTmgi()
	{
		return __thiz.callMethod<jlong>(
			"getTmgi",
			"()J"
		);
	}
	void GroupCall::updateGroupCall(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"updateGroupCall",
			"(Ljava/util/List;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::telephony::mbms

