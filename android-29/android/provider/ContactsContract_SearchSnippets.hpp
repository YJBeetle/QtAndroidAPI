#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class ContactsContract_SearchSnippets : public __JniBaseClass
	{
	public:
		// Fields
		static jstring DEFERRED_SNIPPETING_KEY();
		static jstring SNIPPET();
		
		ContactsContract_SearchSnippets(QAndroidJniObject obj);
		// Constructors
		ContactsContract_SearchSnippets();
		
		// Methods
	};
} // namespace android::provider

