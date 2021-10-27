#include "./AssociationRequest.hpp"
#include "./AssociationRequest_Builder.hpp"

namespace android::companion
{
	// Fields
	
	AssociationRequest_Builder::AssociationRequest_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AssociationRequest_Builder::AssociationRequest_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.companion.AssociationRequest$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject AssociationRequest_Builder::addDeviceFilter(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addDeviceFilter",
			"(Landroid/companion/DeviceFilter;)Landroid/companion/AssociationRequest$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AssociationRequest_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/companion/AssociationRequest;"
		);
	}
	QAndroidJniObject AssociationRequest_Builder::setSingleDevice(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setSingleDevice",
			"(Z)Landroid/companion/AssociationRequest$Builder;",
			arg0
		);
	}
} // namespace android::companion

