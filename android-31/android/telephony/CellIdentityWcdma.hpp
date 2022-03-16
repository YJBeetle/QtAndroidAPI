#pragma once

#include "./CellIdentity.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::telephony
{
	class ClosedSubscriberGroupInfo;
}
class JObject;
class JString;

namespace android::telephony
{
	class CellIdentityWcdma : public android::telephony::CellIdentity
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CellIdentityWcdma(const char *className, const char *sig, Ts...agv) : android::telephony::CellIdentity(className, sig, std::forward<Ts>(agv)...) {}
		CellIdentityWcdma(QAndroidJniObject obj) : android::telephony::CellIdentity(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getAdditionalPlmns() const;
		jint getCid() const;
		android::telephony::ClosedSubscriberGroupInfo getClosedSubscriberGroupInfo() const;
		jint getLac() const;
		jint getMcc() const;
		JString getMccString() const;
		jint getMnc() const;
		JString getMncString() const;
		JString getMobileNetworkOperator() const;
		jint getPsc() const;
		jint getUarfcn() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

