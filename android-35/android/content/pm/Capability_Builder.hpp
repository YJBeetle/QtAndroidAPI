#pragma once

#include "./Capability.def.hpp"
#include "../../../JString.hpp"
#include "./Capability_Builder.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	inline Capability_Builder::Capability_Builder(JString arg0)
		: JObject(
			"android.content.pm.Capability$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::content::pm::Capability Capability_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/pm/Capability;"
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
