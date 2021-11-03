#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

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
		RouteSelectionDescriptor(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		JObject getDataNetworkName();
		jint getPrecedence();
		jint getSessionType();
		JObject getSliceInfo();
		jint getSscMode();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::data

