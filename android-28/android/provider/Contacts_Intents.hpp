#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class Contacts_Intents : public JObject
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
		
		// QJniObject forward
		template<typename ...Ts> explicit Contacts_Intents(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_Intents(QJniObject obj);
		
		// Constructors
		Contacts_Intents();
		
		// Methods
	};
} // namespace android::provider

