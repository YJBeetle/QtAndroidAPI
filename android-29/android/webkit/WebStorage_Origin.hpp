#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class WebStorage_Origin : public __JniBaseClass
	{
	public:
		// Fields
		
		WebStorage_Origin(QAndroidJniObject obj);
		// Constructors
		WebStorage_Origin() = default;
		
		// Methods
		jstring getOrigin();
		jlong getQuota();
		jlong getUsage();
	};
} // namespace android::webkit

