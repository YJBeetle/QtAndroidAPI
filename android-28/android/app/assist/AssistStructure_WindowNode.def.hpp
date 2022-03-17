#pragma once

#include "../../../JObject.hpp"

namespace android::app::assist
{
	class AssistStructure_ViewNode;
}
class JString;

namespace android::app::assist
{
	class AssistStructure_WindowNode : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AssistStructure_WindowNode(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AssistStructure_WindowNode(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getDisplayId() const;
		jint getHeight() const;
		jint getLeft() const;
		android::app::assist::AssistStructure_ViewNode getRootViewNode() const;
		JString getTitle() const;
		jint getTop() const;
		jint getWidth() const;
	};
} // namespace android::app::assist

