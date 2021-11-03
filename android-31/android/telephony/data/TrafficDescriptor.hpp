#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony::data
{
	class TrafficDescriptor : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TrafficDescriptor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TrafficDescriptor(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		JString getDataNetworkName();
		JByteArray getOsAppId();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::data

