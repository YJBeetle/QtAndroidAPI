#pragma once

#include "../app/Dialog.def.hpp"
#include "../view/View.def.hpp"
#include "../widget/AdapterView.def.hpp"
#include "../widget/ListView.def.hpp"
#include "./PreferenceScreen.def.hpp"

namespace android::preference
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void PreferenceScreen::bind(android::widget::ListView arg0) const
	{
		callMethod<void>(
			"bind",
			"(Landroid/widget/ListView;)V",
			arg0.object()
		);
	}
	inline android::app::Dialog PreferenceScreen::getDialog() const
	{
		return callObjectMethod(
			"getDialog",
			"()Landroid/app/Dialog;"
		);
	}
	inline JObject PreferenceScreen::getRootAdapter() const
	{
		return callObjectMethod(
			"getRootAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	inline void PreferenceScreen::onDismiss(JObject arg0) const
	{
		callMethod<void>(
			"onDismiss",
			"(Landroid/content/DialogInterface;)V",
			arg0.object()
		);
	}
	inline void PreferenceScreen::onItemClick(android::widget::AdapterView arg0, android::view::View arg1, jint arg2, jlong arg3) const
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
} // namespace android::preference

// Base class headers
#include "./Preference.hpp"
#include "./PreferenceGroup.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::preference;
#endif
