#pragma once

#ifndef ANDROID_TELECOM_CALL_RTTCALL
#define ANDROID_TELECOM_CALL_RTTCALL

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::telecom
{
	class Call_RttCall : public __JniBaseClass
	{
	public:
		// Fields
		static jint RTT_MODE_FULL();
		static jint RTT_MODE_HCO();
		static jint RTT_MODE_VCO();
		
		// Constructors
		void __constructor();
		
		// Methods
		void write(jstring arg0);
		jstring read();
		jstring readImmediately();
		jint getRttAudioMode();
		void setRttMode(jint arg0);
	};
} // namespace __jni_impl::android::telecom


namespace __jni_impl::android::telecom
{
	// Fields
	jint Call_RttCall::RTT_MODE_FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$RttCall",
			"RTT_MODE_FULL"
		);
	}
	jint Call_RttCall::RTT_MODE_HCO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$RttCall",
			"RTT_MODE_HCO"
		);
	}
	jint Call_RttCall::RTT_MODE_VCO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$RttCall",
			"RTT_MODE_VCO"
		);
	}
	
	// Constructors
	void Call_RttCall::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.Call$RttCall",
			"(V)V");
	}
	
	// Methods
	void Call_RttCall::write(jstring arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring Call_RttCall::read()
	{
		return __thiz.callObjectMethod(
			"read",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Call_RttCall::readImmediately()
	{
		return __thiz.callObjectMethod(
			"readImmediately",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Call_RttCall::getRttAudioMode()
	{
		return __thiz.callMethod<jint>(
			"getRttAudioMode",
			"()I"
		);
	}
	void Call_RttCall::setRttMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRttMode",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class Call_RttCall : public __jni_impl::android::telecom::Call_RttCall
	{
	public:
		Call_RttCall(QAndroidJniObject obj) { __thiz = obj; }
		Call_RttCall()
		{
			__constructor();
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_CALL_RTTCALL

