#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::telephony::data
{
	class NetworkSliceInfo;
}

namespace android::telephony::data
{
	class NetworkSliceInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkSliceInfo_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NetworkSliceInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		NetworkSliceInfo_Builder();
		
		// Methods
		android::telephony::data::NetworkSliceInfo build();
		android::telephony::data::NetworkSliceInfo_Builder setMappedHplmnSliceDifferentiator(jint arg0);
		android::telephony::data::NetworkSliceInfo_Builder setMappedHplmnSliceServiceType(jint arg0);
		android::telephony::data::NetworkSliceInfo_Builder setSliceDifferentiator(jint arg0);
		android::telephony::data::NetworkSliceInfo_Builder setSliceServiceType(jint arg0);
		android::telephony::data::NetworkSliceInfo_Builder setStatus(jint arg0);
	};
} // namespace android::telephony::data

