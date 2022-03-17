#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi::aware
{
	class PublishConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint PUBLISH_TYPE_SOLICITED();
		static jint PUBLISH_TYPE_UNSOLICITED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PublishConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PublishConfig(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::aware

