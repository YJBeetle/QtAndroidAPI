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

namespace android::icu::text
{
	class SearchIterator : public JObject
	{
	public:
		// Fields
		static jint DONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchIterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchIterator(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint first();
		jint following(jint arg0);
		android::icu::text::BreakIterator getBreakIterator();
		android::icu::text::SearchIterator_ElementComparisonType getElementComparisonType();
		jint getIndex();
		jint getMatchLength();
		jint getMatchStart();
		jstring getMatchedText();
		JObject getTarget();
		jboolean isOverlapping();
		jint last();
		jint next();
		jint preceding(jint arg0);
		jint previous();
		void reset();
		void setBreakIterator(android::icu::text::BreakIterator arg0);
		void setElementComparisonType(android::icu::text::SearchIterator_ElementComparisonType arg0);
		void setIndex(jint arg0);
		void setOverlapping(jboolean arg0);
		void setTarget(JObject arg0);
	};
} // namespace android::icu::text

