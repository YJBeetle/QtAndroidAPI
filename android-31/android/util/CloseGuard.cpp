#include "../../JString.hpp"
#include "./CloseGuard.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	CloseGuard::CloseGuard(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CloseGuard::CloseGuard()
		: JObject(
			"android.util.CloseGuard",
			"()V"
		) {}
	
	// Methods
	void CloseGuard::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void CloseGuard::open(JString arg0)
	{
		callMethod<void>(
			"open",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void CloseGuard::warnIfOpen()
	{
		callMethod<void>(
			"warnIfOpen",
			"()V"
		);
	}
} // namespace android::util

