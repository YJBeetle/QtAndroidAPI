#pragma once

#include "../../../JObject.hpp"

class JObject;

namespace android::net::vcn
{
	class VcnUnderlyingNetworkTemplate : public JObject
	{
	public:
		// Fields
		static jint MATCH_ANY();
		static jint MATCH_FORBIDDEN();
		static jint MATCH_REQUIRED();
		
		// QJniObject forward
		template<typename ...Ts> explicit VcnUnderlyingNetworkTemplate(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VcnUnderlyingNetworkTemplate(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getMetered() const;
		jint getMinEntryDownstreamBandwidthKbps() const;
		jint getMinEntryUpstreamBandwidthKbps() const;
		jint getMinExitDownstreamBandwidthKbps() const;
		jint getMinExitUpstreamBandwidthKbps() const;
		jint hashCode() const;
	};
} // namespace android::net::vcn

