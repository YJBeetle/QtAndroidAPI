#include "../../../JClass.hpp"
#include "./StaticInspectionCompanionProvider.hpp"

namespace android::view::inspector
{
	// Fields
	
	// QAndroidJniObject forward
	StaticInspectionCompanionProvider::StaticInspectionCompanionProvider(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	StaticInspectionCompanionProvider::StaticInspectionCompanionProvider()
		: JObject(
			"android.view.inspector.StaticInspectionCompanionProvider",
			"()V"
		) {}
	
	// Methods
	JObject StaticInspectionCompanionProvider::provide(JClass arg0)
	{
		return callObjectMethod(
			"provide",
			"(Ljava/lang/Class;)Landroid/view/inspector/InspectionCompanion;",
			arg0.object<jclass>()
		);
	}
} // namespace android::view::inspector

