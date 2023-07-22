#pragma once

#include "./ActivityManager_TaskDescription.def.hpp"
#include "../../JString.hpp"
#include "./ActivityManager_TaskDescription_Builder.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline ActivityManager_TaskDescription_Builder::ActivityManager_TaskDescription_Builder()
		: JObject(
			"android.app.ActivityManager$TaskDescription$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::app::ActivityManager_TaskDescription ActivityManager_TaskDescription_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/ActivityManager$TaskDescription;"
		);
	}
	inline android::app::ActivityManager_TaskDescription_Builder ActivityManager_TaskDescription_Builder::setBackgroundColor(jint arg0) const
	{
		return callObjectMethod(
			"setBackgroundColor",
			"(I)Landroid/app/ActivityManager$TaskDescription$Builder;",
			arg0
		);
	}
	inline android::app::ActivityManager_TaskDescription_Builder ActivityManager_TaskDescription_Builder::setIcon(jint arg0) const
	{
		return callObjectMethod(
			"setIcon",
			"(I)Landroid/app/ActivityManager$TaskDescription$Builder;",
			arg0
		);
	}
	inline android::app::ActivityManager_TaskDescription_Builder ActivityManager_TaskDescription_Builder::setLabel(JString arg0) const
	{
		return callObjectMethod(
			"setLabel",
			"(Ljava/lang/String;)Landroid/app/ActivityManager$TaskDescription$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::app::ActivityManager_TaskDescription_Builder ActivityManager_TaskDescription_Builder::setNavigationBarColor(jint arg0) const
	{
		return callObjectMethod(
			"setNavigationBarColor",
			"(I)Landroid/app/ActivityManager$TaskDescription$Builder;",
			arg0
		);
	}
	inline android::app::ActivityManager_TaskDescription_Builder ActivityManager_TaskDescription_Builder::setPrimaryColor(jint arg0) const
	{
		return callObjectMethod(
			"setPrimaryColor",
			"(I)Landroid/app/ActivityManager$TaskDescription$Builder;",
			arg0
		);
	}
	inline android::app::ActivityManager_TaskDescription_Builder ActivityManager_TaskDescription_Builder::setStatusBarColor(jint arg0) const
	{
		return callObjectMethod(
			"setStatusBarColor",
			"(I)Landroid/app/ActivityManager$TaskDescription$Builder;",
			arg0
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
