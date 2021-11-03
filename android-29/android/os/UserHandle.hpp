#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::os
{
	class UserHandle : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UserHandle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UserHandle(QAndroidJniObject obj);
		
		// Constructors
		UserHandle(android::os::Parcel arg0);
		
		// Methods
		static android::os::UserHandle getUserHandleForUid(jint arg0);
		static android::os::UserHandle readFromParcel(android::os::Parcel arg0);
		static void writeToParcel(android::os::UserHandle arg0, android::os::Parcel arg1);
		jint describeContents();
		jboolean equals(JObject arg0);
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

