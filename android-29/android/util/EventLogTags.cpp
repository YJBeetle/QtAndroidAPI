#include "./EventLogTags_Description.hpp"
#include "../../java/io/BufferedReader.hpp"
#include "./EventLogTags.hpp"

namespace android::util
{
	// Fields
	
	EventLogTags::EventLogTags(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EventLogTags::EventLogTags()
	{
		__thiz = QAndroidJniObject(
			"android.util.EventLogTags",
			"()V"
		);
	}
	EventLogTags::EventLogTags(java::io::BufferedReader arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.EventLogTags",
			"(Ljava/io/BufferedReader;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject EventLogTags::get(jint arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I)Landroid/util/EventLogTags$Description;",
			arg0
		);
	}
	QAndroidJniObject EventLogTags::get(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Landroid/util/EventLogTags$Description;",
			arg0
		);
	}
} // namespace android::util

