#pragma once

#include "./DirectAction.def.hpp"
#include "../content/LocusId.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JString.hpp"
#include "./DirectAction_Builder.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline DirectAction_Builder::DirectAction_Builder(JString arg0)
		: JObject(
			"android.app.DirectAction$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::app::DirectAction DirectAction_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/DirectAction;"
		);
	}
	inline android::app::DirectAction_Builder DirectAction_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/app/DirectAction$Builder;",
			arg0.object()
		);
	}
	inline android::app::DirectAction_Builder DirectAction_Builder::setLocusId(android::content::LocusId arg0) const
	{
		return callObjectMethod(
			"setLocusId",
			"(Landroid/content/LocusId;)Landroid/app/DirectAction$Builder;",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
