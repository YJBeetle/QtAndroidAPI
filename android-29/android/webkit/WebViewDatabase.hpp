#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

namespace android::webkit
{
	class WebViewDatabase : public __JniBaseClass
	{
	public:
		// Fields
		
		WebViewDatabase(QAndroidJniObject obj);
		// Constructors
		WebViewDatabase();
		
		// Methods
		static QAndroidJniObject getInstance(android::content::Context arg0);
		void clearFormData();
		void clearHttpAuthUsernamePassword();
		void clearUsernamePassword();
		jarray getHttpAuthUsernamePassword(jstring arg0, jstring arg1);
		jboolean hasFormData();
		jboolean hasHttpAuthUsernamePassword();
		jboolean hasUsernamePassword();
		void setHttpAuthUsernamePassword(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
	};
} // namespace android::webkit

