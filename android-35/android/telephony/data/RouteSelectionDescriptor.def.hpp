#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony::data
{
	class RouteSelectionDescriptor : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint ROUTE_SSC_MODE_1();
		static jint ROUTE_SSC_MODE_2();
		static jint ROUTE_SSC_MODE_3();
		static jint SESSION_TYPE_IPV4();
		static jint SESSION_TYPE_IPV4V6();
		static jint SESSION_TYPE_IPV6();
		
		// QJniObject forward
		template<typename ...Ts> explicit RouteSelectionDescriptor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RouteSelectionDescriptor(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getDataNetworkName() const;
		jint getPrecedence() const;
		jint getSessionType() const;
		JObject getSliceInfo() const;
		jint getSscMode() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony::data

