#pragma once

#include "./CapabilityParams.def.hpp"
#include "../../../JString.hpp"
#include "./CapabilityParams_Builder.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	inline CapabilityParams_Builder::CapabilityParams_Builder(JString arg0, JString arg1)
		: JObject(
			"android.content.pm.CapabilityParams$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline android::content::pm::CapabilityParams_Builder CapabilityParams_Builder::addAlias(JString arg0) const
	{
		return callObjectMethod(
			"addAlias",
			"(Ljava/lang/String;)Landroid/content/pm/CapabilityParams$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::content::pm::CapabilityParams CapabilityParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/pm/CapabilityParams;"
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
