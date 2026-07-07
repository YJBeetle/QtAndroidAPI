#pragma once

#include "../../../../JObject.hpp"

namespace android::ranging::ble::cs
{
	class BleCsRangingParams;
}
class JString;

namespace android::ranging::ble::cs
{
	class BleCsRangingParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BleCsRangingParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BleCsRangingParams_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BleCsRangingParams_Builder(JString arg0);
		
		// Methods
		android::ranging::ble::cs::BleCsRangingParams build() const;
		android::ranging::ble::cs::BleCsRangingParams_Builder setLocationType(jint arg0) const;
		android::ranging::ble::cs::BleCsRangingParams_Builder setRangingUpdateRate(jint arg0) const;
		android::ranging::ble::cs::BleCsRangingParams_Builder setSecurityLevel(jint arg0) const;
		android::ranging::ble::cs::BleCsRangingParams_Builder setSightType(jint arg0) const;
	};
} // namespace android::ranging::ble::cs

