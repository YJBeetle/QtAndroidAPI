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
		static QAndroidJniObject DELETE_USAGE_URI();
		static QAndroidJniObject FEEDBACK_URI();
		static jstring USAGE_TYPE();
		static jstring USAGE_TYPE_CALL();
		static jstring USAGE_TYPE_LONG_TEXT();
		static jstring USAGE_TYPE_SHORT_TEXT();
		
		ContactsContract_DataUsageFeedback(QAndroidJniObject obj);
		// Constructors
		ContactsContract_DataUsageFeedback();
		
		// Methods
	};
} // namespace android::provider

