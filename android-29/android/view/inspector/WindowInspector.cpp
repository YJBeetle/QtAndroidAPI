#include "./WindowInspector.hpp"

namespace android::view::inspector
{
	// Fields
	
	WindowInspector::WindowInspector(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject WindowInspector::getGlobalWindowViews()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.inspector.WindowInspector",
			"getGlobalWindowViews",
			"()Ljava/util/List;"
		);
	}
} // namespace android::view::inspector

