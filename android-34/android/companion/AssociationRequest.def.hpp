#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::companion
{
	class AssociationRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString DEVICE_PROFILE_APP_STREAMING();
		static JString DEVICE_PROFILE_AUTOMOTIVE_PROJECTION();
		static JString DEVICE_PROFILE_COMPUTER();
		static JString DEVICE_PROFILE_GLASSES();
		static JString DEVICE_PROFILE_NEARBY_DEVICE_STREAMING();
		static JString DEVICE_PROFILE_WATCH();
		
		// QJniObject forward
		template<typename ...Ts> explicit AssociationRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AssociationRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getDeviceProfile() const;
		JString getDisplayName() const;
		jint hashCode() const;
		jboolean isForceConfirmation() const;
		jboolean isSelfManaged() const;
		jboolean isSingleDevice() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::companion

