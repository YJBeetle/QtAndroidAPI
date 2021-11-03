#pragma once

#include "../../JObject.hpp"

namespace android::companion
{
	class AssociationRequest;
}
class JString;

namespace android::companion
{
	class AssociationRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AssociationRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AssociationRequest_Builder(QAndroidJniObject obj);
		
		// Constructors
		AssociationRequest_Builder();
		
		// Methods
		android::companion::AssociationRequest_Builder addDeviceFilter(JObject arg0);
		android::companion::AssociationRequest build();
		android::companion::AssociationRequest_Builder setDeviceProfile(JString arg0);
		android::companion::AssociationRequest_Builder setSingleDevice(jboolean arg0);
	};
} // namespace android::companion

