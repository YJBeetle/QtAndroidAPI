#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./ViewDebug_RecyclerTraceType.def.hpp"

namespace android::view
{
	// Fields
	inline android::view::ViewDebug_RecyclerTraceType ViewDebug_RecyclerTraceType::BIND_VIEW()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$RecyclerTraceType",
			"BIND_VIEW",
			"Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
	inline android::view::ViewDebug_RecyclerTraceType ViewDebug_RecyclerTraceType::MOVE_FROM_ACTIVE_TO_SCRAP_HEAP()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$RecyclerTraceType",
			"MOVE_FROM_ACTIVE_TO_SCRAP_HEAP",
			"Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
	inline android::view::ViewDebug_RecyclerTraceType ViewDebug_RecyclerTraceType::MOVE_TO_SCRAP_HEAP()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$RecyclerTraceType",
			"MOVE_TO_SCRAP_HEAP",
			"Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
	inline android::view::ViewDebug_RecyclerTraceType ViewDebug_RecyclerTraceType::NEW_VIEW()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$RecyclerTraceType",
			"NEW_VIEW",
			"Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
	inline android::view::ViewDebug_RecyclerTraceType ViewDebug_RecyclerTraceType::RECYCLE_FROM_ACTIVE_HEAP()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$RecyclerTraceType",
			"RECYCLE_FROM_ACTIVE_HEAP",
			"Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
	inline android::view::ViewDebug_RecyclerTraceType ViewDebug_RecyclerTraceType::RECYCLE_FROM_SCRAP_HEAP()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$RecyclerTraceType",
			"RECYCLE_FROM_SCRAP_HEAP",
			"Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::view::ViewDebug_RecyclerTraceType ViewDebug_RecyclerTraceType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.view.ViewDebug$RecyclerTraceType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/view/ViewDebug$RecyclerTraceType;",
			arg0.object<jstring>()
		);
	}
	inline JArray ViewDebug_RecyclerTraceType::values()
	{
		return callStaticObjectMethod(
			"android.view.ViewDebug$RecyclerTraceType",
			"values",
			"()[Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
} // namespace android::view

// Base class headers
#include "../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
