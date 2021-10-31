#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::net
{
	class MailTo : public __JniBaseClass
	{
	public:
		// Fields
		static jstring MAILTO_SCHEME();
		
		MailTo(QAndroidJniObject obj);
		// Constructors
		MailTo() = default;
		
		// Methods
		static jboolean isMailTo(jstring arg0);
		static QAndroidJniObject parse(jstring arg0);
		jstring getBody();
		jstring getCc();
		QAndroidJniObject getHeaders();
		jstring getSubject();
		jstring getTo();
		jstring toString();
	};
} // namespace android::net

