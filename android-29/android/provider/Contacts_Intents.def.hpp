#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class Contacts_Intents : public JObject
	{
	public:
		// Fields
		static JString ATTACH_IMAGE();
		static JString EXTRA_CREATE_DESCRIPTION();
		static JString EXTRA_FORCE_CREATE();
		static JString SEARCH_SUGGESTION_CLICKED();
		static JString SEARCH_SUGGESTION_CREATE_CONTACT_CLICKED();
		static JString SEARCH_SUGGESTION_DIAL_NUMBER_CLICKED();
		static JString SHOW_OR_CREATE_CONTACT();
		
		// QJniObject forward
		template<typename ...Ts> explicit Contacts_Intents(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_Intents(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Contacts_Intents();
		
		// Methods
	};
} // namespace android::provider

