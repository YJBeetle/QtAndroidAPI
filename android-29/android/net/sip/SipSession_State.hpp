#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::net::sip
{
	class SipSession_State : public __JniBaseClass
	{
	public:
		// Fields
		static jint DEREGISTERING();
		static jint INCOMING_CALL();
		static jint INCOMING_CALL_ANSWERING();
		static jint IN_CALL();
		static jint NOT_DEFINED();
		static jint OUTGOING_CALL();
		static jint OUTGOING_CALL_CANCELING();
		static jint OUTGOING_CALL_RING_BACK();
		static jint PINGING();
		static jint READY_TO_CALL();
		static jint REGISTERING();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring toString(jint arg0);
	};
} // namespace __jni_impl::android::net::sip


namespace __jni_impl::android::net::sip
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
	
	// Constructors
	void SipSession_State::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipSession$State",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::net::sip

namespace android::net::sip
{
	class SipSession_State : public __jni_impl::android::net::sip::SipSession_State
	{
	public:
		SipSession_State(QAndroidJniObject obj) { __thiz = obj; }
		SipSession_State()
		{
			__constructor();
		}
	};
} // namespace android::net::sip

