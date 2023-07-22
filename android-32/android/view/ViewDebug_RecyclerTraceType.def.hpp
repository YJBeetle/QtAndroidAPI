#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::view
{
	class ViewDebug_RecyclerTraceType : public java::lang::Enum
	{
	public:
		// Fields
		static android::view::ViewDebug_RecyclerTraceType BIND_VIEW();
		static android::view::ViewDebug_RecyclerTraceType MOVE_FROM_ACTIVE_TO_SCRAP_HEAP();
		static android::view::ViewDebug_RecyclerTraceType MOVE_TO_SCRAP_HEAP();
		static android::view::ViewDebug_RecyclerTraceType NEW_VIEW();
		static android::view::ViewDebug_RecyclerTraceType RECYCLE_FROM_ACTIVE_HEAP();
		static android::view::ViewDebug_RecyclerTraceType RECYCLE_FROM_SCRAP_HEAP();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewDebug_RecyclerTraceType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ViewDebug_RecyclerTraceType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::view::ViewDebug_RecyclerTraceType valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::view

