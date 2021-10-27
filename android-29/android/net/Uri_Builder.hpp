#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::net
{
	class Uri_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject appendEncodedPath(jstring arg0);
		QAndroidJniObject appendEncodedPath(const QString &arg0);
		QAndroidJniObject appendPath(jstring arg0);
		QAndroidJniObject appendPath(const QString &arg0);
		QAndroidJniObject appendQueryParameter(jstring arg0, jstring arg1);
		QAndroidJniObject appendQueryParameter(const QString &arg0, const QString &arg1);
		QAndroidJniObject authority(jstring arg0);
		QAndroidJniObject authority(const QString &arg0);
		QAndroidJniObject build();
		QAndroidJniObject clearQuery();
		QAndroidJniObject encodedAuthority(jstring arg0);
		QAndroidJniObject encodedAuthority(const QString &arg0);
		QAndroidJniObject encodedFragment(jstring arg0);
		QAndroidJniObject encodedFragment(const QString &arg0);
		QAndroidJniObject encodedOpaquePart(jstring arg0);
		QAndroidJniObject encodedOpaquePart(const QString &arg0);
		QAndroidJniObject encodedPath(jstring arg0);
		QAndroidJniObject encodedPath(const QString &arg0);
		QAndroidJniObject encodedQuery(jstring arg0);
		QAndroidJniObject encodedQuery(const QString &arg0);
		QAndroidJniObject fragment(jstring arg0);
		QAndroidJniObject fragment(const QString &arg0);
		QAndroidJniObject opaquePart(jstring arg0);
		QAndroidJniObject opaquePart(const QString &arg0);
		QAndroidJniObject path(jstring arg0);
		QAndroidJniObject path(const QString &arg0);
		QAndroidJniObject query(jstring arg0);
		QAndroidJniObject query(const QString &arg0);
		QAndroidJniObject scheme(jstring arg0);
		QAndroidJniObject scheme(const QString &arg0);
		jstring toString();
	};
} // namespace __jni_impl::android::net

#include "./Uri.hpp"

namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void Uri_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.Uri$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Uri_Builder::appendEncodedPath(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"appendEncodedPath",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	QAndroidJniObject Uri_Builder::appendEncodedPath(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"appendEncodedPath",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Uri_Builder::appendPath(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"appendPath",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	QAndroidJniObject Uri_Builder::appendPath(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"appendPath",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Uri_Builder::appendQueryParameter(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"appendQueryParameter",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Uri_Builder::appendQueryParameter(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"appendQueryParameter",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Uri_Builder::authority(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"authority",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	QAndroidJniObject Uri_Builder::authority(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"authority",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Uri_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Uri_Builder::clearQuery()
	{
		return __thiz.callObjectMethod(
			"clearQuery",
			"()Landroid/net/Uri$Builder;"
		);
	}
	QAndroidJniObject Uri_Builder::encodedAuthority(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"encodedAuthority",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	QAndroidJniObject Uri_Builder::encodedAuthority(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"encodedAuthority",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Uri_Builder::encodedFragment(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"encodedFragment",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	QAndroidJniObject Uri_Builder::encodedFragment(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"encodedFragment",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Uri_Builder::encodedOpaquePart(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"encodedOpaquePart",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	QAndroidJniObject Uri_Builder::encodedOpaquePart(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"encodedOpaquePart",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Uri_Builder::encodedPath(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"encodedPath",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	QAndroidJniObject Uri_Builder::encodedPath(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"encodedPath",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Uri_Builder::encodedQuery(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"encodedQuery",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	QAndroidJniObject Uri_Builder::encodedQuery(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"encodedQuery",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Uri_Builder::fragment(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"fragment",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	QAndroidJniObject Uri_Builder::fragment(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"fragment",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Uri_Builder::opaquePart(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"opaquePart",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	QAndroidJniObject Uri_Builder::opaquePart(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"opaquePart",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Uri_Builder::path(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"path",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	QAndroidJniObject Uri_Builder::path(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"path",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Uri_Builder::query(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	QAndroidJniObject Uri_Builder::query(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Uri_Builder::scheme(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"scheme",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	QAndroidJniObject Uri_Builder::scheme(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"scheme",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Uri_Builder::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class Uri_Builder : public __jni_impl::android::net::Uri_Builder
	{
	public:
		Uri_Builder(QAndroidJniObject obj) { __thiz = obj; }
		Uri_Builder()
		{
			__constructor();
		}
	};
} // namespace android::net

