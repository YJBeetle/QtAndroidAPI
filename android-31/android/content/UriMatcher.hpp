#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./UriMatcher.def.hpp"

namespace android::content
{
	// Fields
	inline jint UriMatcher::NO_MATCH()
	{
		return getStaticField<jint>(
			"android.content.UriMatcher",
			"NO_MATCH"
		);
	}
	
	// Constructors
	inline UriMatcher::UriMatcher(jint arg0)
		: JObject(
			"android.content.UriMatcher",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline void UriMatcher::addURI(JString arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"addURI",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline jint UriMatcher::match(android::net::Uri arg0) const
	{
		return callMethod<jint>(
			"match",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
