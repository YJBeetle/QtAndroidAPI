#include "./WindowInspector.hpp"

namespace android::view::inspector
{
	// Fields
	
	// QJniObject forward
	WindowInspector::WindowInspector(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass WindowInspector::getGlobalWindowViews()
	{
		return callStaticObjectMethod(
			"android.view.inspector.WindowInspector",
			"getGlobalWindowViews",
			"()Ljava/util/List;"
		);
	}
} // namespace android::view::inspector

