#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony::data
{
	class NetworkSliceInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint SLICE_DIFFERENTIATOR_NO_SLICE();
		static jint SLICE_SERVICE_TYPE_EMBB();
		static jint SLICE_SERVICE_TYPE_MIOT();
		static jint SLICE_SERVICE_TYPE_NONE();
		static jint SLICE_SERVICE_TYPE_URLLC();
		static jint SLICE_STATUS_ALLOWED();
		static jint SLICE_STATUS_CONFIGURED();
		static jint SLICE_STATUS_DEFAULT_CONFIGURED();
		static jint SLICE_STATUS_REJECTED_NOT_AVAILABLE_IN_PLMN();
		static jint SLICE_STATUS_REJECTED_NOT_AVAILABLE_IN_REGISTERED_AREA();
		static jint SLICE_STATUS_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkSliceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkSliceInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getMappedHplmnSliceDifferentiator();
		jint getMappedHplmnSliceServiceType();
		jint getSliceDifferentiator();
		jint getSliceServiceType();
		jint getStatus();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::data

