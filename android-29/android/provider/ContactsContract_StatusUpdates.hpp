#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_StatusUpdates : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject PROFILE_CONTENT_URI();
		
		ContactsContract_StatusUpdates(QAndroidJniObject obj);
		// Constructors
		ContactsContract_StatusUpdates() = default;
		
		// Methods
		static jint getPresenceIconResourceId(jint arg0);
		static jint getPresencePrecedence(jint arg0);
	};
} // namespace android::provider

