#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::ranging::ble::cs
{
	class BleCsRangingParams : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint LOCATION_TYPE_INDOOR();
		static jint LOCATION_TYPE_OUTDOOR();
		static jint LOCATION_TYPE_UNKNOWN();
		static jint SIGHT_TYPE_LINE_OF_SIGHT();
		static jint SIGHT_TYPE_NON_LINE_OF_SIGHT();
		static jint SIGHT_TYPE_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit BleCsRangingParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BleCsRangingParams(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getLocationType() const;
		JString getPeerBluetoothAddress() const;
		jint getRangingUpdateRate() const;
		jint getSecurityLevel() const;
		jint getSightType() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::ranging::ble::cs

