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
	JObject StaticInspectionCompanionProvider::provide(jclass arg0)
	{
		return callObjectMethod(
			"provide",
			"(Ljava/lang/Class;)Landroid/view/inspector/InspectionCompanion;",
			arg0
		);
	}
} // namespace android::view::inspector

