#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DeviceProductInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DeviceProductInfo(QAndroidJniObject obj);
		
		// Constructors
		DeviceProductInfo(JString arg0, JString arg1, JString arg2, jint arg3, jint arg4);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getConnectionToSinkType();
		jint getManufactureWeek();
		jint getManufactureYear();
		JString getManufacturerPnpId();
		jint getModelYear();
		JString getName();
		JString getProductId();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::display

