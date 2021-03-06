#pragma once

#ifndef ANDROID_UTIL_EVENTLOGTAGS
#define ANDROID_UTIL_EVENTLOGTAGS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class BufferedReader;
}
namespace __jni_impl::android::util
{
	class EventLogTags_Description;
}

namespace __jni_impl::android::util
{
	class EventLogTags : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::java::io::BufferedReader arg0);
		
		// Methods
		QAndroidJniObject get(jint arg0);
		QAndroidJniObject get(jstring arg0);
	};
} // namespace __jni_impl::android::util

#include "../../java/io/BufferedReader.hpp"
#include "EventLogTags_Description.hpp"

namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void EventLogTags::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.EventLogTags",
			"()V");
	}
	void EventLogTags::__constructor(__jni_impl::java::io::BufferedReader arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.EventLogTags",
			"(Ljava/io/BufferedReader;)V",
			arg0.__jniObject().object());
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
} // namespace __jni_impl::android::util

namespace android::util
{
	class EventLogTags : public __jni_impl::android::util::EventLogTags
	{
	public:
		EventLogTags(QAndroidJniObject obj) { __thiz = obj; }
		EventLogTags()
		{
			__constructor();
		}
		EventLogTags(__jni_impl::java::io::BufferedReader arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_EVENTLOGTAGS

