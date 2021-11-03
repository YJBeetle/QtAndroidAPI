#include "../../JString.hpp"
#include "./Call_RttCall.hpp"

namespace android::telecom
{
	// Fields
	jint Call_RttCall::RTT_MODE_FULL()
	{
		return getStaticField<jint>(
			"android.telecom.Call$RttCall",
			"RTT_MODE_FULL"
		);
	}
	jint Call_RttCall::RTT_MODE_HCO()
	{
		return getStaticField<jint>(
			"android.telecom.Call$RttCall",
			"RTT_MODE_HCO"
		);
	}
	jint Call_RttCall::RTT_MODE_VCO()
	{
		return getStaticField<jint>(
			"android.telecom.Call$RttCall",
			"RTT_MODE_VCO"
		);
	}
	
	// QAndroidJniObject forward
	Call_RttCall::Call_RttCall(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Call_RttCall::getRttAudioMode() const
	{
		return callMethod<jint>(
			"getRttAudioMode",
			"()I"
		);
	}
	JString Call_RttCall::read() const
	{
		return callObjectMethod(
			"read",
			"()Ljava/lang/String;"
		);
	}
	JString Call_RttCall::readImmediately() const
	{
		return callObjectMethod(
			"readImmediately",
			"()Ljava/lang/String;"
		);
	}
	void Call_RttCall::setRttMode(jint arg0) const
	{
		callMethod<void>(
			"setRttMode",
			"(I)V",
			arg0
		);
	}
	void Call_RttCall::write(JString arg0) const
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::telecom

