#pragma once

#include "../CellLocation.def.hpp"

namespace android::os
{
	class Bundle;
}
class JObject;
class JString;

namespace android::telephony::gsm
{
	class GsmCellLocation : public android::telephony::CellLocation
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GsmCellLocation(const char *className, const char *sig, Ts...agv) : android::telephony::CellLocation(className, sig, std::forward<Ts>(agv)...) {}
		GsmCellLocation(QJniObject obj) : android::telephony::CellLocation(obj) {}
		
		// Constructors
		GsmCellLocation();
		GsmCellLocation(android::os::Bundle arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		void fillInNotifierBundle(android::os::Bundle arg0) const;
		jint getCid() const;
		jint getLac() const;
		jint getPsc() const;
		jint hashCode() const;
		void setLacAndCid(jint arg0, jint arg1) const;
		void setStateInvalid() const;
		JString toString() const;
	};
} // namespace android::telephony::gsm

