#include "../../JString.hpp"
#include "./EventLogTags_Description.hpp"

namespace android::util
{
	// Fields
	JString EventLogTags_Description::mName()
	{
		return getObjectField(
			"mName",
			"Ljava/lang/String;"
		);
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

