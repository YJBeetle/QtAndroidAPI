#include "./StaticInspectionCompanionProvider.hpp"

namespace android::view::inspector
{
	// Fields
	
	// QJniObject forward
	StaticInspectionCompanionProvider::StaticInspectionCompanionProvider(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	StaticInspectionCompanionProvider::StaticInspectionCompanionProvider()
		: __JniBaseClass(
			"android.view.inspector.StaticInspectionCompanionProvider",
			"()V"
		) {}
	
	// Methods
	__JniBaseClass StaticInspectionCompanionProvider::provide(jclass arg0)
	{
		return callObjectMethod(
			"provide",
			"(Ljava/lang/Class;)Landroid/view/inspector/InspectionCompanion;",
			arg0
		);
	}
} // namespace android::view::inspector

