#pragma once

#include "./Uri.def.hpp"
#include "../../JString.hpp"
#include "./Uri_Builder.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline Uri_Builder::Uri_Builder()
		: JObject(
			"android.net.Uri$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::Uri_Builder Uri_Builder::appendEncodedPath(JString arg0) const
	{
		return callObjectMethod(
			"appendEncodedPath",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::Uri_Builder Uri_Builder::appendPath(JString arg0) const
	{
		return callObjectMethod(
			"appendPath",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::Uri_Builder Uri_Builder::appendQueryParameter(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"appendQueryParameter",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::net::Uri_Builder Uri_Builder::authority(JString arg0) const
	{
		return callObjectMethod(
			"authority",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::Uri Uri_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/Uri;"
		);
	}
	inline android::net::Uri_Builder Uri_Builder::clearQuery() const
	{
		return callObjectMethod(
			"clearQuery",
			"()Landroid/net/Uri$Builder;"
		);
	}
	inline android::net::Uri_Builder Uri_Builder::encodedAuthority(JString arg0) const
	{
		return callObjectMethod(
			"encodedAuthority",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::Uri_Builder Uri_Builder::encodedFragment(JString arg0) const
	{
		return callObjectMethod(
			"encodedFragment",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::Uri_Builder Uri_Builder::encodedOpaquePart(JString arg0) const
	{
		return callObjectMethod(
			"encodedOpaquePart",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::Uri_Builder Uri_Builder::encodedPath(JString arg0) const
	{
		return callObjectMethod(
			"encodedPath",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::Uri_Builder Uri_Builder::encodedQuery(JString arg0) const
	{
		return callObjectMethod(
			"encodedQuery",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::Uri_Builder Uri_Builder::fragment(JString arg0) const
	{
		return callObjectMethod(
			"fragment",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::Uri_Builder Uri_Builder::opaquePart(JString arg0) const
	{
		return callObjectMethod(
			"opaquePart",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::Uri_Builder Uri_Builder::path(JString arg0) const
	{
		return callObjectMethod(
			"path",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::Uri_Builder Uri_Builder::query(JString arg0) const
	{
		return callObjectMethod(
			"query",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::Uri_Builder Uri_Builder::scheme(JString arg0) const
	{
		return callObjectMethod(
			"scheme",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0.object<jstring>()
		);
	}
	inline JString Uri_Builder::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
