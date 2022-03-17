#pragma once

#include "../net/Uri.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./IntentFilter_AuthorityEntry.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline IntentFilter_AuthorityEntry::IntentFilter_AuthorityEntry(JString arg0, JString arg1)
		: JObject(
			"android.content.IntentFilter$AuthorityEntry",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jboolean IntentFilter_AuthorityEntry::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString IntentFilter_AuthorityEntry::getHost() const
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		);
	}
	inline jint IntentFilter_AuthorityEntry::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	inline jint IntentFilter_AuthorityEntry::match(android::net::Uri arg0) const
	{
		return callMethod<jint>(
			"match",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
} // namespace android::content

// Base class headers

