#pragma once

#include "./CellIdentity.hpp"

class JIntArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony
{
	class CellIdentityNr : public android::telephony::CellIdentity
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CellIdentityNr(const char *className, const char *sig, Ts...agv) : android::telephony::CellIdentity(className, sig, std::forward<Ts>(agv)...) {}
		CellIdentityNr(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JObject getAdditionalPlmns();
		JIntArray getBands();
		JString getMccString();
		JString getMncString();
		jlong getNci();
		jint getNrarfcn();
		jint getPci();
		jint getTac();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

