#pragma once

#include "../../JString.hpp"
#include "./Call_RttCall.def.hpp"

namespace android::telecom
{
	// Fields
	inline jint Call_RttCall::RTT_MODE_FULL()
	{
		return getStaticField<jint>(
			"android.telecom.Call$RttCall",
			"RTT_MODE_FULL"
		);
	}
	inline jint Call_RttCall::RTT_MODE_HCO()
	{
		return getStaticField<jint>(
			"android.telecom.Call$RttCall",
			"RTT_MODE_HCO"
		);
	}
	inline jint Call_RttCall::RTT_MODE_VCO()
	{
		return getStaticField<jint>(
			"android.telecom.Call$RttCall",
			"RTT_MODE_VCO"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Call_RttCall::getRttAudioMode() const
	{
		return callMethod<jint>(
			"getRttAudioMode",
			"()I"
		);
	}
	inline JString Call_RttCall::read() const
	{
		return callObjectMethod(
			"read",
			"()Ljava/lang/String;"
		);
	}
	inline JString Call_RttCall::readImmediately() const
	{
		return callObjectMethod(
			"readImmediately",
			"()Ljava/lang/String;"
		);
	}
	inline void Call_RttCall::setRttMode(jint arg0) const
	{
		callMethod<void>(
			"setRttMode",
			"(I)V",
			arg0
		);
	}
	inline void Call_RttCall::write(JString arg0) const
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::telecom

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
