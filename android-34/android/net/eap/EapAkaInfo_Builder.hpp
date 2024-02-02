#pragma once

#include "../../../JByteArray.hpp"
#include "./EapAkaInfo.def.hpp"
#include "./EapAkaInfo_Builder.def.hpp"

namespace android::net::eap
{
	// Fields
	
	// Constructors
	inline EapAkaInfo_Builder::EapAkaInfo_Builder()
		: JObject(
			"android.net.eap.EapAkaInfo$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::eap::EapAkaInfo EapAkaInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/eap/EapAkaInfo;"
		);
	}
	inline android::net::eap::EapAkaInfo_Builder EapAkaInfo_Builder::setReauthId(JByteArray arg0) const
	{
		return callObjectMethod(
			"setReauthId",
			"([B)Landroid/net/eap/EapAkaInfo$Builder;",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::net::eap

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::eap;
#endif
