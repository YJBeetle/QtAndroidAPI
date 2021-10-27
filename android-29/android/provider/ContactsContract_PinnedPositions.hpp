#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentResolver;
}

namespace android::provider
{
	class ContactsContract_PinnedPositions : public __JniBaseClass
	{
	public:
		// Fields
		static jint DEMOTED();
		static jint UNPINNED();
		
		ContactsContract_PinnedPositions(QAndroidJniObject obj);
		// Constructors
		ContactsContract_PinnedPositions();
		
		// Methods
		static void pin(android::content::ContentResolver arg0, jlong arg1, jint arg2);
		static void undemote(android::content::ContentResolver arg0, jlong arg1);
	};
} // namespace android::provider

