#include "./WindowInspector.hpp"

namespace android::view::inspector
{
	// Fields
	
	// QAndroidJniObject forward
	WindowInspector::WindowInspector(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject WindowInspector::getGlobalWindowViews()
	{
		return callStaticObjectMethod(
			"android.view.inspector.WindowInspector",
			"getGlobalWindowViews",
			"()Ljava/util/List;"
		);
	}
} // namespace android::view::inspector

