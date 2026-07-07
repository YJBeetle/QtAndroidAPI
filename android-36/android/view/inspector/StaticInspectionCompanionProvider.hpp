#pragma once

#include "../../../JClass.hpp"
#include "./StaticInspectionCompanionProvider.def.hpp"

namespace android::view::inspector
{
	// Fields
	
	// Constructors
	inline StaticInspectionCompanionProvider::StaticInspectionCompanionProvider()
		: JObject(
			"android.view.inspector.StaticInspectionCompanionProvider",
			"()V"
		) {}
	
	// Methods
	inline JObject StaticInspectionCompanionProvider::provide(JClass arg0) const
	{
		return callObjectMethod(
			"provide",
			"(Ljava/lang/Class;)Landroid/view/inspector/InspectionCompanion;",
			arg0.object<jclass>()
		);
	}
} // namespace android::view::inspector

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inspector;
#endif
