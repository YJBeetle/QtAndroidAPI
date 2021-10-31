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
	
	Uri::Uri(QAndroidJniObject obj) { __thiz = obj; }
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
			arg0.__jniObject().object()
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
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Uri::writeToParcel(android::os::Parcel arg0, android::net::Uri arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.net.Uri",
			"writeToParcel",
			"(Landroid/os/Parcel;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Uri::buildUpon()
	{
		return __thiz.callObjectMethod(
			"buildUpon",
			"()Landroid/net/Uri$Builder;"
		);
	}
	jint Uri::compareTo(android::net::Uri arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/net/Uri;)I",
			arg0.__jniObject().object()
		);
	}
	jint Uri::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jboolean Uri::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Uri::getAuthority()
	{
		return __thiz.callObjectMethod(
			"getAuthority",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Uri::getBooleanQueryParameter(jstring arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getBooleanQueryParameter",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	jstring Uri::getEncodedAuthority()
	{
		return __thiz.callObjectMethod(
			"getEncodedAuthority",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getEncodedFragment()
	{
		return __thiz.callObjectMethod(
			"getEncodedFragment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getEncodedPath()
	{
		return __thiz.callObjectMethod(
			"getEncodedPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getEncodedQuery()
	{
		return __thiz.callObjectMethod(
			"getEncodedQuery",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getEncodedSchemeSpecificPart()
	{
		return __thiz.callObjectMethod(
			"getEncodedSchemeSpecificPart",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getEncodedUserInfo()
	{
		return __thiz.callObjectMethod(
			"getEncodedUserInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getFragment()
	{
		return __thiz.callObjectMethod(
			"getFragment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getHost()
	{
		return __thiz.callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getLastPathSegment()
	{
		return __thiz.callObjectMethod(
			"getLastPathSegment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getPath()
	{
		return __thiz.callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Uri::getPathSegments()
	{
		return __thiz.callObjectMethod(
			"getPathSegments",
			"()Ljava/util/List;"
		);
	}
	jint Uri::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jstring Uri::getQuery()
	{
		return __thiz.callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getQueryParameter(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getQueryParameter",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Uri::getQueryParameterNames()
	{
		return __thiz.callObjectMethod(
			"getQueryParameterNames",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject Uri::getQueryParameters(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getQueryParameters",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0
		);
	}
	jstring Uri::getScheme()
	{
		return __thiz.callObjectMethod(
			"getScheme",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getSchemeSpecificPart()
	{
		return __thiz.callObjectMethod(
			"getSchemeSpecificPart",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Uri::getUserInfo()
	{
		return __thiz.callObjectMethod(
			"getUserInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Uri::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Uri::isAbsolute()
	{
		return __thiz.callMethod<jboolean>(
			"isAbsolute",
			"()Z"
		);
	}
	jboolean Uri::isHierarchical()
	{
		return __thiz.callMethod<jboolean>(
			"isHierarchical",
			"()Z"
		);
	}
	jboolean Uri::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	jboolean Uri::isRelative()
	{
		return __thiz.callMethod<jboolean>(
			"isRelative",
			"()Z"
		);
	}
	QAndroidJniObject Uri::normalizeScheme()
	{
		return __thiz.callObjectMethod(
			"normalizeScheme",
			"()Landroid/net/Uri;"
		);
	}
	jstring Uri::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net

