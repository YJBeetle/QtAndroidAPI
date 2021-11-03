#include "./EventLogTags_Description.hpp"

namespace android::util
{
	// Fields
	jstring EventLogTags_Description::mName()
	{
		return getObjectField(
			"mName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint EventLogTags_Description::mTag()
	{
		return getField<jint>(
			"mTag"
		);
	}
	
	// QJniObject forward
	EventLogTags_Description::EventLogTags_Description(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::util

