#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::adservices::common
{
	class AdData : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AdData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdData(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getMetadata() const;
		android::net::Uri getRenderUri() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::adservices::common

