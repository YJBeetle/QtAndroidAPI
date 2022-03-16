#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class BreakIterator;
}
namespace android::icu::text
{
	class SearchIterator_ElementComparisonType;
}
class JString;

namespace android::icu::text
{
	class SearchIterator : public JObject
	{
	public:
		// Fields
		static jint DONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchIterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchIterator(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint first() const;
		jint following(jint arg0) const;
		android::icu::text::BreakIterator getBreakIterator() const;
		android::icu::text::SearchIterator_ElementComparisonType getElementComparisonType() const;
		jint getIndex() const;
		jint getMatchLength() const;
		jint getMatchStart() const;
		JString getMatchedText() const;
		JObject getTarget() const;
		jboolean isOverlapping() const;
		jint last() const;
		jint next() const;
		jint preceding(jint arg0) const;
		jint previous() const;
		void reset() const;
		void setBreakIterator(android::icu::text::BreakIterator arg0) const;
		void setElementComparisonType(android::icu::text::SearchIterator_ElementComparisonType arg0) const;
		void setIndex(jint arg0) const;
		void setOverlapping(jboolean arg0) const;
		void setTarget(JObject arg0) const;
	};
} // namespace android::icu::text

