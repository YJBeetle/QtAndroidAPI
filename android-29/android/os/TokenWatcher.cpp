#include "./Handler.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "../../JString.hpp"
#include "./TokenWatcher.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	TokenWatcher::TokenWatcher(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TokenWatcher::TokenWatcher(android::os::Handler arg0, JString arg1)
		: JObject(
			"android.os.TokenWatcher",
			"(Landroid/os/Handler;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	void TokenWatcher::acquire(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"acquire",
			"(Landroid/os/IBinder;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void TokenWatcher::acquired() const
	{
		callMethod<void>(
			"acquired",
			"()V"
		);
	}
	void TokenWatcher::cleanup(JObject arg0, jboolean arg1) const
	{
		callMethod<void>(
			"cleanup",
			"(Landroid/os/IBinder;Z)V",
			arg0.object(),
			arg1
		);
	}
	void TokenWatcher::dump() const
	{
		callMethod<void>(
			"dump",
			"()V"
		);
	}
	void TokenWatcher::dump(java::io::PrintWriter arg0) const
	{
		callMethod<void>(
			"dump",
			"(Ljava/io/PrintWriter;)V",
			arg0.object()
		);
	}
	jboolean TokenWatcher::isAcquired() const
	{
		return callMethod<jboolean>(
			"isAcquired",
			"()Z"
		);
	}
	void TokenWatcher::release(JObject arg0) const
	{
		callMethod<void>(
			"release",
			"(Landroid/os/IBinder;)V",
			arg0.object()
		);
	}
	void TokenWatcher::released() const
	{
		callMethod<void>(
			"released",
			"()V"
		);
	}
} // namespace android::os

