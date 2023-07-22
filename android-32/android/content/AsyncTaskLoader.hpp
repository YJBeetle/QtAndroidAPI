#pragma once

#include "../../JArray.hpp"
#include "./Context.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../java/io/PrintWriter.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AsyncTaskLoader.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline AsyncTaskLoader::AsyncTaskLoader(android::content::Context arg0)
		: android::content::Loader(
			"android.content.AsyncTaskLoader",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void AsyncTaskLoader::cancelLoadInBackground() const
	{
		callMethod<void>(
			"cancelLoadInBackground",
			"()V"
		);
	}
	inline void AsyncTaskLoader::dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const
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
	inline jboolean AsyncTaskLoader::isLoadInBackgroundCanceled() const
	{
		return callMethod<jboolean>(
			"isLoadInBackgroundCanceled",
			"()Z"
		);
	}
	inline JObject AsyncTaskLoader::loadInBackground() const
	{
		return callObjectMethod(
			"loadInBackground",
			"()Ljava/lang/Object;"
		);
	}
	inline void AsyncTaskLoader::onCanceled(JObject arg0) const
	{
		callMethod<void>(
			"onCanceled",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void AsyncTaskLoader::setUpdateThrottle(jlong arg0) const
	{
		callMethod<void>(
			"setUpdateThrottle",
			"(J)V",
			arg0
		);
	}
} // namespace android::content

// Base class headers
#include "./Loader.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
