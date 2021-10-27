#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::accounts
{
	class Account;
}
namespace android::os
{
	class Parcel;
}

namespace android::content
{
	class SyncInfo : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject account();
		jstring authority();
		jlong startTime();
		
		SyncInfo(QAndroidJniObject obj);
		// Constructors
		SyncInfo() = default;
		
		// Methods
		jint describeContents();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

