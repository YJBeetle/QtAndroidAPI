#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::hardware::display
{
	class DeviceProductInfo : public JObject
	{
	public:
		// Fields
		static jint CONNECTION_TO_SINK_BUILT_IN();
		static jint CONNECTION_TO_SINK_DIRECT();
		static jint CONNECTION_TO_SINK_TRANSITIVE();
		static jint CONNECTION_TO_SINK_UNKNOWN();
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit DeviceProductInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DeviceProductInfo(QJniObject obj);
		
		// Constructors
		DeviceProductInfo(jstring arg0, jstring arg1, jstring arg2, jint arg3, jint arg4);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getConnectionToSinkType();
		jint getManufactureWeek();
		jint getManufactureYear();
		jstring getManufacturerPnpId();
		jint getModelYear();
		jstring getName();
		jstring getProductId();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::display

