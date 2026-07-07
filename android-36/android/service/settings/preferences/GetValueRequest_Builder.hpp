#pragma once

#include "./GetValueRequest.def.hpp"
#include "../../../../JString.hpp"
#include "./GetValueRequest_Builder.def.hpp"

namespace android::service::settings::preferences
{
	// Fields
	
	// Constructors
	inline GetValueRequest_Builder::GetValueRequest_Builder(JString arg0, JString arg1)
		: JObject(
			"android.service.settings.preferences.GetValueRequest$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline android::service::settings::preferences::GetValueRequest GetValueRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/settings/preferences/GetValueRequest;"
		);
	}
} // namespace android::service::settings::preferences

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::settings::preferences;
#endif
