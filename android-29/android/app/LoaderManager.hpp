#pragma once

#ifndef ANDROID_APP_LOADERMANAGER
#define ANDROID_APP_LOADERMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Loader;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::app
{
	class LoaderManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getLoader(jint arg0);
		void dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3);
		QAndroidJniObject initLoader(jint arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject restartLoader(jint arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::__JniBaseClass arg2);
		void destroyLoader(jint arg0);
		static void enableDebugLogging(jboolean arg0);
	};
} // namespace __jni_impl::android::app

#include "../content/Loader.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void LoaderManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.LoaderManager",
			"()V");
	}
	
	// Methods
	QAndroidJniObject LoaderManager::getLoader(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLoader",
			"(I)Landroid/content/Loader;",
			arg0);
	}
	void LoaderManager::dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3);
	}
	QAndroidJniObject LoaderManager::initLoader(jint arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"initLoader",
			"(ILandroid/os/Bundle;Landroid/app/LoaderManager$LoaderCallbacks;)Landroid/content/Loader;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject LoaderManager::restartLoader(jint arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"restartLoader",
			"(ILandroid/os/Bundle;Landroid/app/LoaderManager$LoaderCallbacks;)Landroid/content/Loader;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void LoaderManager::destroyLoader(jint arg0)
	{
		__thiz.callMethod<void>(
			"destroyLoader",
			"(I)V",
			arg0);
	}
	void LoaderManager::enableDebugLogging(jboolean arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.app.LoaderManager",
			"enableDebugLogging",
			"(Z)V",
			arg0);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class LoaderManager : public __jni_impl::android::app::LoaderManager
	{
	public:
		LoaderManager(QAndroidJniObject obj) { __thiz = obj; }
		LoaderManager()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_LOADERMANAGER

