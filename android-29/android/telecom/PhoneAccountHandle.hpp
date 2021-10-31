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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PhoneAccountHandle(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PhoneAccountHandle(QAndroidJniObject obj);
		
		// Constructors
		PhoneAccountHandle(android::content::ComponentName arg0, jstring arg1);
		PhoneAccountHandle(android::content::ComponentName arg0, jstring arg1, android::os::UserHandle arg2);
		
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

