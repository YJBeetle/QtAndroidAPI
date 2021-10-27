#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class EventLogTags_Description : public __JniBaseClass
	{
	public:
		// Fields
		jstring mName();
		jint mTag();
		
		EventLogTags_Description(QAndroidJniObject obj);
		// Constructors
		EventLogTags_Description() = default;
		
		// Methods
	};
} // namespace android::util

