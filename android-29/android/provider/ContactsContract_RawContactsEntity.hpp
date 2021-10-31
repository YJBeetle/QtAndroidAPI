#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_RawContactsEntity : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring DATA_ID();
		static QAndroidJniObject PROFILE_CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_RawContactsEntity(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_RawContactsEntity(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

