#pragma once

#include "./ChildSessionConfiguration.def.hpp"
#include "./ChildSessionConfiguration_Builder.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	inline ChildSessionConfiguration_Builder::ChildSessionConfiguration_Builder(JObject arg0, JObject arg1)
		: JObject(
			"android.net.ipsec.ike.ChildSessionConfiguration$Builder",
			"(Ljava/util/List;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::net::ipsec::ike::ChildSessionConfiguration ChildSessionConfiguration_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/ipsec/ike/ChildSessionConfiguration;"
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ipsec::ike;
#endif
