#include "./GroupCall.hpp"

namespace android::telephony::mbms
{
	// Fields
	jint GroupCall::REASON_BY_USER_REQUEST()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_BY_USER_REQUEST"
		);
	}
	jint GroupCall::REASON_FREQUENCY_CONFLICT()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_FREQUENCY_CONFLICT"
		);
	}
	jint GroupCall::REASON_LEFT_MBMS_BROADCAST_AREA()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_LEFT_MBMS_BROADCAST_AREA"
		);
	}
	jint GroupCall::REASON_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_NONE"
		);
	}
	jint GroupCall::REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE"
		);
	}
	jint GroupCall::REASON_OUT_OF_MEMORY()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_OUT_OF_MEMORY"
		);
	}
	jint GroupCall::STATE_STALLED()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"STATE_STALLED"
		);
	}
	jint GroupCall::STATE_STARTED()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"STATE_STARTED"
		);
	}
	jint GroupCall::STATE_STOPPED()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"STATE_STOPPED"
		);
	}
	
	// QJniObject forward
	GroupCall::GroupCall(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void GroupCall::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jlong GroupCall::getTmgi()
	{
		return callMethod<jlong>(
			"getTmgi",
			"()J"
		);
	}
	void GroupCall::updateGroupCall(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"updateGroupCall",
			"(Ljava/util/List;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::telephony::mbms

