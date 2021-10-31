#include "./Uri_Builder.hpp"
#include "../os/Parcel.hpp"
#include "../../java/io/File.hpp"
#include "./Uri.hpp"

namespace android::net
{
	// Fields
	QAndroidJniObject Uri::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.Uri",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject Uri::EMPTY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.Uri",
			"EMPTY",
			"Landroid/net/Uri;"
		);
	}
	
	// QAndroidJniObject forward
	Uri::Uri(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring Uri::decode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Uri::encode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"encode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Uri::encode(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"encode",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	QAndroidJniObject Uri::fromFile(java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"fromFile",
			"(Ljava/io/File;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	QAndroidJniObject Uri::fromParts(jstring arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"fromParts",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Uri::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"parse",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject Uri::withAppendedPath(android::net::Uri arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"withAppendedPath",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object(),
			arg1
		);
	}
	void Uri::writeToParcel(android::os::Parcel arg0, android::net::Uri arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.net.Uri",
			"writeToParcel",
			"(Landroid/os/Parcel;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject Uri::buildUpon()
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
	jint Uri::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jboolean Uri::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Uri::getAuthority()
	{
		return callObjectMethod(
			"getAuthority",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Uri::getBooleanQueryParameter(jstring arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"getBooleanQueryParameter",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	jstring Uri::getEncodedAuthority()
	{
		return callObjectMethod(
			"getEncodedAuthority",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getEncodedFragment()
	{
		return callObjectMethod(
			"getEncodedFragment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getEncodedPath()
	{
		return callObjectMethod(
			"getEncodedPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getEncodedQuery()
	{
		return callObjectMethod(
			"getEncodedQuery",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getEncodedSchemeSpecificPart()
	{
		return callObjectMethod(
			"getEncodedSchemeSpecificPart",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getEncodedUserInfo()
	{
		return callObjectMethod(
			"getEncodedUserInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getFragment()
	{
		return callObjectMethod(
			"getFragment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getHost()
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getLastPathSegment()
	{
		return callObjectMethod(
			"getLastPathSegment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getPath()
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Uri::getPathSegments()
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
	jstring Uri::getQuery()
	{
		return callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getQueryParameter(jstring arg0)
	{
		return callObjectMethod(
			"getQueryParameter",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Uri::getQueryParameterNames()
	{
		return callObjectMethod(
			"getQueryParameterNames",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject Uri::getQueryParameters(jstring arg0)
	{
		return callObjectMethod(
			"getQueryParameters",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0
		);
	}
	jstring Uri::getScheme()
	{
		return callObjectMethod(
			"getScheme",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getSchemeSpecificPart()
	{
		return callObjectMethod(
			"getSchemeSpecificPart",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getUserInfo()
	{
		return callObjectMethod(
			"getUserInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	QAndroidJniObject Uri::normalizeScheme()
	{
		return callObjectMethod(
			"normalizeScheme",
			"()Landroid/net/Uri;"
		);
	}
	jstring Uri::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net

