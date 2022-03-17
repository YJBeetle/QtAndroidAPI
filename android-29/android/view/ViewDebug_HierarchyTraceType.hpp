#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./ViewDebug_HierarchyTraceType.def.hpp"

namespace android::view
{
	// Fields
	inline android::view::ViewDebug_HierarchyTraceType ViewDebug_HierarchyTraceType::BUILD_CACHE()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"BUILD_CACHE",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	inline android::view::ViewDebug_HierarchyTraceType ViewDebug_HierarchyTraceType::DRAW()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"DRAW",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	inline android::view::ViewDebug_HierarchyTraceType ViewDebug_HierarchyTraceType::INVALIDATE()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"INVALIDATE",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	inline android::view::ViewDebug_HierarchyTraceType ViewDebug_HierarchyTraceType::INVALIDATE_CHILD()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"INVALIDATE_CHILD",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	inline android::view::ViewDebug_HierarchyTraceType ViewDebug_HierarchyTraceType::INVALIDATE_CHILD_IN_PARENT()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"INVALIDATE_CHILD_IN_PARENT",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	inline android::view::ViewDebug_HierarchyTraceType ViewDebug_HierarchyTraceType::ON_LAYOUT()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"ON_LAYOUT",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	inline android::view::ViewDebug_HierarchyTraceType ViewDebug_HierarchyTraceType::ON_MEASURE()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"ON_MEASURE",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	inline android::view::ViewDebug_HierarchyTraceType ViewDebug_HierarchyTraceType::REQUEST_LAYOUT()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"REQUEST_LAYOUT",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::view::ViewDebug_HierarchyTraceType ViewDebug_HierarchyTraceType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.view.ViewDebug$HierarchyTraceType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/view/ViewDebug$HierarchyTraceType;",
			arg0.object<jstring>()
		);
	}
	inline JArray ViewDebug_HierarchyTraceType::values()
	{
		return callStaticObjectMethod(
			"android.view.ViewDebug$HierarchyTraceType",
			"values",
			"()[Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
} // namespace android::view

// Base class headers
#include "../../java/lang/Enum.hpp"

