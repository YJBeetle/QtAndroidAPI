#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class Edits_Iterator;
}

namespace android::icu::text
{
	class Edits : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Edits(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Edits(QAndroidJniObject obj);
		
		// Constructors
		Edits();
		
		// Methods
		void addReplace(jint arg0, jint arg1);
		void addUnchanged(jint arg0);
		android::icu::text::Edits_Iterator getCoarseChangesIterator();
		android::icu::text::Edits_Iterator getCoarseIterator();
		android::icu::text::Edits_Iterator getFineChangesIterator();
		android::icu::text::Edits_Iterator getFineIterator();
		jboolean hasChanges();
		jint lengthDelta();
		android::icu::text::Edits mergeAndAppend(android::icu::text::Edits arg0, android::icu::text::Edits arg1);
		jint numberOfChanges();
		void reset();
	};
} // namespace android::icu::text

