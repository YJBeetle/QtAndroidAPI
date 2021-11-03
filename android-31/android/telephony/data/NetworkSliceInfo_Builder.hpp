#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::data
{
	class NetworkSliceInfo;
}

namespace android::telephony::data
{
	class NetworkSliceInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkSliceInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkSliceInfo_Builder(QJniObject obj);
		
		// Constructors
		NetworkSliceInfo_Builder();
		
		// Methods
		android::telephony::data::NetworkSliceInfo build();
		android::telephony::data::NetworkSliceInfo_Builder setMappedHplmnSliceDifferentiator(jint arg0);
		android::telephony::data::NetworkSliceInfo_Builder setMappedHplmnSliceServiceType(jint arg0);
		android::telephony::data::NetworkSliceInfo_Builder setSliceDifferentiator(jint arg0);
		android::telephony::data::NetworkSliceInfo_Builder setSliceServiceType(jint arg0);
		android::telephony::data::NetworkSliceInfo_Builder setStatus(jint arg0);
	};
} // namespace android::telephony::data

