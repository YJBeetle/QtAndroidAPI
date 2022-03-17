#pragma once

#include "../net/Uri.def.hpp"
#include "../net/Uri_Builder.def.hpp"
#include "./ContentUris.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline ContentUris::ContentUris()
		: JObject(
			"android.content.ContentUris",
			"()V"
		) {}
	
	// Methods
	inline android::net::Uri_Builder ContentUris::appendId(android::net::Uri_Builder arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.content.ContentUris",
			"appendId",
			"(Landroid/net/Uri$Builder;J)Landroid/net/Uri$Builder;",
			arg0.object(),
			arg1
		);
	}
	inline jlong ContentUris::parseId(android::net::Uri arg0)
	{
		return callStaticMethod<jlong>(
			"android.content.ContentUris",
			"parseId",
			"(Landroid/net/Uri;)J",
			arg0.object()
		);
	}
	inline android::net::Uri ContentUris::removeId(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.content.ContentUris",
			"removeId",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	inline android::net::Uri ContentUris::withAppendedId(android::net::Uri arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.content.ContentUris",
			"withAppendedId",
			"(Landroid/net/Uri;J)Landroid/net/Uri;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

// Base class headers

