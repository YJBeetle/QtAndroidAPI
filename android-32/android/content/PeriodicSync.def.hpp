#pragma once

#include "../../JObject.hpp"

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
class JObject;
class JString;

namespace android::content
{
	class PeriodicSync : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		android::accounts::Account account();
		JString authority();
		android::os::Bundle extras();
		jlong period();
		
		// QJniObject forward
		template<typename ...Ts> explicit PeriodicSync(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PeriodicSync(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PeriodicSync(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2, jlong arg3);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content

