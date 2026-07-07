#pragma once

#include "./Handler.def.hpp"
#include "../../java/io/PrintWriter.def.hpp"
#include "../../JString.hpp"
#include "./TokenWatcher.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline TokenWatcher::TokenWatcher(android::os::Handler arg0, JString arg1)
		: JObject(
			"android.os.TokenWatcher",
			"(Landroid/os/Handler;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline void TokenWatcher::acquire(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"acquire",
			"(Landroid/os/IBinder;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void TokenWatcher::acquired() const
	{
		callMethod<void>(
			"acquired",
			"()V"
		);
	}
	inline void TokenWatcher::cleanup(JObject arg0, jboolean arg1) const
	{
		callMethod<void>(
			"cleanup",
			"(Landroid/os/IBinder;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void TokenWatcher::dump() const
	{
		callMethod<void>(
			"dump",
			"()V"
		);
	}
	inline void TokenWatcher::dump(java::io::PrintWriter arg0) const
	{
		callMethod<void>(
			"dump",
			"(Ljava/io/PrintWriter;)V",
			arg0.object()
		);
	}
	inline jboolean TokenWatcher::isAcquired() const
	{
		return callMethod<jboolean>(
			"isAcquired",
			"()Z"
		);
	}
	inline void TokenWatcher::release(JObject arg0) const
	{
		callMethod<void>(
			"release",
			"(Landroid/os/IBinder;)V",
			arg0.object()
		);
	}
	inline void TokenWatcher::released() const
	{
		callMethod<void>(
			"released",
			"()V"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
