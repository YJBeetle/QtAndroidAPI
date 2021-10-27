#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class WebResourceError : public __JniBaseClass
	{
	public:
		// Fields
		
		WebResourceError(QAndroidJniObject obj);
		// Constructors
		WebResourceError() = default;
		
		// Methods
		jstring getDescription();
		jint getErrorCode();
	};
} // namespace android::webkit

