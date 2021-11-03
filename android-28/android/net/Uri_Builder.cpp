#include "./Uri.hpp"
#include "./Uri_Builder.hpp"

namespace android::net
{
	// Fields
	
	// QJniObject forward
	Uri_Builder::Uri_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Uri_Builder::Uri_Builder()
		: JObject(
			"android.net.Uri$Builder",
			"()V"
		) {}
	
	// Methods
	android::net::Uri_Builder Uri_Builder::appendEncodedPath(jstring arg0)
	{
		return callObjectMethod(
			"appendEncodedPath",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	android::net::Uri_Builder Uri_Builder::appendPath(jstring arg0)
	{
		return callObjectMethod(
			"appendPath",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	android::net::Uri_Builder Uri_Builder::appendQueryParameter(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"appendQueryParameter",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0,
			arg1
		);
	}
	android::net::Uri_Builder Uri_Builder::authority(jstring arg0)
	{
		return callObjectMethod(
			"authority",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	android::net::Uri Uri_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/Uri;"
		);
	}
	android::net::Uri_Builder Uri_Builder::clearQuery()
	{
		return callObjectMethod(
			"clearQuery",
			"()Landroid/net/Uri$Builder;"
		);
	}
	android::net::Uri_Builder Uri_Builder::encodedAuthority(jstring arg0)
	{
		return callObjectMethod(
			"encodedAuthority",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	android::net::Uri_Builder Uri_Builder::encodedFragment(jstring arg0)
	{
		return callObjectMethod(
			"encodedFragment",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	android::net::Uri_Builder Uri_Builder::encodedOpaquePart(jstring arg0)
	{
		return callObjectMethod(
			"encodedOpaquePart",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	android::net::Uri_Builder Uri_Builder::encodedPath(jstring arg0)
	{
		return callObjectMethod(
			"encodedPath",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	android::net::Uri_Builder Uri_Builder::encodedQuery(jstring arg0)
	{
		return callObjectMethod(
			"encodedQuery",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	android::net::Uri_Builder Uri_Builder::fragment(jstring arg0)
	{
		return callObjectMethod(
			"fragment",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	android::net::Uri_Builder Uri_Builder::opaquePart(jstring arg0)
	{
		return callObjectMethod(
			"opaquePart",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	android::net::Uri_Builder Uri_Builder::path(jstring arg0)
	{
		return callObjectMethod(
			"path",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	android::net::Uri_Builder Uri_Builder::query(jstring arg0)
	{
		return callObjectMethod(
			"query",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	android::net::Uri_Builder Uri_Builder::scheme(jstring arg0)
	{
		return callObjectMethod(
			"scheme",
			"(Ljava/lang/String;)Landroid/net/Uri$Builder;",
			arg0
		);
	}
	jstring Uri_Builder::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net

