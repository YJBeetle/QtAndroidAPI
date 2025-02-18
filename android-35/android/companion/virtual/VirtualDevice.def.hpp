#pragma once

#include "../../../JObject.hpp"

class JIntArray;
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::companion::virtual_
{
	class VirtualDevice : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit VirtualDevice(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VirtualDevice(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getDeviceId() const;
		JIntArray getDisplayIds() const;
		JString getDisplayName() const;
		JString getName() const;
		JString getPersistentDeviceId() const;
		jboolean hasCustomSensorSupport() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::companion::virtual_

