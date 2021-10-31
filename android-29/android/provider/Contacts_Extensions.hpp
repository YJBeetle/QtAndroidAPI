#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Contacts_Extensions : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static jstring PERSON_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Contacts_Extensions(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_Extensions(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

