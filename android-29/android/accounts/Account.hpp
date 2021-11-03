#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::accounts
{
	class Account : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		JString name();
		JString type();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Account(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Account(QAndroidJniObject obj);
		
		// Constructors
		Account(android::os::Parcel arg0);
		Account(JString arg0, JString arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::accounts

