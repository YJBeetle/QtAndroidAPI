#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net
{
	class MacAddress : public __JniBaseClass
	{
	public:
		// Fields
		static android::net::MacAddress BROADCAST_ADDRESS();
		static __JniBaseClass CREATOR();
		static jint TYPE_BROADCAST();
		static jint TYPE_MULTICAST();
		static jint TYPE_UNICAST();
		
		// QJniObject forward
		template<typename ...Ts> explicit MacAddress(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MacAddress(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::MacAddress fromBytes(jbyteArray arg0);
		static android::net::MacAddress fromString(jstring arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getAddressType();
		jint hashCode();
		jboolean isLocallyAssigned();
		jbyteArray toByteArray();
		jstring toOuiString();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

