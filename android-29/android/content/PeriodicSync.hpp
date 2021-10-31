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
		static QAndroidJniObject CREATOR();
		QAndroidJniObject account();
		jstring authority();
		QAndroidJniObject extras();
		jlong period();
		
		PeriodicSync(QAndroidJniObject obj);
		// Constructors
		PeriodicSync(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2, jlong arg3);
		PeriodicSync() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

