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
		
		MacAddress(QAndroidJniObject obj);
		// Constructors
		MacAddress() = default;
		
		// Methods
		static QAndroidJniObject fromBytes(jbyteArray arg0);
		static QAndroidJniObject fromString(jstring arg0);
		static QAndroidJniObject fromString(const QString &arg0);
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

