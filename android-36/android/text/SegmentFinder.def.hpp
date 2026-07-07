#pragma once

#include "../../JObject.hpp"

namespace android::text
{
	class SegmentFinder : public JObject
	{
	public:
		// Fields
		static jint DONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit SegmentFinder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SegmentFinder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SegmentFinder();
		
		// Methods
		jint nextEndBoundary(jint arg0) const;
		jint nextStartBoundary(jint arg0) const;
		jint previousEndBoundary(jint arg0) const;
		jint previousStartBoundary(jint arg0) const;
	};
} // namespace android::text

