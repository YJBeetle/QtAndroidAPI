#include "./WindowInspector.hpp"

namespace android::view::inspector
{
	// Fields
	
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

