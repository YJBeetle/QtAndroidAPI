#include "./SipSession_State.hpp"

namespace android::net::sip
{
	// Fields
	jint SipSession_State::DEREGISTERING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"DEREGISTERING"
		);
	}
	jint SipSession_State::INCOMING_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"INCOMING_CALL"
		);
	}
	jint SipSession_State::INCOMING_CALL_ANSWERING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"INCOMING_CALL_ANSWERING"
		);
	}
	jint SipSession_State::IN_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"IN_CALL"
		);
	}
	jint SipSession_State::NOT_DEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"NOT_DEFINED"
		);
	}
	jint SipSession_State::OUTGOING_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"OUTGOING_CALL"
		);
	}
	jint SipSession_State::OUTGOING_CALL_CANCELING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"OUTGOING_CALL_CANCELING"
		);
	}
	jint SipSession_State::OUTGOING_CALL_RING_BACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"OUTGOING_CALL_RING_BACK"
		);
	}
	jint SipSession_State::PINGING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"PINGING"
		);
	}
	jint SipSession_State::READY_TO_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"READY_TO_CALL"
		);
	}
	jint SipSession_State::REGISTERING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"REGISTERING"
		);
	}
	
	// QAndroidJniObject forward
	SipSession_State::SipSession_State(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring SipSession_State::toString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.sip.SipSession$State",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::net::sip

