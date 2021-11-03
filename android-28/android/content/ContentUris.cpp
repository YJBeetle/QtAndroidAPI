#include "../net/Uri.hpp"
#include "../net/Uri_Builder.hpp"
#include "./ContentUris.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ContentUris::ContentUris(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ContentUris::ContentUris()
		: JObject(
			"android.content.ContentUris",
			"()V"
		) {}
	
	// Methods
	android::net::Uri_Builder ContentUris::appendId(android::net::Uri_Builder arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.content.ContentUris",
			"appendId",
			"(Landroid/net/Uri$Builder;J)Landroid/net/Uri$Builder;",
			arg0.object(),
			arg1
		);
	}
	jlong ContentUris::parseId(android::net::Uri arg0)
	{
		return callStaticMethod<jlong>(
			"android.content.ContentUris",
			"parseId",
			"(Landroid/net/Uri;)J",
			arg0.object()
		);
	}
	android::net::Uri ContentUris::withAppendedId(android::net::Uri arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.content.ContentUris",
			"withAppendedId",
			"(Landroid/net/Uri;J)Landroid/net/Uri;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

