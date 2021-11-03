#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::aware
{
	class PublishConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint PUBLISH_TYPE_SOLICITED();
		static jint PUBLISH_TYPE_UNSOLICITED();
		
		// QJniObject forward
		template<typename ...Ts> explicit PublishConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PublishConfig(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::aware

