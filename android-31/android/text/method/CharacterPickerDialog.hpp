#pragma once

#include "../../content/Context.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../view/View.def.hpp"
#include "../../widget/AdapterView.def.hpp"
#include "../../../JString.hpp"
#include "./CharacterPickerDialog.def.hpp"

namespace android::text::method
{
	// Fields
	
	// Constructors
	inline CharacterPickerDialog::CharacterPickerDialog(android::content::Context arg0, android::view::View arg1, JObject arg2, JString arg3, jboolean arg4)
		: android::app::Dialog(
			"android.text.method.CharacterPickerDialog",
			"(Landroid/content/Context;Landroid/view/View;Landroid/text/Editable;Ljava/lang/String;Z)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jstring>(),
			arg4
		) {}
	
	// Methods
	inline void CharacterPickerDialog::onClick(android::view::View arg0) const
	{
		callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void CharacterPickerDialog::onItemClick(android::widget::AdapterView arg0, android::view::View arg1, jint arg2, jlong arg3) const
	{
		callMethod<void>(
			"onItemClick",
			"(Landroid/widget/AdapterView;Landroid/view/View;IJ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
} // namespace android::text::method

// Base class headers
#include "../../app/Dialog.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::method;
#endif
