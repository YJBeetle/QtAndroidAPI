#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app::sdksandbox
{
	class AppOwnedSdkSandboxInterface : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AppOwnedSdkSandboxInterface(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppOwnedSdkSandboxInterface(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AppOwnedSdkSandboxInterface(JString arg0, jlong arg1, JObject arg2);
		
		// Methods
		jint describeContents() const;
		JObject getInterface() const;
		JString getName() const;
		jlong getVersion() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::sdksandbox

