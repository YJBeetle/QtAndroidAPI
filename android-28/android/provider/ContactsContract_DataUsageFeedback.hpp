#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_DataUsageFeedback : public __JniBaseClass
	{
	public:
		// Fields
		static android::net::Uri DELETE_USAGE_URI();
		static android::net::Uri FEEDBACK_URI();
		static jstring USAGE_TYPE();
		static jstring USAGE_TYPE_CALL();
		static jstring USAGE_TYPE_LONG_TEXT();
		static jstring USAGE_TYPE_SHORT_TEXT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_DataUsageFeedback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_DataUsageFeedback(QAndroidJniObject obj);
		
		// Constructors
		ContactsContract_DataUsageFeedback();
		
		// Methods
	};
} // namespace android::provider

