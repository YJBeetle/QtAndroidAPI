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
		QAndroidJniObject getCoarseChangesIterator();
		QAndroidJniObject getCoarseIterator();
		QAndroidJniObject getFineChangesIterator();
		QAndroidJniObject getFineIterator();
		jboolean hasChanges();
		jint lengthDelta();
		QAndroidJniObject mergeAndAppend(android::icu::text::Edits arg0, android::icu::text::Edits arg1);
		jint numberOfChanges();
		void reset();
	};
} // namespace android::icu::text

