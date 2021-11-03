#include "../../../JClass.hpp"
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
	JObject StaticInspectionCompanionProvider::provide(JClass arg0) const
	{
		return callObjectMethod(
			"provide",
			"(Ljava/lang/Class;)Landroid/view/inspector/InspectionCompanion;",
			arg0.object<jclass>()
		);
	}
} // namespace android::view::inspector

