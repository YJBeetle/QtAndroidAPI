#pragma once

#include "../../../JByteArray.hpp"
#include "./EapSessionConfig_EapAkaOption.def.hpp"
#include "./EapSessionConfig_EapAkaOption_Builder.def.hpp"

namespace android::net::eap
{
	// Fields
	
	// Constructors
	inline EapSessionConfig_EapAkaOption_Builder::EapSessionConfig_EapAkaOption_Builder()
		: JObject(
			"android.net.eap.EapSessionConfig$EapAkaOption$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::eap::EapSessionConfig_EapAkaOption EapSessionConfig_EapAkaOption_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/eap/EapSessionConfig$EapAkaOption;"
		);
	}
	inline android::net::eap::EapSessionConfig_EapAkaOption_Builder EapSessionConfig_EapAkaOption_Builder::setReauthId(JByteArray arg0) const
	{
		return callObjectMethod(
			"setReauthId",
			"([B)Landroid/net/eap/EapSessionConfig$EapAkaOption$Builder;",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::net::eap

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::eap;
#endif
