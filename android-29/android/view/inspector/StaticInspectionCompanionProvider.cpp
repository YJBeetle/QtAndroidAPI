#include "./StaticInspectionCompanionProvider.hpp"

namespace android::view::inspector
{
	// Fields
	
	StaticInspectionCompanionProvider::StaticInspectionCompanionProvider(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StaticInspectionCompanionProvider::StaticInspectionCompanionProvider()
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.StaticInspectionCompanionProvider",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject StaticInspectionCompanionProvider::provide(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"provide",
			"(Ljava/lang/Class;)Landroid/view/inspector/InspectionCompanion;",
			arg0
		);
	}
} // namespace android::view::inspector

