#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::companion
{
	class AssociationRequest;
}

namespace android::companion
{
	class AssociationRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AssociationRequest_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AssociationRequest_Builder(QJniObject obj);
		
		// Constructors
		AssociationRequest_Builder();
		
		// Methods
		android::companion::AssociationRequest_Builder addDeviceFilter(__JniBaseClass arg0);
		android::companion::AssociationRequest build();
		android::companion::AssociationRequest_Builder setSingleDevice(jboolean arg0);
	};
} // namespace android::companion

