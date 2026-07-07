#pragma once

#include "../../JObject.hpp"

namespace android::net::wifi
{
	class SoftApConfiguration;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net
{
	class TetheringInterface : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TetheringInterface(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TetheringInterface(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TetheringInterface(jint arg0, JString arg1);
		TetheringInterface(jint arg0, JString arg1, android::net::wifi::SoftApConfiguration arg2);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getInterface() const;
		android::net::wifi::SoftApConfiguration getSoftApConfiguration() const;
		jint getType() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net

