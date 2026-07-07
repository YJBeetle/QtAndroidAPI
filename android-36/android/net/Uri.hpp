#pragma once

#include "./Uri_Builder.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../java/io/File.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Uri.def.hpp"

namespace android::net
{
	// Fields
	inline JObject Uri::CREATOR()
	{
		return getStaticObjectField(
			"android.net.Uri",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline android::net::Uri Uri::EMPTY()
	{
		return getStaticObjectField(
			"android.net.Uri",
			"EMPTY",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString Uri::decode(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.Uri",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString Uri::encode(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.Uri",
			"encode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString Uri::encode(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.net.Uri",
			"encode",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::net::Uri Uri::fromFile(java::io::File arg0)
	{
		return callStaticObjectMethod(
			"android.net.Uri",
			"fromFile",
			"(Ljava/io/File;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	inline android::net::Uri Uri::fromParts(JString arg0, JString arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.net.Uri",
			"fromParts",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline android::net::Uri Uri::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.Uri",
			"parse",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
	inline android::net::Uri Uri::withAppendedPath(android::net::Uri arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.net.Uri",
			"withAppendedPath",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void Uri::writeToParcel(android::os::Parcel arg0, android::net::Uri arg1)
	{
		callStaticMethod<void>(
			"android.net.Uri",
			"writeToParcel",
			"(Landroid/os/Parcel;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::net::Uri_Builder Uri::buildUpon() const
	{
		return callObjectMethod(
			"buildUpon",
			"()Landroid/net/Uri$Builder;"
		);
	}
	inline jint Uri::compareTo(android::net::Uri arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
	inline jint Uri::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean Uri::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString Uri::getAuthority() const
	{
		return callObjectMethod(
			"getAuthority",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean Uri::getBooleanQueryParameter(JString arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"getBooleanQueryParameter",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString Uri::getEncodedAuthority() const
	{
		return callObjectMethod(
			"getEncodedAuthority",
			"()Ljava/lang/String;"
		);
	}
	inline JString Uri::getEncodedFragment() const
	{
		return callObjectMethod(
			"getEncodedFragment",
			"()Ljava/lang/String;"
		);
	}
	inline JString Uri::getEncodedPath() const
	{
		return callObjectMethod(
			"getEncodedPath",
			"()Ljava/lang/String;"
		);
	}
	inline JString Uri::getEncodedQuery() const
	{
		return callObjectMethod(
			"getEncodedQuery",
			"()Ljava/lang/String;"
		);
	}
	inline JString Uri::getEncodedSchemeSpecificPart() const
	{
		return callObjectMethod(
			"getEncodedSchemeSpecificPart",
			"()Ljava/lang/String;"
		);
	}
	inline JString Uri::getEncodedUserInfo() const
	{
		return callObjectMethod(
			"getEncodedUserInfo",
			"()Ljava/lang/String;"
		);
	}
	inline JString Uri::getFragment() const
	{
		return callObjectMethod(
			"getFragment",
			"()Ljava/lang/String;"
		);
	}
	inline JString Uri::getHost() const
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		);
	}
	inline JString Uri::getLastPathSegment() const
	{
		return callObjectMethod(
			"getLastPathSegment",
			"()Ljava/lang/String;"
		);
	}
	inline JString Uri::getPath() const
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		);
	}
	inline JObject Uri::getPathSegments() const
	{
		return callObjectMethod(
			"getPathSegments",
			"()Ljava/util/List;"
		);
	}
	inline jint Uri::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	inline JString Uri::getQuery() const
	{
		return callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;"
		);
	}
	inline JString Uri::getQueryParameter(JString arg0) const
	{
		return callObjectMethod(
			"getQueryParameter",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JObject Uri::getQueryParameterNames() const
	{
		return callObjectMethod(
			"getQueryParameterNames",
			"()Ljava/util/Set;"
		);
	}
	inline JObject Uri::getQueryParameters(JString arg0) const
	{
		return callObjectMethod(
			"getQueryParameters",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
	inline JString Uri::getScheme() const
	{
		return callObjectMethod(
			"getScheme",
			"()Ljava/lang/String;"
		);
	}
	inline JString Uri::getSchemeSpecificPart() const
	{
		return callObjectMethod(
			"getSchemeSpecificPart",
			"()Ljava/lang/String;"
		);
	}
	inline JString Uri::getUserInfo() const
	{
		return callObjectMethod(
			"getUserInfo",
			"()Ljava/lang/String;"
		);
	}
	inline jint Uri::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Uri::isAbsolute() const
	{
		return callMethod<jboolean>(
			"isAbsolute",
			"()Z"
		);
	}
	inline jboolean Uri::isHierarchical() const
	{
		return callMethod<jboolean>(
			"isHierarchical",
			"()Z"
		);
	}
	inline jboolean Uri::isOpaque() const
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	inline jboolean Uri::isRelative() const
	{
		return callMethod<jboolean>(
			"isRelative",
			"()Z"
		);
	}
	inline android::net::Uri Uri::normalizeScheme() const
	{
		return callObjectMethod(
			"normalizeScheme",
			"()Landroid/net/Uri;"
		);
	}
	inline JString Uri::toString() const
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
