#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class WebResourceError : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebResourceError(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WebResourceError(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getDescription();
		jint getErrorCode();
	};
} // namespace android::webkit

