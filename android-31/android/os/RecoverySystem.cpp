#include "../content/Context.hpp"
#include "../../java/io/File.hpp"
#include "./RecoverySystem.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	RecoverySystem::RecoverySystem(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void RecoverySystem::installPackage(android::content::Context arg0, java::io::File arg1)
	{
		callStaticMethod<void>(
			"android.os.RecoverySystem",
			"installPackage",
			"(Landroid/content/Context;Ljava/io/File;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RecoverySystem::rebootWipeCache(android::content::Context arg0)
	{
		callStaticMethod<void>(
			"android.os.RecoverySystem",
			"rebootWipeCache",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
	void RecoverySystem::rebootWipeUserData(android::content::Context arg0)
	{
		callStaticMethod<void>(
			"android.os.RecoverySystem",
			"rebootWipeUserData",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
	void RecoverySystem::verifyPackage(java::io::File arg0, JObject arg1, java::io::File arg2)
	{
		callStaticMethod<void>(
			"android.os.RecoverySystem",
			"verifyPackage",
			"(Ljava/io/File;Landroid/os/RecoverySystem$ProgressListener;Ljava/io/File;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::os

