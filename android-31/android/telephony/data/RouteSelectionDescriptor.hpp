#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony::data
{
	class RouteSelectionDescriptor : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint ROUTE_SSC_MODE_1();
		static jint ROUTE_SSC_MODE_2();
		static jint ROUTE_SSC_MODE_3();
		static jint SESSION_TYPE_IPV4();
		static jint SESSION_TYPE_IPV4V6();
		static jint SESSION_TYPE_IPV6();
		
		// QJniObject forward
		template<typename ...Ts> explicit RouteSelectionDescriptor(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RouteSelectionDescriptor(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		__JniBaseClass getDataNetworkName();
		jint getPrecedence();
		jint getSessionType();
		__JniBaseClass getSliceInfo();
		jint getSscMode();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::data

