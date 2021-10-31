#include "./ViewDebug_HierarchyTraceType.hpp"

namespace android::view
{
	// Fields
	android::view::ViewDebug_HierarchyTraceType ViewDebug_HierarchyTraceType::BUILD_CACHE()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"BUILD_CACHE",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	android::view::ViewDebug_HierarchyTraceType ViewDebug_HierarchyTraceType::DRAW()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"DRAW",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	android::view::ViewDebug_HierarchyTraceType ViewDebug_HierarchyTraceType::INVALIDATE()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"INVALIDATE",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	android::view::ViewDebug_HierarchyTraceType ViewDebug_HierarchyTraceType::INVALIDATE_CHILD()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"INVALIDATE_CHILD",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	android::view::ViewDebug_HierarchyTraceType ViewDebug_HierarchyTraceType::INVALIDATE_CHILD_IN_PARENT()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"INVALIDATE_CHILD_IN_PARENT",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	android::view::ViewDebug_HierarchyTraceType ViewDebug_HierarchyTraceType::ON_LAYOUT()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"ON_LAYOUT",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	android::view::ViewDebug_HierarchyTraceType ViewDebug_HierarchyTraceType::ON_MEASURE()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"ON_MEASURE",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	android::view::ViewDebug_HierarchyTraceType ViewDebug_HierarchyTraceType::REQUEST_LAYOUT()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"REQUEST_LAYOUT",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	
	// QJniObject forward
	ViewDebug_HierarchyTraceType::ViewDebug_HierarchyTraceType(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::view::ViewDebug_HierarchyTraceType ViewDebug_HierarchyTraceType::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.view.ViewDebug$HierarchyTraceType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/view/ViewDebug$HierarchyTraceType;",
			arg0
		);
	}
	jarray ViewDebug_HierarchyTraceType::values()
	{
		return callStaticObjectMethod(
			"android.view.ViewDebug$HierarchyTraceType",
			"values",
			"()[Landroid/view/ViewDebug$HierarchyTraceType;"
		).object<jarray>();
	}
} // namespace android::view

