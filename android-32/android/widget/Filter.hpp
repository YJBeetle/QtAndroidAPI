#pragma once

#include "./Filter_FilterResults.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "./Filter.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline Filter::Filter()
		: JObject(
			"android.widget.Filter",
			"()V"
		) {}
	
	// Methods
	inline JString Filter::convertResultToString(JObject arg0) const
	{
		return callObjectMethod(
			"convertResultToString",
			"(Ljava/lang/Object;)Ljava/lang/CharSequence;",
			arg0.object<jobject>()
		);
	}
	inline void Filter::filter(JString arg0) const
	{
		callMethod<void>(
			"filter",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void Filter::filter(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"filter",
			"(Ljava/lang/CharSequence;Landroid/widget/Filter$FilterListener;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::widget

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
