#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::ranging::ble::cs
{
	class BleCsRangingCapabilities : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint CS_SECURITY_LEVEL_FOUR();
		static jint CS_SECURITY_LEVEL_ONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit BleCsRangingCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BleCsRangingCapabilities(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JObject getSupportedSecurityLevels() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::ranging::ble::cs

