#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class ContactsContract_SearchSnippets : public JObject
	{
	public:
		// Fields
		static JString DEFERRED_SNIPPETING_KEY();
		static JString SNIPPET();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_SearchSnippets(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_SearchSnippets(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ContactsContract_SearchSnippets();
		
		// Methods
	};
} // namespace android::provider

