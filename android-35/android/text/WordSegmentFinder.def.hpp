#pragma once

#include "./SegmentFinder.def.hpp"

namespace android::icu::util
{
	class ULocale;
}
class JString;

namespace android::text
{
	class WordSegmentFinder : public android::text::SegmentFinder
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WordSegmentFinder(const char *className, const char *sig, Ts...agv) : android::text::SegmentFinder(className, sig, std::forward<Ts>(agv)...) {}
		WordSegmentFinder(QJniObject obj) : android::text::SegmentFinder(obj) {}
		
		// Constructors
		WordSegmentFinder(JString arg0, android::icu::util::ULocale arg1);
		
		// Methods
		jint nextEndBoundary(jint arg0) const;
		jint nextStartBoundary(jint arg0) const;
		jint previousEndBoundary(jint arg0) const;
		jint previousStartBoundary(jint arg0) const;
	};
} // namespace android::text

