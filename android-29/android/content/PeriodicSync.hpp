#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::accounts
{
	class Account;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::content
{
	class PeriodicSync : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		android::accounts::Account account();
		jstring authority();
		android::os::Bundle extras();
		jlong period();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PeriodicSync(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PeriodicSync(QAndroidJniObject obj);
		
		// Constructors
		PeriodicSync(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2, jlong arg3);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

