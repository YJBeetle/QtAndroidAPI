#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::service::carrier
{
	class CarrierIdentifier : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierIdentifier(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierIdentifier(QJniObject obj);
		
		// Constructors
		CarrierIdentifier(JByteArray arg0, JString arg1, JString arg2);
		CarrierIdentifier(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4, JString arg5);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		JString getGid1();
		JString getGid2();
		JString getImsi();
		JString getMcc();
		JString getMnc();
		JString getSpn();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::carrier

