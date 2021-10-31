#include "./StaticInspectionCompanionProvider.hpp"

namespace android::view::inspector
{
	// Fields
	
	// QAndroidJniObject forward
	StaticInspectionCompanionProvider::StaticInspectionCompanionProvider(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	StaticInspectionCompanionProvider::StaticInspectionCompanionProvider()
		: __JniBaseClass(
			"android.view.inspector.StaticInspectionCompanionProvider",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject StaticInspectionCompanionProvider::provide(jclass arg0)
	{
		return callObjectMethod(
			"provide",
			"(Ljava/lang/Class;)Landroid/view/inspector/InspectionCompanion;",
			arg0
		);
	}
} // namespace android::view::inspector

