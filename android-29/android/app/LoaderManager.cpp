#include "../content/Loader.hpp"
#include "../os/Bundle.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./LoaderManager.hpp"

namespace android::app
{
	// Fields
	
	LoaderManager::LoaderManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LoaderManager::LoaderManager()
	{
		__thiz = QAndroidJniObject(
			"android.app.LoaderManager",
			"()V"
		);
	}
	
	// Methods
	void LoaderManager::enableDebugLogging(jboolean arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.app.LoaderManager",
			"enableDebugLogging",
			"(Z)V",
			arg0
		);
	}
	void LoaderManager::destroyLoader(jint arg0)
	{
		__thiz.callMethod<void>(
			"destroyLoader",
			"(I)V",
			arg0
		);
	}
	void LoaderManager::dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject LoaderManager::getLoader(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLoader",
			"(I)Landroid/content/Loader;",
			arg0
		);
	}
	QAndroidJniObject LoaderManager::initLoader(jint arg0, android::os::Bundle arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"initLoader",
			"(ILandroid/os/Bundle;Landroid/app/LoaderManager$LoaderCallbacks;)Landroid/content/Loader;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject LoaderManager::restartLoader(jint arg0, android::os::Bundle arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"restartLoader",
			"(ILandroid/os/Bundle;Landroid/app/LoaderManager$LoaderCallbacks;)Landroid/content/Loader;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::app

