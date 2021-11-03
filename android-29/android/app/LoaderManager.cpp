#include "../content/Loader.hpp"
#include "../os/Bundle.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./LoaderManager.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	LoaderManager::LoaderManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LoaderManager::LoaderManager()
		: JObject(
			"android.app.LoaderManager",
			"()V"
		) {}
	
	// Methods
	void LoaderManager::enableDebugLogging(jboolean arg0)
	{
		callStaticMethod<void>(
			"android.app.LoaderManager",
			"enableDebugLogging",
			"(Z)V",
			arg0
		);
	}
	void LoaderManager::destroyLoader(jint arg0)
	{
		callMethod<void>(
			"destroyLoader",
			"(I)V",
			arg0
		);
	}
	void LoaderManager::dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	android::content::Loader LoaderManager::getLoader(jint arg0)
	{
		return callObjectMethod(
			"getLoader",
			"(I)Landroid/content/Loader;",
			arg0
		);
	}
	android::content::Loader LoaderManager::initLoader(jint arg0, android::os::Bundle arg1, JObject arg2)
	{
		return callObjectMethod(
			"initLoader",
			"(ILandroid/os/Bundle;Landroid/app/LoaderManager$LoaderCallbacks;)Landroid/content/Loader;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	android::content::Loader LoaderManager::restartLoader(jint arg0, android::os::Bundle arg1, JObject arg2)
	{
		return callObjectMethod(
			"restartLoader",
			"(ILandroid/os/Bundle;Landroid/app/LoaderManager$LoaderCallbacks;)Landroid/content/Loader;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::app

