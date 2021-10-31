#include "./Call_RttCall.hpp"

namespace android::telecom
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
	
	Call_RttCall::Call_RttCall(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint Call_RttCall::getRttAudioMode()
	{
		return __thiz.callMethod<jint>(
			"getRttAudioMode",
			"()I"
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
	void Call_RttCall::setRttMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRttMode",
			"(I)V",
			arg0
		);
	}
	void Call_RttCall::write(jstring arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::telecom

