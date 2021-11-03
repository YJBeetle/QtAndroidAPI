#include "./StaticInspectionCompanionProvider.hpp"

namespace android::view::inspector
{
	// Fields
	
	// QJniObject forward
	StaticInspectionCompanionProvider::StaticInspectionCompanionProvider(QJniObject obj) : JObject(obj) {}
	
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

