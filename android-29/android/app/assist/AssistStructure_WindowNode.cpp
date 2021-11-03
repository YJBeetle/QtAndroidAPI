#include "./AssistStructure_ViewNode.hpp"
#include "./AssistStructure_WindowNode.hpp"

namespace android::app::assist
{
	// Fields
	
	// QAndroidJniObject forward
	AssistStructure_WindowNode::AssistStructure_WindowNode(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint AssistStructure_WindowNode::getDisplayId()
	{
		return callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	jint AssistStructure_WindowNode::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint AssistStructure_WindowNode::getLeft()
	{
		return callMethod<jint>(
			"getLeft",
			"()I"
		);
	}
	android::app::assist::AssistStructure_ViewNode AssistStructure_WindowNode::getRootViewNode()
	{
		return callObjectMethod(
			"getRootViewNode",
			"()Landroid/app/assist/AssistStructure$ViewNode;"
		);
	}
	jstring AssistStructure_WindowNode::getTitle()
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AssistStructure_WindowNode::getTop()
	{
		return callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	jint AssistStructure_WindowNode::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace android::app::assist

