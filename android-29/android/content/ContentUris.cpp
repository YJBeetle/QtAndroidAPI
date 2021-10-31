#include "../net/Uri.hpp"
#include "../net/Uri_Builder.hpp"
#include "./ContentUris.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ContentUris::ContentUris(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ContentUris::ContentUris()
		: __JniBaseClass(
			"android.content.ContentUris",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject ContentUris::appendId(android::net::Uri_Builder arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentUris",
			"appendId",
			"(Landroid/net/Uri$Builder;J)Landroid/net/Uri$Builder;",
			arg0.object(),
			arg1
		);
	}
	jlong ContentUris::parseId(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.content.ContentUris",
			"parseId",
			"(Landroid/net/Uri;)J",
			arg0.object()
		);
	}
	QAndroidJniObject ContentUris::removeId(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentUris",
			"removeId",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	QAndroidJniObject ContentUris::withAppendedId(android::net::Uri arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentUris",
			"withAppendedId",
			"(Landroid/net/Uri;J)Landroid/net/Uri;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content
