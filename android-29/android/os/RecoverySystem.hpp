#pragma once

#ifndef ANDROID_OS_RECOVERYSYSTEM
#define ANDROID_OS_RECOVERYSYSTEM

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::java::io
{
	class File;
}

namespace __jni_impl::android::os
{
	class RecoverySystem : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static void installPackage(__jni_impl::android::content::Context arg0, __jni_impl::java::io::File arg1);
		static void rebootWipeCache(__jni_impl::android::content::Context arg0);
		static void rebootWipeUserData(__jni_impl::android::content::Context arg0);
		static void verifyPackage(__jni_impl::java::io::File arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::io::File arg2);
	};
} // namespace __jni_impl::android::os

#include "../content/Context.hpp"
#include "../../java/io/File.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void RecoverySystem::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.RecoverySystem",
			"(V)V");
	}
	
	// Methods
	void RecoverySystem::installPackage(__jni_impl::android::content::Context arg0, __jni_impl::java::io::File arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.RecoverySystem",
			"installPackage",
			"(Landroid/content/Context;Ljava/io/File;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RecoverySystem::rebootWipeCache(__jni_impl::android::content::Context arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.RecoverySystem",
			"rebootWipeCache",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void RecoverySystem::rebootWipeUserData(__jni_impl::android::content::Context arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.RecoverySystem",
			"rebootWipeUserData",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void RecoverySystem::verifyPackage(__jni_impl::java::io::File arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::io::File arg2)
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
} // namespace __jni_impl::android::os

namespace android::os
{
	class RecoverySystem : public __jni_impl::android::os::RecoverySystem
	{
	public:
		RecoverySystem(QAndroidJniObject obj) { __thiz = obj; }
		RecoverySystem()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_RECOVERYSYSTEM

