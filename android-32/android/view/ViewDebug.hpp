#pragma once

#include "../../JIntArray.hpp"
#include "./View.def.hpp"
#include "./ViewDebug_HierarchyTraceType.def.hpp"
#include "./ViewDebug_RecyclerTraceType.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ViewDebug.def.hpp"

namespace android::view
{
	// Fields
	inline jboolean ViewDebug::TRACE_HIERARCHY()
	{
		return getStaticField<jboolean>(
			"android.view.ViewDebug",
			"TRACE_HIERARCHY"
		);
	}
	inline jboolean ViewDebug::TRACE_RECYCLER()
	{
		return getStaticField<jboolean>(
			"android.view.ViewDebug",
			"TRACE_RECYCLER"
		);
	}
	
	// Constructors
	inline ViewDebug::ViewDebug()
		: JObject(
			"android.view.ViewDebug",
			"()V"
		) {}
	
	// Methods
	inline void ViewDebug::dumpCapturedView(JString arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"android.view.ViewDebug",
			"dumpCapturedView",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline void ViewDebug::startHierarchyTracing(JString arg0, android::view::View arg1)
	{
		callStaticMethod<void>(
			"android.view.ViewDebug",
			"startHierarchyTracing",
			"(Ljava/lang/String;Landroid/view/View;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void ViewDebug::startRecyclerTracing(JString arg0, android::view::View arg1)
	{
		callStaticMethod<void>(
			"android.view.ViewDebug",
			"startRecyclerTracing",
			"(Ljava/lang/String;Landroid/view/View;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void ViewDebug::stopHierarchyTracing()
	{
		callStaticMethod<void>(
			"android.view.ViewDebug",
			"stopHierarchyTracing",
			"()V"
		);
	}
	inline void ViewDebug::stopRecyclerTracing()
	{
		callStaticMethod<void>(
			"android.view.ViewDebug",
			"stopRecyclerTracing",
			"()V"
		);
	}
	inline void ViewDebug::trace(android::view::View arg0, android::view::ViewDebug_HierarchyTraceType arg1)
	{
		callStaticMethod<void>(
			"android.view.ViewDebug",
			"trace",
			"(Landroid/view/View;Landroid/view/ViewDebug$HierarchyTraceType;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ViewDebug::trace(android::view::View arg0, android::view::ViewDebug_RecyclerTraceType arg1, JIntArray arg2)
	{
		callStaticMethod<void>(
			"android.view.ViewDebug",
			"trace",
			"(Landroid/view/View;Landroid/view/ViewDebug$RecyclerTraceType;[I)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jintArray>()
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
