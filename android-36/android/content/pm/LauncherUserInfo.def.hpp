#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content::pm
{
	class LauncherUserInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString PRIVATE_SPACE_ENTRYPOINT_HIDDEN();
		
		// QJniObject forward
		template<typename ...Ts> explicit LauncherUserInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LauncherUserInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::os::Bundle getUserConfig() const;
		jint getUserSerialNumber() const;
		JString getUserType() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

