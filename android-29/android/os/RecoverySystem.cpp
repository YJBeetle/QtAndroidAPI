#include "../content/Context.hpp"
#include "../../java/io/File.hpp"
#include "./RecoverySystem.hpp"

namespace android::os
{
	// Fields
	
	RecoverySystem::RecoverySystem(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void RecoverySystem::installPackage(android::content::Context arg0, java::io::File arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.RecoverySystem",
			"installPackage",
			"(Landroid/content/Context;Ljava/io/File;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RecoverySystem::rebootWipeCache(android::content::Context arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.RecoverySystem",
			"rebootWipeCache",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void RecoverySystem::rebootWipeUserData(android::content::Context arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.RecoverySystem",
			"rebootWipeUserData",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void RecoverySystem::verifyPackage(java::io::File arg0, __JniBaseClass arg1, java::io::File arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.RecoverySystem",
			"verifyPackage",
			"(Ljava/io/File;Landroid/os/RecoverySystem$ProgressListener;Ljava/io/File;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::os

