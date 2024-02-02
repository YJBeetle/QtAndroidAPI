#pragma once

#include "./SegmentFinder.def.hpp"

class JIntArray;

namespace android::text
{
	class SegmentFinder_PrescribedSegmentFinder : public android::text::SegmentFinder
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SegmentFinder_PrescribedSegmentFinder(const char *className, const char *sig, Ts...agv) : android::text::SegmentFinder(className, sig, std::forward<Ts>(agv)...) {}
		SegmentFinder_PrescribedSegmentFinder(QJniObject obj) : android::text::SegmentFinder(obj) {}
		
		// Constructors
		SegmentFinder_PrescribedSegmentFinder(JIntArray arg0);
		
		// Methods
		jint nextEndBoundary(jint arg0) const;
		jint nextStartBoundary(jint arg0) const;
		jint previousEndBoundary(jint arg0) const;
		jint previousStartBoundary(jint arg0) const;
	};
} // namespace android::text

