#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class Contacts_Intents : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ATTACH_IMAGE();
		static jstring EXTRA_CREATE_DESCRIPTION();
		static jstring EXTRA_FORCE_CREATE();
		static jstring SEARCH_SUGGESTION_CLICKED();
		static jstring SEARCH_SUGGESTION_CREATE_CONTACT_CLICKED();
		static jstring SEARCH_SUGGESTION_DIAL_NUMBER_CLICKED();
		static jstring SHOW_OR_CREATE_CONTACT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Contacts_Intents(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_Intents(QAndroidJniObject obj);
		
		// Constructors
		Contacts_Intents();
		
		// Methods
	};
} // namespace android::provider

