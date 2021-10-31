#include "./AssociationRequest.hpp"
#include "./AssociationRequest_Builder.hpp"

namespace android::companion
{
	// Fields
	
	// QAndroidJniObject forward
	AssociationRequest_Builder::AssociationRequest_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AssociationRequest_Builder::AssociationRequest_Builder()
		: __JniBaseClass(
			"android.companion.AssociationRequest$Builder",
			"()V"
		) {}
	
	// Methods
	android::companion::AssociationRequest_Builder AssociationRequest_Builder::addDeviceFilter(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"addDeviceFilter",
			"(Landroid/companion/DeviceFilter;)Landroid/companion/AssociationRequest$Builder;",
			arg0.object()
		);
	}
	android::companion::AssociationRequest AssociationRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/companion/AssociationRequest;"
		);
	}
	android::companion::AssociationRequest_Builder AssociationRequest_Builder::setSingleDevice(jboolean arg0)
	{
		return callObjectMethod(
			"setSingleDevice",
			"(Z)Landroid/companion/AssociationRequest$Builder;",
			arg0
		);
	}
} // namespace android::companion

