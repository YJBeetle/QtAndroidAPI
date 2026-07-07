#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaRouter2_ScanRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRouter2_ScanRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter2_ScanRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean isScreenOffScan() const;
	};
} // namespace android::media

