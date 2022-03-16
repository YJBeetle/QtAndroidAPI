#pragma once

#include "./CellIdentity.def.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony
{
	class CellIdentityLte : public android::telephony::CellIdentity
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CellIdentityLte(const char *className, const char *sig, Ts...agv) : android::telephony::CellIdentity(className, sig, std::forward<Ts>(agv)...) {}
		CellIdentityLte(QJniObject obj) : android::telephony::CellIdentity(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getBandwidth() const;
		jint getCi() const;
		jint getEarfcn() const;
		jint getMcc() const;
		JString getMccString() const;
		jint getMnc() const;
		JString getMncString() const;
		JString getMobileNetworkOperator() const;
		jint getPci() const;
		jint getTac() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

