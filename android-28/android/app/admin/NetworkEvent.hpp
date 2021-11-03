#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app::admin
{
	class NetworkEvent : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jlong getId();
		JString getPackageName();
		jlong getTimestamp();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::admin

