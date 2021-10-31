#include "./WindowInspector.hpp"

namespace android::view::inspector
{
	// Fields
	
	// QAndroidJniObject forward
	WindowInspector::WindowInspector(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass WindowInspector::getGlobalWindowViews()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.inspector.WindowInspector",
			"getGlobalWindowViews",
			"()Ljava/util/List;"
		);
	}
} // namespace android::view::inspector

