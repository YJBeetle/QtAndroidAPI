#include "../net/Uri.hpp"
#include "./IntentFilter_AuthorityEntry.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	IntentFilter_AuthorityEntry::IntentFilter_AuthorityEntry(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	IntentFilter_AuthorityEntry::IntentFilter_AuthorityEntry(jstring arg0, jstring arg1)
		: JObject(
			"android.content.IntentFilter$AuthorityEntry",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean IntentFilter_AuthorityEntry::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring IntentFilter_AuthorityEntry::getHost()
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint IntentFilter_AuthorityEntry::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint IntentFilter_AuthorityEntry::match(android::net::Uri arg0)
	{
		return callMethod<jint>(
			"match",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
} // namespace android::content

