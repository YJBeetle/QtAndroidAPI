#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewDebug_HierarchyTraceType;
}
namespace android::view
{
	class ViewDebug_RecyclerTraceType;
}

namespace android::view
{
	class ViewDebug : public __JniBaseClass
	{
	public:
		// Fields
		static jboolean TRACE_HIERARCHY();
		static jboolean TRACE_RECYCLER();
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewDebug(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ViewDebug(QJniObject obj);
		
		// Constructors
		ViewDebug();
		
		// Methods
		static void dumpCapturedView(jstring arg0, jobject arg1);
		static void startHierarchyTracing(jstring arg0, android::view::View arg1);
		static void startRecyclerTracing(jstring arg0, android::view::View arg1);
		static void stopHierarchyTracing();
		static void stopRecyclerTracing();
		static void trace(android::view::View arg0, android::view::ViewDebug_HierarchyTraceType arg1);
		static void trace(android::view::View arg0, android::view::ViewDebug_RecyclerTraceType arg1, jintArray arg2);
	};
} // namespace android::view

