#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class ContactsContract_SearchSnippets : public JObject
	{
	public:
		// Fields
		static jstring DEFERRED_SNIPPETING_KEY();
		static jstring SNIPPET();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_SearchSnippets(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_SearchSnippets(QAndroidJniObject obj);
		
		// Constructors
		ContactsContract_SearchSnippets();
		
		// Methods
	};
} // namespace android::provider

