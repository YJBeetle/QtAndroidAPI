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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AssociationRequest_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AssociationRequest_Builder(QAndroidJniObject obj);
		
		// Constructors
		AssociationRequest_Builder();
		
		// Methods
		QAndroidJniObject addDeviceFilter(__JniBaseClass arg0);
		QAndroidJniObject build();
		QAndroidJniObject setSingleDevice(jboolean arg0);
	};
} // namespace android::companion

