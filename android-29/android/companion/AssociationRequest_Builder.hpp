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
		
		AssociationRequest_Builder(QAndroidJniObject obj);
		// Constructors
		AssociationRequest_Builder();
		
		// Methods
		QAndroidJniObject addDeviceFilter(__JniBaseClass arg0);
		QAndroidJniObject build();
		QAndroidJniObject setSingleDevice(jboolean arg0);
	};
} // namespace android::companion

