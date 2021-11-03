#include "../net/Uri.hpp"
#include "../../JString.hpp"
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
	UriMatcher::UriMatcher(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	UriMatcher::UriMatcher(jint arg0)
		: JObject(
			"android.content.UriMatcher",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void UriMatcher::addURI(JString arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"addURI",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	jint UriMatcher::match(android::net::Uri arg0) const
	{
		return callMethod<jint>(
			"match",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
} // namespace android::content

