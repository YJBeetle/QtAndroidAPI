#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::util
{
	class UUID;
}

namespace android::os
{
	class ParcelUuid : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ParcelUuid(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ParcelUuid(QAndroidJniObject obj);
		
		// Constructors
		ParcelUuid(java::util::UUID arg0);
		
		// Methods
		static android::os::ParcelUuid fromString(jstring arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		java::util::UUID getUuid();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

