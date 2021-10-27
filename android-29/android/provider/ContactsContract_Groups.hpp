#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_Groups : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static QAndroidJniObject CONTENT_SUMMARY_URI();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		
		ContactsContract_Groups(QAndroidJniObject obj);
		// Constructors
		ContactsContract_Groups() = default;
		
		// Methods
		static QAndroidJniObject newEntityIterator(__JniBaseClass arg0);
	};
} // namespace android::provider

