#pragma once

#include "../content/Context.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./Telephony_Threads.def.hpp"

namespace android::provider
{
	// Fields
	inline jint Telephony_Threads::BROADCAST_THREAD()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$Threads",
			"BROADCAST_THREAD"
		);
	}
	inline jint Telephony_Threads::COMMON_THREAD()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$Threads",
			"COMMON_THREAD"
		);
	}
	inline android::net::Uri Telephony_Threads::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Threads",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri Telephony_Threads::OBSOLETE_THREADS_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Threads",
			"OBSOLETE_THREADS_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jlong Telephony_Threads::getOrCreateThreadId(android::content::Context arg0, JString arg1)
	{
		return callStaticMethod<jlong>(
			"android.provider.Telephony$Threads",
			"getOrCreateThreadId",
			"(Landroid/content/Context;Ljava/lang/String;)J",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jlong Telephony_Threads::getOrCreateThreadId(android::content::Context arg0, JObject arg1)
	{
		return callStaticMethod<jlong>(
			"android.provider.Telephony$Threads",
			"getOrCreateThreadId",
			"(Landroid/content/Context;Ljava/util/Set;)J",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
