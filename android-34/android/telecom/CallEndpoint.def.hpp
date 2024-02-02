#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class ParcelUuid;
}
class JString;
class JObject;
class JString;

namespace android::telecom
{
	class CallEndpoint : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint TYPE_BLUETOOTH();
		static jint TYPE_EARPIECE();
		static jint TYPE_SPEAKER();
		static jint TYPE_STREAMING();
		static jint TYPE_UNKNOWN();
		static jint TYPE_WIRED_HEADSET();
		
		// QJniObject forward
		template<typename ...Ts> explicit CallEndpoint(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CallEndpoint(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CallEndpoint(JString arg0, jint arg1, android::os::ParcelUuid arg2);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getEndpointName() const;
		jint getEndpointType() const;
		android::os::ParcelUuid getIdentifier() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telecom

