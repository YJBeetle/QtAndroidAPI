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
		android::accounts::Account account();
		jstring authority();
		jlong startTime();
		
		// QJniObject forward
		template<typename ...Ts> explicit SyncInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SyncInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

