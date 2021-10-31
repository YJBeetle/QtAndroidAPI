#include "../net/Uri.hpp"
#include "./IntentFilter_AuthorityEntry.hpp"

namespace android::content
{
	// Fields
	
	IntentFilter_AuthorityEntry::IntentFilter_AuthorityEntry(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IntentFilter_AuthorityEntry::IntentFilter_AuthorityEntry(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentFilter$AuthorityEntry",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean IntentFilter_AuthorityEntry::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring IntentFilter_AuthorityEntry::getHost()
	{
		return __thiz.callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint IntentFilter_AuthorityEntry::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint IntentFilter_AuthorityEntry::match(android::net::Uri arg0)
	{
		return __thiz.callMethod<jint>(
			"match",
			"(Landroid/net/Uri;)I",
			arg0.__jniObject().object()
		);
	}
} // namespace android::content

