#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class UserHandle;
}

namespace android::telecom
{
	class PhoneAccountHandle : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		PhoneAccountHandle(QAndroidJniObject obj);
		// Constructors
		PhoneAccountHandle(android::content::ComponentName arg0, jstring arg1);
		PhoneAccountHandle(android::content::ComponentName arg0, jstring arg1, android::os::UserHandle arg2);
		PhoneAccountHandle() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getComponentName();
		jstring getId();
		QAndroidJniObject getUserHandle();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom

