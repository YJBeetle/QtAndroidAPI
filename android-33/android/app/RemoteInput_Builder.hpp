#pragma once

#include "../../JArray.hpp"
#include "./RemoteInput.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./RemoteInput_Builder.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline RemoteInput_Builder::RemoteInput_Builder(JString arg0)
		: JObject(
			"android.app.RemoteInput$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::app::RemoteInput_Builder RemoteInput_Builder::addExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"addExtras",
			"(Landroid/os/Bundle;)Landroid/app/RemoteInput$Builder;",
			arg0.object()
		);
	}
	inline android::app::RemoteInput RemoteInput_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/RemoteInput;"
		);
	}
	inline android::os::Bundle RemoteInput_Builder::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::app::RemoteInput_Builder RemoteInput_Builder::setAllowDataType(JString arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"setAllowDataType",
			"(Ljava/lang/String;Z)Landroid/app/RemoteInput$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::app::RemoteInput_Builder RemoteInput_Builder::setAllowFreeFormInput(jboolean arg0) const
	{
		return callObjectMethod(
			"setAllowFreeFormInput",
			"(Z)Landroid/app/RemoteInput$Builder;",
			arg0
		);
	}
	inline android::app::RemoteInput_Builder RemoteInput_Builder::setChoices(JArray arg0) const
	{
		return callObjectMethod(
			"setChoices",
			"([Ljava/lang/CharSequence;)Landroid/app/RemoteInput$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::app::RemoteInput_Builder RemoteInput_Builder::setEditChoicesBeforeSending(jint arg0) const
	{
		return callObjectMethod(
			"setEditChoicesBeforeSending",
			"(I)Landroid/app/RemoteInput$Builder;",
			arg0
		);
	}
	inline android::app::RemoteInput_Builder RemoteInput_Builder::setLabel(JString arg0) const
	{
		return callObjectMethod(
			"setLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/RemoteInput$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
