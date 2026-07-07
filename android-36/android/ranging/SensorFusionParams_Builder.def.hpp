#pragma once

#include "../../JObject.hpp"

namespace android::ranging
{
	class SensorFusionParams;
}

namespace android::ranging
{
	class SensorFusionParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SensorFusionParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SensorFusionParams_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SensorFusionParams_Builder();
		
		// Methods
		android::ranging::SensorFusionParams build() const;
		android::ranging::SensorFusionParams_Builder setSensorFusionEnabled(jboolean arg0) const;
	};
} // namespace android::ranging

