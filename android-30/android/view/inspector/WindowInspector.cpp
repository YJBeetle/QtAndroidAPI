#include "./WindowInspector.hpp"

namespace android::view::inspector
{
	// Fields
	
	// QJniObject forward
	WindowInspector::WindowInspector(QJniObject obj) : JObject(obj) {}
	
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

