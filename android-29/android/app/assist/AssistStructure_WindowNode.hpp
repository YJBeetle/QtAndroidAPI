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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AssistStructure_WindowNode(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AssistStructure_WindowNode(QAndroidJniObject obj);
		
		// Constructors
		
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

