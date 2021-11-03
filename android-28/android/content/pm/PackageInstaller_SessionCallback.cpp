#include "./PackageInstaller_SessionCallback.hpp"

namespace android::content::pm
{
	// Fields
	
	// QJniObject forward
	PackageInstaller_SessionCallback::PackageInstaller_SessionCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PackageInstaller_SessionCallback::PackageInstaller_SessionCallback()
		: JObject(
			"android.content.pm.PackageInstaller$SessionCallback",
			"()V"
		) {}
	
	// Methods
	void PackageInstaller_SessionCallback::onActiveChanged(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onActiveChanged",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void PackageInstaller_SessionCallback::onBadgingChanged(jint arg0) const
	{
		callMethod<void>(
			"onBadgingChanged",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_SessionCallback::onCreated(jint arg0) const
	{
		callMethod<void>(
			"onCreated",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_SessionCallback::onFinished(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onFinished",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void PackageInstaller_SessionCallback::onProgressChanged(jint arg0, jfloat arg1) const
	{
		callMethod<void>(
			"onProgressChanged",
			"(IF)V",
			arg0,
			arg1
		);
	}
} // namespace android::content::pm

