#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::app::admin
{
	class SystemUpdateInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint SECURITY_PATCH_STATE_FALSE();
		static jint SECURITY_PATCH_STATE_TRUE();
		static jint SECURITY_PATCH_STATE_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit SystemUpdateInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SystemUpdateInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jlong getReceivedTime();
		jint getSecurityPatchState();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::admin

