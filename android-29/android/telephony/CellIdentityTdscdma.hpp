#pragma once

#include "./CellIdentity.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony
{
	class CellIdentityTdscdma : public android::telephony::CellIdentity
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CellIdentityTdscdma(const char *className, const char *sig, Ts...agv) : android::telephony::CellIdentity(className, sig, std::forward<Ts>(agv)...) {}
		CellIdentityTdscdma(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getCid();
		jint getCpid();
		jint getLac();
		JString getMccString();
		JString getMncString();
		JString getMobileNetworkOperator();
		jint getUarfcn();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

