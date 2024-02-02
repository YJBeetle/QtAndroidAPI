#pragma once

#include "../../app/PendingIntent.def.hpp"
#include "../../graphics/drawable/Icon.def.hpp"
#include "./ChooserAction.def.hpp"
#include "../../../JString.hpp"
#include "./ChooserAction_Builder.def.hpp"

namespace android::service::chooser
{
	// Fields
	
	// Constructors
	inline ChooserAction_Builder::ChooserAction_Builder(android::graphics::drawable::Icon arg0, JString arg1, android::app::PendingIntent arg2)
		: JObject(
			"android.service.chooser.ChooserAction$Builder",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	inline android::service::chooser::ChooserAction ChooserAction_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/chooser/ChooserAction;"
		);
	}
} // namespace android::service::chooser

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::chooser;
#endif
