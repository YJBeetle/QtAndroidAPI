#pragma once

#include "./SegmentFinder.def.hpp"

namespace android::text
{
	class TextPaint;
}
class JString;

namespace android::text
{
	class GraphemeClusterSegmentFinder : public android::text::SegmentFinder
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GraphemeClusterSegmentFinder(const char *className, const char *sig, Ts...agv) : android::text::SegmentFinder(className, sig, std::forward<Ts>(agv)...) {}
		GraphemeClusterSegmentFinder(QJniObject obj) : android::text::SegmentFinder(obj) {}
		
		// Constructors
		GraphemeClusterSegmentFinder(JString arg0, android::text::TextPaint arg1);
		
		// Methods
		jint nextEndBoundary(jint arg0) const;
		jint nextStartBoundary(jint arg0) const;
		jint previousEndBoundary(jint arg0) const;
		jint previousStartBoundary(jint arg0) const;
	};
} // namespace android::text

