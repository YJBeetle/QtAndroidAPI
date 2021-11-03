#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ContentResolver;
}

namespace android::provider
{
	class ContactsContract_PinnedPositions : public JObject
	{
	public:
		// Fields
		static jint DEMOTED();
		static jint UNPINNED();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_PinnedPositions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_PinnedPositions(QJniObject obj);
		
		// Constructors
		ContactsContract_PinnedPositions();
		
		// Methods
		static void pin(android::content::ContentResolver arg0, jlong arg1, jint arg2);
		static void undemote(android::content::ContentResolver arg0, jlong arg1);
	};
} // namespace android::provider

