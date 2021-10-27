#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri_Builder;
}
namespace __jni_impl::android::os
{
	class Parcel;
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
		static jstring decode(jstring arg0);
		static jstring decode(const QString &arg0);
		static jstring encode(jstring arg0);
		static jstring encode(const QString &arg0);
		static jstring encode(jstring arg0, jstring arg1);
		static jstring encode(const QString &arg0, const QString &arg1);
		static QAndroidJniObject fromFile(__jni_impl::java::io::File arg0);
		static QAndroidJniObject fromParts(jstring arg0, jstring arg1, jstring arg2);
		static QAndroidJniObject fromParts(const QString &arg0, const QString &arg1, const QString &arg2);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(const QString &arg0);
		static QAndroidJniObject withAppendedPath(__jni_impl::android::net::Uri arg0, jstring arg1);
		static QAndroidJniObject withAppendedPath(__jni_impl::android::net::Uri arg0, const QString &arg1);
		static void writeToParcel(__jni_impl::android::os::Parcel arg0, __jni_impl::android::net::Uri arg1);
		QAndroidJniObject buildUpon();
		jint compareTo(__jni_impl::android::net::Uri arg0);
		jint compareTo(jobject arg0);
		jboolean equals(jobject arg0);
		jstring getAuthority();
		jboolean getBooleanQueryParameter(jstring arg0, jboolean arg1);
		jboolean getBooleanQueryParameter(const QString &arg0, jboolean arg1);
		jstring getEncodedAuthority();
		jstring getEncodedFragment();
		jstring getEncodedPath();
		jstring getEncodedQuery();
		jstring getEncodedSchemeSpecificPart();
		jstring getEncodedUserInfo();
		jstring getFragment();
		jstring getHost();
		jstring getLastPathSegment();
		jstring getPath();
		QAndroidJniObject getPathSegments();
		jint getPort();
		jstring getQuery();
		jstring getQueryParameter(jstring arg0);
		jstring getQueryParameter(const QString &arg0);
		QAndroidJniObject getQueryParameterNames();
		QAndroidJniObject getQueryParameters(jstring arg0);
		QAndroidJniObject getQueryParameters(const QString &arg0);
		jstring getScheme();
		jstring getSchemeSpecificPart();
		jstring getUserInfo();
		jint hashCode();
		jboolean isAbsolute();
		jboolean isHierarchical();
		jboolean isOpaque();
		jboolean isRelative();
		QAndroidJniObject normalizeScheme();
		jstring toString();
	};
} // namespace __jni_impl::android::net

#include "./Uri_Builder.hpp"
#include "../os/Parcel.hpp"
#include "../../java/io/File.hpp"

namespace __jni_impl::android::net
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
	
	// Constructors
	void Uri::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.Uri",
			"(V)V");
	}
	
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
	jstring Uri::decode(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jstring Uri::encode(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"encode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jstring Uri::encode(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"encode",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject Uri::fromFile(__jni_impl::java::io::File arg0)
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
	QAndroidJniObject Uri::fromParts(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"fromParts",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
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
	QAndroidJniObject Uri::parse(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"parse",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Uri::withAppendedPath(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"withAppendedPath",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Uri::withAppendedPath(__jni_impl::android::net::Uri arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Uri",
			"withAppendedPath",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Uri::writeToParcel(__jni_impl::android::os::Parcel arg0, __jni_impl::android::net::Uri arg1)
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
	jint Uri::compareTo(__jni_impl::android::net::Uri arg0)
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
	jboolean Uri::getBooleanQueryParameter(const QString &arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getBooleanQueryParameter",
			"(Ljava/lang/String;Z)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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
	jstring Uri::getQueryParameter(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getQueryParameter",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject Uri::getQueryParameters(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getQueryParameters",
			"(Ljava/lang/String;)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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

