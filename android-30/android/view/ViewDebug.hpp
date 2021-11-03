#pragma once

#include "../../JObject.hpp"

class JIntArray;
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
class JObject;
class JString;

namespace android::view
{
	class ViewDebug : public JObject
	{
	public:
		// Fields
		static jboolean TRACE_HIERARCHY();
		static jboolean TRACE_RECYCLER();
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewDebug(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ViewDebug(QJniObject obj);
		
		// Constructors
		ViewDebug();
		
		// Methods
		static void dumpCapturedView(JString arg0, JObject arg1);
		static void startHierarchyTracing(JString arg0, android::view::View arg1);
		static void startRecyclerTracing(JString arg0, android::view::View arg1);
		static void stopHierarchyTracing();
		static void stopRecyclerTracing();
		static void trace(android::view::View arg0, android::view::ViewDebug_HierarchyTraceType arg1);
		static void trace(android::view::View arg0, android::view::ViewDebug_RecyclerTraceType arg1, JIntArray arg2);
	};
} // namespace android::view

