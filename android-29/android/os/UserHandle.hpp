#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::os
{
	class UserHandle : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		UserHandle(QAndroidJniObject obj);
		// Constructors
		UserHandle(android::os::Parcel arg0);
		UserHandle() = default;
		
		// Methods
		static QAndroidJniObject getUserHandleForUid(jint arg0);
		static QAndroidJniObject readFromParcel(android::os::Parcel arg0);
		static void writeToParcel(android::os::UserHandle arg0, android::os::Parcel arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

