#include "./Uri_Builder.hpp"
#include "../os/Parcel.hpp"
#include "../../java/io/File.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Uri.hpp"

namespace android::net
{
	// Fields
	JObject Uri::CREATOR()
	{
		return getStaticObjectField(
			"android.net.Uri",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	android::net::Uri Uri::EMPTY()
	{
		return getStaticObjectField(
			"android.net.Uri",
			"EMPTY",
			"Landroid/net/Uri;"
		);
	}
	
	// QJniObject forward
	Uri::Uri(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString Uri::decode(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.Uri",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString Uri::encode(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.Uri",
			"encode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString Uri::encode(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.net.Uri",
			"encode",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::net::Uri Uri::fromFile(java::io::File arg0)
	{
		return callStaticObjectMethod(
			"android.net.Uri",
			"fromFile",
			"(Ljava/io/File;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	android::net::Uri Uri::fromParts(JString arg0, JString arg1, JString arg2)
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
	android::net::Uri Uri::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.Uri",
			"parse",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
	android::net::Uri Uri::withAppendedPath(android::net::Uri arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.net.Uri",
			"withAppendedPath",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void Uri::writeToParcel(android::os::Parcel arg0, android::net::Uri arg1)
	{
		callStaticMethod<void>(
			"android.net.Uri",
			"writeToParcel",
			"(Landroid/os/Parcel;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::net::Uri_Builder Uri::buildUpon() const
	{
		return callObjectMethod(
			"buildUpon",
			"()Landroid/net/Uri$Builder;"
		);
	}
	jint Uri::compareTo(android::net::Uri arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
	jint Uri::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jboolean Uri::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString Uri::getAuthority() const
	{
		return callObjectMethod(
			"getAuthority",
			"()Ljava/lang/String;"
		);
	}
	jboolean Uri::getBooleanQueryParameter(JString arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"getBooleanQueryParameter",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	JString Uri::getEncodedAuthority() const
	{
		return callObjectMethod(
			"getEncodedAuthority",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getEncodedFragment() const
	{
		return callObjectMethod(
			"getEncodedFragment",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getEncodedPath() const
	{
		return callObjectMethod(
			"getEncodedPath",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getEncodedQuery() const
	{
		return callObjectMethod(
			"getEncodedQuery",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getEncodedSchemeSpecificPart() const
	{
		return callObjectMethod(
			"getEncodedSchemeSpecificPart",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getEncodedUserInfo() const
	{
		return callObjectMethod(
			"getEncodedUserInfo",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getFragment() const
	{
		return callObjectMethod(
			"getFragment",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getHost() const
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getLastPathSegment() const
	{
		return callObjectMethod(
			"getLastPathSegment",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getPath() const
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		);
	}
	JObject Uri::getPathSegments() const
	{
		return callObjectMethod(
			"getPathSegments",
			"()Ljava/util/List;"
		);
	}
	jint Uri::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	JString Uri::getQuery() const
	{
		return callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getQueryParameter(JString arg0) const
	{
		return callObjectMethod(
			"getQueryParameter",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject Uri::getQueryParameterNames() const
	{
		return callObjectMethod(
			"getQueryParameterNames",
			"()Ljava/util/Set;"
		);
	}
	JObject Uri::getQueryParameters(JString arg0) const
	{
		return callObjectMethod(
			"getQueryParameters",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
	JString Uri::getScheme() const
	{
		return callObjectMethod(
			"getScheme",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getSchemeSpecificPart() const
	{
		return callObjectMethod(
			"getSchemeSpecificPart",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getUserInfo() const
	{
		return callObjectMethod(
			"getUserInfo",
			"()Ljava/lang/String;"
		);
	}
	jint Uri::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Uri::isAbsolute() const
	{
		return callMethod<jboolean>(
			"isAbsolute",
			"()Z"
		);
	}
	jboolean Uri::isHierarchical() const
	{
		return callMethod<jboolean>(
			"isHierarchical",
			"()Z"
		);
	}
	jboolean Uri::isOpaque() const
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	jboolean Uri::isRelative() const
	{
		return callMethod<jboolean>(
			"isRelative",
			"()Z"
		);
	}
	android::net::Uri Uri::normalizeScheme() const
	{
		return callObjectMethod(
			"normalizeScheme",
			"()Landroid/net/Uri;"
		);
	}
	JString Uri::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net

