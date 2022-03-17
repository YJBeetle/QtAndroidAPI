#pragma once

#include "../view/View.def.hpp"
#include "./AdapterView_AdapterContextMenuInfo.def.hpp"

namespace android::widget
{
	// Fields
	inline jlong AdapterView_AdapterContextMenuInfo::id()
	{
		return getField<jlong>(
			"id"
		);
	}
	inline jint AdapterView_AdapterContextMenuInfo::position()
	{
		return getField<jint>(
			"position"
		);
	}
	inline android::view::View AdapterView_AdapterContextMenuInfo::targetView()
	{
		return getObjectField(
			"targetView",
			"Landroid/view/View;"
		);
	}
	
	// Constructors
	inline AdapterView_AdapterContextMenuInfo::AdapterView_AdapterContextMenuInfo(android::view::View arg0, jint arg1, jlong arg2)
		: JObject(
			"android.widget.AdapterView$AdapterContextMenuInfo",
			"(Landroid/view/View;IJ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::widget

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
