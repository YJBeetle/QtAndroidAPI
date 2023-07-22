#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::view
{
	class ViewDebug_HierarchyTraceType : public java::lang::Enum
	{
	public:
		// Fields
		static android::view::ViewDebug_HierarchyTraceType BUILD_CACHE();
		static android::view::ViewDebug_HierarchyTraceType DRAW();
		static android::view::ViewDebug_HierarchyTraceType INVALIDATE();
		static android::view::ViewDebug_HierarchyTraceType INVALIDATE_CHILD();
		static android::view::ViewDebug_HierarchyTraceType INVALIDATE_CHILD_IN_PARENT();
		static android::view::ViewDebug_HierarchyTraceType ON_LAYOUT();
		static android::view::ViewDebug_HierarchyTraceType ON_MEASURE();
		static android::view::ViewDebug_HierarchyTraceType REQUEST_LAYOUT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewDebug_HierarchyTraceType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ViewDebug_HierarchyTraceType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::view::ViewDebug_HierarchyTraceType valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::view

