#include "../../JString.hpp"
#include "./CloseGuard.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	CloseGuard::CloseGuard()
		: JObject(
			"android.util.CloseGuard",
			"()V"
		) {}
	
	// Methods
	void CloseGuard::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void CloseGuard::open(JString arg0) const
	{
		callMethod<void>(
			"open",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void CloseGuard::warnIfOpen() const
	{
		callMethod<void>(
			"warnIfOpen",
			"()V"
		);
	}
} // namespace android::util

