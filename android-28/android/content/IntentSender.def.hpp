#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Handler;
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

namespace android::content
{
	class IntentSender : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IntentSender(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IntentSender(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::content::IntentSender readIntentSenderOrNullFromParcel(android::os::Parcel arg0);
		static void writeIntentSenderOrNullToParcel(android::content::IntentSender arg0, android::os::Parcel arg1);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getCreatorPackage() const;
		jint getCreatorUid() const;
		android::os::UserHandle getCreatorUserHandle() const;
		JString getTargetPackage() const;
		jint hashCode() const;
		void sendIntent(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4) const;
		void sendIntent(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4, JString arg5) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content

