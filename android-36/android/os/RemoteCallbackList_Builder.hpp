#pragma once

#include "./RemoteCallbackList.def.hpp"
#include "./RemoteCallbackList_Builder.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline RemoteCallbackList_Builder::RemoteCallbackList_Builder(jint arg0)
		: JObject(
			"android.os.RemoteCallbackList$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::os::RemoteCallbackList RemoteCallbackList_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/os/RemoteCallbackList;"
		);
	}
	inline android::os::RemoteCallbackList_Builder RemoteCallbackList_Builder::setExecutor(JObject arg0) const
	{
		return callObjectMethod(
			"setExecutor",
			"(Ljava/util/concurrent/Executor;)Landroid/os/RemoteCallbackList$Builder;",
			arg0.object()
		);
	}
	inline android::os::RemoteCallbackList_Builder RemoteCallbackList_Builder::setInterfaceDiedCallback(JObject arg0) const
	{
		return callObjectMethod(
			"setInterfaceDiedCallback",
			"(Landroid/os/RemoteCallbackList$Builder$InterfaceDiedCallback;)Landroid/os/RemoteCallbackList$Builder;",
			arg0.object()
		);
	}
	inline android::os::RemoteCallbackList_Builder RemoteCallbackList_Builder::setMaxQueueSize(jint arg0) const
	{
		return callObjectMethod(
			"setMaxQueueSize",
			"(I)Landroid/os/RemoteCallbackList$Builder;",
			arg0
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
