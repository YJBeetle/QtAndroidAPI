#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
namespace android::ranging::wifi::rtt
{
	class RttRangingParams;
}
class JString;

namespace android::ranging::wifi::rtt
{
	class RttRangingParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RttRangingParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RttRangingParams_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RttRangingParams_Builder(JString arg0);
		
		// Methods
		android::ranging::wifi::rtt::RttRangingParams build() const;
		android::ranging::wifi::rtt::RttRangingParams_Builder setMatchFilter(JByteArray arg0) const;
		android::ranging::wifi::rtt::RttRangingParams_Builder setPeriodicRangingHwFeatureEnabled(jboolean arg0) const;
		android::ranging::wifi::rtt::RttRangingParams_Builder setRangingUpdateRate(jint arg0) const;
	};
} // namespace android::ranging::wifi::rtt

