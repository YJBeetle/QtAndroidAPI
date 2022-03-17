#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../content/Context.def.hpp"
#include "../view/View.def.hpp"
#include "./ImageView.def.hpp"
#include "./TextView.def.hpp"
#include "../../JString.hpp"
#include "./SimpleCursorTreeAdapter.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline SimpleCursorTreeAdapter::SimpleCursorTreeAdapter(android::content::Context arg0, JObject arg1, jint arg2, JArray arg3, JIntArray arg4, jint arg5, JArray arg6, JIntArray arg7)
		: android::widget::ResourceCursorTreeAdapter(
			"android.widget.SimpleCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;I[Ljava/lang/String;[II[Ljava/lang/String;[I)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object<jarray>(),
			arg4.object<jintArray>(),
			arg5,
			arg6.object<jarray>(),
			arg7.object<jintArray>()
		) {}
	inline SimpleCursorTreeAdapter::SimpleCursorTreeAdapter(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, JArray arg4, JIntArray arg5, jint arg6, JArray arg7, JIntArray arg8)
		: android::widget::ResourceCursorTreeAdapter(
			"android.widget.SimpleCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;II[Ljava/lang/String;[II[Ljava/lang/String;[I)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4.object<jarray>(),
			arg5.object<jintArray>(),
			arg6,
			arg7.object<jarray>(),
			arg8.object<jintArray>()
		) {}
	inline SimpleCursorTreeAdapter::SimpleCursorTreeAdapter(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, JArray arg4, JIntArray arg5, jint arg6, jint arg7, JArray arg8, JIntArray arg9)
		: android::widget::ResourceCursorTreeAdapter(
			"android.widget.SimpleCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;II[Ljava/lang/String;[III[Ljava/lang/String;[I)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4.object<jarray>(),
			arg5.object<jintArray>(),
			arg6,
			arg7,
			arg8.object<jarray>(),
			arg9.object<jintArray>()
		) {}
	
	// Methods
	inline JObject SimpleCursorTreeAdapter::getViewBinder() const
	{
		return callObjectMethod(
			"getViewBinder",
			"()Landroid/widget/SimpleCursorTreeAdapter$ViewBinder;"
		);
	}
	inline void SimpleCursorTreeAdapter::setViewBinder(JObject arg0) const
	{
		callMethod<void>(
			"setViewBinder",
			"(Landroid/widget/SimpleCursorTreeAdapter$ViewBinder;)V",
			arg0.object()
		);
	}
	inline void SimpleCursorTreeAdapter::setViewText(android::widget::TextView arg0, JString arg1) const
	{
		callMethod<void>(
			"setViewText",
			"(Landroid/widget/TextView;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
} // namespace android::widget

// Base class headers
#include "./BaseExpandableListAdapter.hpp"
#include "./CursorTreeAdapter.hpp"
#include "./ResourceCursorTreeAdapter.hpp"

