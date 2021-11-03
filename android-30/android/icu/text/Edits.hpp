#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class Edits_Iterator;
}

namespace android::icu::text
{
	class Edits : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Edits(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Edits(QAndroidJniObject obj);
		
		// Constructors
		Edits();
		
		// Methods
		void addReplace(jint arg0, jint arg1) const;
		void addUnchanged(jint arg0) const;
		android::icu::text::Edits_Iterator getCoarseChangesIterator() const;
		android::icu::text::Edits_Iterator getCoarseIterator() const;
		android::icu::text::Edits_Iterator getFineChangesIterator() const;
		android::icu::text::Edits_Iterator getFineIterator() const;
		jboolean hasChanges() const;
		jint lengthDelta() const;
		android::icu::text::Edits mergeAndAppend(android::icu::text::Edits arg0, android::icu::text::Edits arg1) const;
		jint numberOfChanges() const;
		void reset() const;
	};
} // namespace android::icu::text

