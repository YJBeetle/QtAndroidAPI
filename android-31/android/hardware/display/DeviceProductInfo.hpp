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
		
		// QJniObject forward
		template<typename ...Ts> explicit DeviceProductInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DeviceProductInfo(QJniObject obj);
		
		// Constructors
		DeviceProductInfo(JString arg0, JString arg1, JString arg2, jint arg3, jint arg4);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getConnectionToSinkType() const;
		jint getManufactureWeek() const;
		jint getManufactureYear() const;
		JString getManufacturerPnpId() const;
		jint getModelYear() const;
		JString getName() const;
		JString getProductId() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::hardware::display

