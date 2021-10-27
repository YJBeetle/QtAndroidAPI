#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CallLog : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUTHORITY();
		static QAndroidJniObject CONTENT_URI();
		
		CallLog(QAndroidJniObject obj);
		// Constructors
		CallLog();
		
		// Methods
	};
} // namespace android::provider

