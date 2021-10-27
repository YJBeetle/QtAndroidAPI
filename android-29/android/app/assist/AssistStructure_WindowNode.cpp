#include "./AssistStructure_ViewNode.hpp"
#include "./AssistStructure_WindowNode.hpp"

namespace android::app::assist
{
	// Fields
	
	AssistStructure_WindowNode::AssistStructure_WindowNode(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint AssistStructure_WindowNode::getDisplayId()
	{
		return __thiz.callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	jint AssistStructure_WindowNode::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint AssistStructure_WindowNode::getLeft()
	{
		return __thiz.callMethod<jint>(
			"getLeft",
			"()I"
		);
	}
	QAndroidJniObject AssistStructure_WindowNode::getRootViewNode()
	{
		return __thiz.callObjectMethod(
			"getRootViewNode",
			"()Landroid/app/assist/AssistStructure$ViewNode;"
		);
	}
	jstring AssistStructure_WindowNode::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AssistStructure_WindowNode::getTop()
	{
		return __thiz.callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	jint AssistStructure_WindowNode::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace android::app::assist

