#pragma once

#include "../../JObject.hpp"

namespace android::accounts
{
	class Account;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content
{
	class SyncInfo : public JObject
	{
	public:
		// Fields
		android::accounts::Account account();
		JString authority();
		jlong startTime();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SyncInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SyncInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content

