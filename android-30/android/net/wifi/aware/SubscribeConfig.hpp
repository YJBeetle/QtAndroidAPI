#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi::aware
{
	class SubscribeConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint SUBSCRIBE_TYPE_ACTIVE();
		static jint SUBSCRIBE_TYPE_PASSIVE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SubscribeConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SubscribeConfig(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::aware

