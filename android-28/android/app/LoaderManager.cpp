#include "../../JArray.hpp"
#include "../content/Loader.hpp"
#include "../os/Bundle.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "../../JString.hpp"
#include "./LoaderManager.hpp"

namespace android::app
{
	// Fields
	
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
	void LoaderManager::destroyLoader(jint arg0) const
	{
		callMethod<void>(
			"destroyLoader",
			"(I)V",
			arg0
		);
	}
	void LoaderManager::dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>()
		);
	}
	android::content::Loader LoaderManager::getLoader(jint arg0) const
	{
		return callObjectMethod(
			"getLoader",
			"(I)Landroid/content/Loader;",
			arg0
		);
	}
	android::content::Loader LoaderManager::initLoader(jint arg0, android::os::Bundle arg1, JObject arg2) const
	{
		return callObjectMethod(
			"initLoader",
			"(ILandroid/os/Bundle;Landroid/app/LoaderManager$LoaderCallbacks;)Landroid/content/Loader;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	android::content::Loader LoaderManager::restartLoader(jint arg0, android::os::Bundle arg1, JObject arg2) const
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

