#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::net
{
	class MailTo : public __JniBaseClass
	{
	public:
		// Fields
		static jstring MAILTO_SCHEME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MailTo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MailTo(QAndroidJniObject obj);
		
		// Constructors
		
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

