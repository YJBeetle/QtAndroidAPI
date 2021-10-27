#include "./Uri.hpp"
#include "./Uri_Builder.hpp"

namespace android::net
{
	// Fields
	
	Uri_Builder::Uri_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Uri_Builder::Uri_Builder()
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
} // namespace android::net

