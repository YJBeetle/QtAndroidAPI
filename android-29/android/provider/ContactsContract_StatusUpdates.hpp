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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_StatusUpdates(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_StatusUpdates(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getPresenceIconResourceId(jint arg0);
		static jint getPresencePrecedence(jint arg0);
	};
} // namespace android::provider

