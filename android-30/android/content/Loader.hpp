#pragma once

#include "../../JArray.hpp"
#include "./Context.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../java/io/PrintWriter.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Loader.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline Loader::Loader(android::content::Context arg0)
		: JObject(
			"android.content.Loader",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void Loader::abandon() const
	{
		callMethod<void>(
			"abandon",
			"()V"
		);
	}
	inline jboolean Loader::cancelLoad() const
	{
		return callMethod<jboolean>(
			"cancelLoad",
			"()Z"
		);
	}
	inline void Loader::commitContentChanged() const
	{
		callMethod<void>(
			"commitContentChanged",
			"()V"
		);
	}
	inline JString Loader::dataToString(JObject arg0) const
	{
		return callObjectMethod(
			"dataToString",
			"(Ljava/lang/Object;)Ljava/lang/String;",
			arg0.object<jobject>()
		);
	}
	inline void Loader::deliverCancellation() const
	{
		callMethod<void>(
			"deliverCancellation",
			"()V"
		);
	}
	inline void Loader::deliverResult(JObject arg0) const
	{
		callMethod<void>(
			"deliverResult",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void Loader::dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const
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
	inline void Loader::forceLoad() const
	{
		callMethod<void>(
			"forceLoad",
			"()V"
		);
	}
	inline android::content::Context Loader::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	inline jint Loader::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline jboolean Loader::isAbandoned() const
	{
		return callMethod<jboolean>(
			"isAbandoned",
			"()Z"
		);
	}
	inline jboolean Loader::isReset() const
	{
		return callMethod<jboolean>(
			"isReset",
			"()Z"
		);
	}
	inline jboolean Loader::isStarted() const
	{
		return callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	inline void Loader::onContentChanged() const
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	inline void Loader::registerListener(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"registerListener",
			"(ILandroid/content/Loader$OnLoadCompleteListener;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Loader::registerOnLoadCanceledListener(JObject arg0) const
	{
		callMethod<void>(
			"registerOnLoadCanceledListener",
			"(Landroid/content/Loader$OnLoadCanceledListener;)V",
			arg0.object()
		);
	}
	inline void Loader::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void Loader::rollbackContentChanged() const
	{
		callMethod<void>(
			"rollbackContentChanged",
			"()V"
		);
	}
	inline void Loader::startLoading() const
	{
		callMethod<void>(
			"startLoading",
			"()V"
		);
	}
	inline void Loader::stopLoading() const
	{
		callMethod<void>(
			"stopLoading",
			"()V"
		);
	}
	inline jboolean Loader::takeContentChanged() const
	{
		return callMethod<jboolean>(
			"takeContentChanged",
			"()Z"
		);
	}
	inline JString Loader::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Loader::unregisterListener(JObject arg0) const
	{
		callMethod<void>(
			"unregisterListener",
			"(Landroid/content/Loader$OnLoadCompleteListener;)V",
			arg0.object()
		);
	}
	inline void Loader::unregisterOnLoadCanceledListener(JObject arg0) const
	{
		callMethod<void>(
			"unregisterOnLoadCanceledListener",
			"(Landroid/content/Loader$OnLoadCanceledListener;)V",
			arg0.object()
		);
	}
} // namespace android::content

// Base class headers

