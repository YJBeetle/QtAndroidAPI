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
		NetworkSliceInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getMappedHplmnSliceDifferentiator() const;
		jint getMappedHplmnSliceServiceType() const;
		jint getSliceDifferentiator() const;
		jint getSliceServiceType() const;
		jint getStatus() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony::data

