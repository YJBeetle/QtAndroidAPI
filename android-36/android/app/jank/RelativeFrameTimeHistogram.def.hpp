#pragma once

#include "../../../JObject.hpp"

class JIntArray;

namespace android::app::jank
{
	class RelativeFrameTimeHistogram : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RelativeFrameTimeHistogram(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RelativeFrameTimeHistogram(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RelativeFrameTimeHistogram();
		
		// Methods
		void addRelativeFrameTimeMillis(jint arg0) const;
		JIntArray getBucketCounters() const;
		JIntArray getBucketEndpointsMillis() const;
	};
} // namespace android::app::jank

