#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::ranging::uwb
{
	class UwbAddress : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint EXTENDED_ADDRESS_BYTE_LENGTH();
		static jint SHORT_ADDRESS_BYTE_LENGTH();
		
		// QJniObject forward
		template<typename ...Ts> explicit UwbAddress(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UwbAddress(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::ranging::uwb::UwbAddress createRandomShortAddress();
		static android::ranging::uwb::UwbAddress fromBytes(JByteArray arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JByteArray getAddressBytes() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::ranging::uwb

