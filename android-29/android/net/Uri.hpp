#pragma once

#ifndef ANDROID_NET_URI
#define ANDROID_NET_URI

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::net
{
	class Uri_Builder;
}
namespace __jni_impl::java::io
{
	class File;
}

namespace __jni_impl::android::net
{
	class Uri : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject EMPTY();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint compareTo(__jni_impl::android::net::Uri arg0);
		jint compareTo(jobject arg0);
		static QAndroidJniObject decode(jstring arg0);
		static QAndroidJniObject encode(jstring arg0);
		static QAndroidJniObject encode(jstring arg0, jstring arg1);
		jboolean isAbsolute();
		QAndroidJniObject getScheme();
		jboolean isOpaque();
		QAndroidJniObject getHost();
		jint getPort();
		QAndroidJniObject getAuthority();
		jboolean isRelative();
		QAndroidJniObject getQuery();
		QAndroidJniObject getPath();
		QAndroidJniObject getUserInfo();
		static QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject getSchemeSpecificPart();
		QAndroidJniObject getFragment();
		static void writeToParcel(__jni_impl::android::os::Parcel arg0, __jni_impl::android::net::Uri arg1);
		jboolean isHierarchical();
		QAndroidJniObject getEncodedSchemeSpecificPart();
		QAndroidJniObject getEncodedAuthority();
		QAndroidJniObject getEncodedUserInfo();
		QAndroidJniObject getEncodedPath();
		QAndroidJniObject getEncodedQuery();
		QAndroidJniObject getEncodedFragment();
		QAndroidJniObject getPathSegments();
		QAndroidJniObject getLastPathSegment();
		QAndroidJniObject buildUpon();
		static QAndroidJniObject fromFile(__jni_impl::java::io::File arg0);
		static QAndroidJniObject fromParts(jstring arg0, jstring arg1, jstring arg2);
		QAndroidJniObject getQueryParameterNames();
		QAndroidJniObject getQueryParameters(jstring arg0);
		QAndroidJniObject getQueryParameter(jstring arg0);
		jboolean getBooleanQueryParameter(jstring arg0, jboolean arg1);
		QAndroidJniObject normalizeScheme();
		static QAndroidJniObject withAppendedPath(__jni_impl::android::net::Uri arg0, jstring arg1);
	};
} // namespace __jni_impl::android::net

#include "../os/Parcel.hpp"
#include "Uri_Builder.hpp"
#include "../../java/io/File.hpp"

namespace __jni_impl::android::net
{
	// Fields
	QAndroidJniObject Uri::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.Uri",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	QAndroidJniObject Uri::EMPTY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.Uri",
			"EMPTY",
			"Landroid/net/Uri;");
	}
	
	// Constructors
	void Uri::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.Uri",
			"(V)V");
	}
	
	// Methods
	jboolean Uri::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Uri::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Uri::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint Uri::compareTo(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/net/Uri;)I",
			arg0.__jniObject().object());
	}
	jint Uri::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	QAndroidJniObject Uri::decode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Uri::encode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"encode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Uri::encode(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"encode",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	jboolean Uri::isAbsolute()
	{
		return __thiz.callMethod<jboolean>(
			"isAbsolute",
			"()Z");
	}
	QAndroidJniObject Uri::getScheme()
	{
		return __thiz.callObjectMethod(
			"getScheme",
			"()Ljava/lang/String;");
	}
	jboolean Uri::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z");
	}
	QAndroidJniObject Uri::getHost()
	{
		return __thiz.callObjectMethod(
			"getHost",
			"()Ljava/lang/String;");
	}
	jint Uri::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I");
	}
	QAndroidJniObject Uri::getAuthority()
	{
		return __thiz.callObjectMethod(
			"getAuthority",
			"()Ljava/lang/String;");
	}
	jboolean Uri::isRelative()
	{
		return __thiz.callMethod<jboolean>(
			"isRelative",
			"()Z");
	}
	QAndroidJniObject Uri::getQuery()
	{
		return __thiz.callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Uri::getPath()
	{
		return __thiz.callObjectMethod(
			"getPath",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Uri::getUserInfo()
	{
		return __thiz.callObjectMethod(
			"getUserInfo",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Uri::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"parse",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0);
	}
	QAndroidJniObject Uri::getSchemeSpecificPart()
	{
		return __thiz.callObjectMethod(
			"getSchemeSpecificPart",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Uri::getFragment()
	{
		return __thiz.callObjectMethod(
			"getFragment",
			"()Ljava/lang/String;");
	}
	void Uri::writeToParcel(__jni_impl::android::os::Parcel arg0, __jni_impl::android::net::Uri arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.net.Uri",
			"writeToParcel",
			"(Landroid/os/Parcel;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jboolean Uri::isHierarchical()
	{
		return __thiz.callMethod<jboolean>(
			"isHierarchical",
			"()Z");
	}
	QAndroidJniObject Uri::getEncodedSchemeSpecificPart()
	{
		return __thiz.callObjectMethod(
			"getEncodedSchemeSpecificPart",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Uri::getEncodedAuthority()
	{
		return __thiz.callObjectMethod(
			"getEncodedAuthority",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Uri::getEncodedUserInfo()
	{
		return __thiz.callObjectMethod(
			"getEncodedUserInfo",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Uri::getEncodedPath()
	{
		return __thiz.callObjectMethod(
			"getEncodedPath",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Uri::getEncodedQuery()
	{
		return __thiz.callObjectMethod(
			"getEncodedQuery",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Uri::getEncodedFragment()
	{
		return __thiz.callObjectMethod(
			"getEncodedFragment",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Uri::getPathSegments()
	{
		return __thiz.callObjectMethod(
			"getPathSegments",
			"()Ljava/util/List;");
	}
	QAndroidJniObject Uri::getLastPathSegment()
	{
		return __thiz.callObjectMethod(
			"getLastPathSegment",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Uri::buildUpon()
	{
		return __thiz.callObjectMethod(
			"buildUpon",
			"()Landroid/net/Uri$Builder;");
	}
	QAndroidJniObject Uri::fromFile(__jni_impl::java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"fromFile",
			"(Ljava/io/File;)Landroid/net/Uri;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Uri::fromParts(jstring arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"fromParts",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject Uri::getQueryParameterNames()
	{
		return __thiz.callObjectMethod(
			"getQueryParameterNames",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject Uri::getQueryParameters(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getQueryParameters",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0);
	}
	QAndroidJniObject Uri::getQueryParameter(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getQueryParameter",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	jboolean Uri::getBooleanQueryParameter(jstring arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getBooleanQueryParameter",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1);
	}
	QAndroidJniObject Uri::normalizeScheme()
	{
		return __thiz.callObjectMethod(
			"normalizeScheme",
			"()Landroid/net/Uri;");
	}
	QAndroidJniObject Uri::withAppendedPath(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"withAppendedPath",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class Uri : public __jni_impl::android::net::Uri
	{
	public:
		Uri(QAndroidJniObject obj) { __thiz = obj; }
		Uri()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_URI

