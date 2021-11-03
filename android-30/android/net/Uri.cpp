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
	
	// QAndroidJniObject forward
	Uri::Uri(QAndroidJniObject obj) : JObject(obj) {}
	
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
	android::net::Uri_Builder Uri::buildUpon()
	{
		return callObjectMethod(
			"buildUpon",
			"()Landroid/net/Uri$Builder;"
		);
	}
	jint Uri::compareTo(android::net::Uri arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
	jint Uri::compareTo(JObject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jboolean Uri::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString Uri::getAuthority()
	{
		return callObjectMethod(
			"getAuthority",
			"()Ljava/lang/String;"
		);
	}
	jboolean Uri::getBooleanQueryParameter(JString arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"getBooleanQueryParameter",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	JString Uri::getEncodedAuthority()
	{
		return callObjectMethod(
			"getEncodedAuthority",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getEncodedFragment()
	{
		return callObjectMethod(
			"getEncodedFragment",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getEncodedPath()
	{
		return callObjectMethod(
			"getEncodedPath",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getEncodedQuery()
	{
		return callObjectMethod(
			"getEncodedQuery",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getEncodedSchemeSpecificPart()
	{
		return callObjectMethod(
			"getEncodedSchemeSpecificPart",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getEncodedUserInfo()
	{
		return callObjectMethod(
			"getEncodedUserInfo",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getFragment()
	{
		return callObjectMethod(
			"getFragment",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getHost()
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getLastPathSegment()
	{
		return callObjectMethod(
			"getLastPathSegment",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getPath()
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		);
	}
	JObject Uri::getPathSegments()
	{
		return callObjectMethod(
			"getPathSegments",
			"()Ljava/util/List;"
		);
	}
	jint Uri::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	JString Uri::getQuery()
	{
		return callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getQueryParameter(JString arg0)
	{
		return callObjectMethod(
			"getQueryParameter",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject Uri::getQueryParameterNames()
	{
		return callObjectMethod(
			"getQueryParameterNames",
			"()Ljava/util/Set;"
		);
	}
	JObject Uri::getQueryParameters(JString arg0)
	{
		return callObjectMethod(
			"getQueryParameters",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
	JString Uri::getScheme()
	{
		return callObjectMethod(
			"getScheme",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getSchemeSpecificPart()
	{
		return callObjectMethod(
			"getSchemeSpecificPart",
			"()Ljava/lang/String;"
		);
	}
	JString Uri::getUserInfo()
	{
		return callObjectMethod(
			"getUserInfo",
			"()Ljava/lang/String;"
		);
	}
	jint Uri::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Uri::isAbsolute()
	{
		return callMethod<jboolean>(
			"isAbsolute",
			"()Z"
		);
	}
	jboolean Uri::isHierarchical()
	{
		return callMethod<jboolean>(
			"isHierarchical",
			"()Z"
		);
	}
	jboolean Uri::isOpaque()
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	jboolean Uri::isRelative()
	{
		return callMethod<jboolean>(
			"isRelative",
			"()Z"
		);
	}
	android::net::Uri Uri::normalizeScheme()
	{
		return callObjectMethod(
			"normalizeScheme",
			"()Landroid/net/Uri;"
		);
	}
	JString Uri::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net

