#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
class JObject;

namespace android::telephony
{
	class CellIdentity : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CellIdentity(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CellIdentity(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		JString getOperatorAlphaLong();
		JString getOperatorAlphaShort();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

