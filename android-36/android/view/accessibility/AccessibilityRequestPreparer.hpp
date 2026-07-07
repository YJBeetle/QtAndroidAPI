#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Message.def.hpp"
#include "../View.def.hpp"
#include "../../../JString.hpp"
#include "./AccessibilityRequestPreparer.def.hpp"

namespace android::view::accessibility
{
	// Fields
	inline jint AccessibilityRequestPreparer::REQUEST_TYPE_EXTRA_DATA()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityRequestPreparer",
			"REQUEST_TYPE_EXTRA_DATA"
		);
	}
	
	// Constructors
	inline AccessibilityRequestPreparer::AccessibilityRequestPreparer(android::view::View arg0, jint arg1)
		: JObject(
			"android.view.accessibility.AccessibilityRequestPreparer",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline android::view::View AccessibilityRequestPreparer::getView() const
	{
		return callObjectMethod(
			"getView",
			"()Landroid/view/View;"
		);
	}
	inline void AccessibilityRequestPreparer::onPrepareExtraData(jint arg0, JString arg1, android::os::Bundle arg2, android::os::Message arg3) const
	{
		callMethod<void>(
			"onPrepareExtraData",
			"(ILjava/lang/String;Landroid/os/Bundle;Landroid/os/Message;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
} // namespace android::view::accessibility

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::accessibility;
#endif
