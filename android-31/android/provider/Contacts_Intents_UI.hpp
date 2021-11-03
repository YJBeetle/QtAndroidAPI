#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class Contacts_Intents_UI : public JObject
	{
	public:
		// Fields
		static JString FILTER_CONTACTS_ACTION();
		static JString FILTER_TEXT_EXTRA_KEY();
		static JString GROUP_NAME_EXTRA_KEY();
		static JString LIST_ALL_CONTACTS_ACTION();
		static JString LIST_CONTACTS_WITH_PHONES_ACTION();
		static JString LIST_DEFAULT();
		static JString LIST_FREQUENT_ACTION();
		static JString LIST_GROUP_ACTION();
		static JString LIST_STARRED_ACTION();
		static JString LIST_STREQUENT_ACTION();
		static JString TITLE_EXTRA_KEY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Contacts_Intents_UI(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_Intents_UI(QAndroidJniObject obj);
		
		// Constructors
		Contacts_Intents_UI();
		
		// Methods
	};
} // namespace android::provider

