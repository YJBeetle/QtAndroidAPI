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
		
		// QJniObject forward
		template<typename ...Ts> explicit AssistStructure_WindowNode(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AssistStructure_WindowNode(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getDisplayId();
		jint getHeight();
		jint getLeft();
		android::app::assist::AssistStructure_ViewNode getRootViewNode();
		jstring getTitle();
		jint getTop();
		jint getWidth();
	};
} // namespace android::app::assist

