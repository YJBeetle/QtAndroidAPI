#pragma once

#include "../view/SurfaceControl_Transaction.def.hpp"
#include "../view/SurfaceControlViewHost_SurfacePackage.def.hpp"
#include "../../JString.hpp"
#include "./SurfaceSyncGroup.def.hpp"

namespace android::window
{
	// Fields
	
	// Constructors
	inline SurfaceSyncGroup::SurfaceSyncGroup(JString arg0)
		: JObject(
			"android.window.SurfaceSyncGroup",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jboolean SurfaceSyncGroup::add(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"add",
			"(Landroid/view/AttachedSurfaceControl;Ljava/lang/Runnable;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean SurfaceSyncGroup::add(android::view::SurfaceControlViewHost_SurfacePackage arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"add",
			"(Landroid/view/SurfaceControlViewHost$SurfacePackage;Ljava/lang/Runnable;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SurfaceSyncGroup::addTransaction(android::view::SurfaceControl_Transaction arg0) const
	{
		callMethod<void>(
			"addTransaction",
			"(Landroid/view/SurfaceControl$Transaction;)V",
			arg0.object()
		);
	}
	inline void SurfaceSyncGroup::markSyncReady() const
	{
		callMethod<void>(
			"markSyncReady",
			"()V"
		);
	}
} // namespace android::window

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::window;
#endif
