#pragma once

#include "../../../JObject.hpp"

namespace android::app::usage
{
	class NetworkStats_Bucket;
}

namespace android::app::usage
{
	class NetworkStats : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkStats(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		jboolean getNextBucket(android::app::usage::NetworkStats_Bucket arg0) const;
		jboolean hasNextBucket() const;
	};
} // namespace android::app::usage

