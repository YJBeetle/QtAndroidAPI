#pragma once

#include "../net/Uri.def.hpp"
#include "./CallAttributes.def.hpp"
#include "./PhoneAccountHandle.def.hpp"
#include "../../JString.hpp"
#include "./CallAttributes_Builder.def.hpp"

namespace android::telecom
{
	// Fields
	
	// Constructors
	inline CallAttributes_Builder::CallAttributes_Builder(android::telecom::PhoneAccountHandle arg0, jint arg1, JString arg2, android::net::Uri arg3)
		: JObject(
			"android.telecom.CallAttributes$Builder",
			"(Landroid/telecom/PhoneAccountHandle;ILjava/lang/CharSequence;Landroid/net/Uri;)V",
			arg0.object(),
			arg1,
			arg2.object<jstring>(),
			arg3.object()
		) {}
	
	// Methods
	inline android::telecom::CallAttributes CallAttributes_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/telecom/CallAttributes;"
		);
	}
	inline android::telecom::CallAttributes_Builder CallAttributes_Builder::setCallCapabilities(jint arg0) const
	{
		return callObjectMethod(
			"setCallCapabilities",
			"(I)Landroid/telecom/CallAttributes$Builder;",
			arg0
		);
	}
	inline android::telecom::CallAttributes_Builder CallAttributes_Builder::setCallType(jint arg0) const
	{
		return callObjectMethod(
			"setCallType",
			"(I)Landroid/telecom/CallAttributes$Builder;",
			arg0
		);
	}
} // namespace android::telecom

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
