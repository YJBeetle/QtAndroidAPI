#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::assist
{
	class AssistStructure_ViewNode;
}

namespace android::app::assist
{
	class AssistStructure_WindowNode : public __JniBaseClass
	{
	public:
		// Fields
		
		AssistStructure_WindowNode(QAndroidJniObject obj);
		// Constructors
		AssistStructure_WindowNode() = default;
		
		// Methods
		jint getDisplayId();
		jint getHeight();
		jint getLeft();
		QAndroidJniObject getRootViewNode();
		jstring getTitle();
		jint getTop();
		jint getWidth();
	};
} // namespace android::app::assist

