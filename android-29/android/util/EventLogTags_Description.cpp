#include "./EventLogTags_Description.hpp"

namespace android::util
{
	// Fields
	jstring EventLogTags_Description::mName()
	{
		return __thiz.getObjectField(
			"mName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint EventLogTags_Description::mTag()
	{
		return __thiz.getField<jint>(
			"mTag"
		);
	}
	
	EventLogTags_Description::EventLogTags_Description(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::util

