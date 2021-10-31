#include "./CloseGuard.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	CloseGuard::CloseGuard(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CloseGuard::CloseGuard()
		: __JniBaseClass(
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
	void CloseGuard::open(jstring arg0)
	{
		callMethod<void>(
			"open",
			"(Ljava/lang/String;)V",
			arg0
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

