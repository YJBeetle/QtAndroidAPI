#pragma once

#include "../../__JniBaseClass.hpp"

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
	class ParcelUuid : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ParcelUuid(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ParcelUuid(QAndroidJniObject obj);
		
		// Constructors
		ParcelUuid(java::util::UUID arg0);
		
		// Methods
		static QAndroidJniObject fromString(jstring arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getUuid();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

