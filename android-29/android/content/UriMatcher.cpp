#include "../net/Uri.hpp"
#include "./UriMatcher.hpp"

namespace android::content
{
	// Fields
	jint UriMatcher::NO_MATCH()
	{
		return getStaticField<jint>(
			"android.content.UriMatcher",
			"NO_MATCH"
		);
	}
	
	// QJniObject forward
	UriMatcher::UriMatcher(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	UriMatcher::UriMatcher(jint arg0)
		: __JniBaseClass(
			"android.content.UriMatcher",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void UriMatcher::addURI(jstring arg0, jstring arg1, jint arg2)
	{
		callMethod<void>(
			"addURI",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint UriMatcher::match(android::net::Uri arg0)
	{
		return callMethod<jint>(
			"match",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
} // namespace android::content

