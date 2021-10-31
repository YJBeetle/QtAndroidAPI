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
		static QAndroidJniObject BROADCAST_ADDRESS();
		static QAndroidJniObject CREATOR();
		static jint TYPE_BROADCAST();
		static jint TYPE_MULTICAST();
		static jint TYPE_UNICAST();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MacAddress(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MacAddress(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject fromBytes(jbyteArray arg0);
		static QAndroidJniObject fromString(jstring arg0);
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

