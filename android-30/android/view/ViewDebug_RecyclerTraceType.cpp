#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./ViewDebug_RecyclerTraceType.hpp"

namespace android::view
{
	// Fields
	android::view::ViewDebug_RecyclerTraceType ViewDebug_RecyclerTraceType::BIND_VIEW()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$RecyclerTraceType",
			"BIND_VIEW",
			"Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
	android::view::ViewDebug_RecyclerTraceType ViewDebug_RecyclerTraceType::MOVE_FROM_ACTIVE_TO_SCRAP_HEAP()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$RecyclerTraceType",
			"MOVE_FROM_ACTIVE_TO_SCRAP_HEAP",
			"Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
	android::view::ViewDebug_RecyclerTraceType ViewDebug_RecyclerTraceType::MOVE_TO_SCRAP_HEAP()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$RecyclerTraceType",
			"MOVE_TO_SCRAP_HEAP",
			"Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
	android::view::ViewDebug_RecyclerTraceType ViewDebug_RecyclerTraceType::NEW_VIEW()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$RecyclerTraceType",
			"NEW_VIEW",
			"Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
	android::view::ViewDebug_RecyclerTraceType ViewDebug_RecyclerTraceType::RECYCLE_FROM_ACTIVE_HEAP()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$RecyclerTraceType",
			"RECYCLE_FROM_ACTIVE_HEAP",
			"Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
	android::view::ViewDebug_RecyclerTraceType ViewDebug_RecyclerTraceType::RECYCLE_FROM_SCRAP_HEAP()
	{
		return getStaticObjectField(
			"android.view.ViewDebug$RecyclerTraceType",
			"RECYCLE_FROM_SCRAP_HEAP",
			"Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
	
	// QJniObject forward
	ViewDebug_RecyclerTraceType::ViewDebug_RecyclerTraceType(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::view::ViewDebug_RecyclerTraceType ViewDebug_RecyclerTraceType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.view.ViewDebug$RecyclerTraceType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/view/ViewDebug$RecyclerTraceType;",
			arg0.object<jstring>()
		);
	}
	JArray ViewDebug_RecyclerTraceType::values()
	{
		return callStaticObjectMethod(
			"android.view.ViewDebug$RecyclerTraceType",
			"values",
			"()[Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
} // namespace android::view

