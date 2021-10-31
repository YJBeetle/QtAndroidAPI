#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class Contacts_People_Extensions : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static jstring DEFAULT_SORT_ORDER();
		static jstring PERSON_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit Contacts_People_Extensions(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_People_Extensions(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

