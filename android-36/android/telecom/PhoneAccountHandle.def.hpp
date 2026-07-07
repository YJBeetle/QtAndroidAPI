#pragma once

#include "../../JObject.hpp"

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
class JObject;
class JString;

namespace android::telecom
{
	class PhoneAccountHandle : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PhoneAccountHandle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PhoneAccountHandle(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PhoneAccountHandle(android::content::ComponentName arg0, JString arg1);
		PhoneAccountHandle(android::content::ComponentName arg0, JString arg1, android::os::UserHandle arg2);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::content::ComponentName getComponentName() const;
		JString getId() const;
		android::os::UserHandle getUserHandle() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telecom

