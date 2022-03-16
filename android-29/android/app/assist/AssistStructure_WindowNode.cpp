#include "./AssistStructure_ViewNode.hpp"
#include "../../../JString.hpp"
#include "./AssistStructure_WindowNode.hpp"

namespace android::app::assist
{
	// Fields
	
	// Constructors
	
	// Methods
	jint AssistStructure_WindowNode::getDisplayId() const
	{
		return callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	jint AssistStructure_WindowNode::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint AssistStructure_WindowNode::getLeft() const
	{
		return callMethod<jint>(
			"getLeft",
			"()I"
		);
	}
	android::app::assist::AssistStructure_ViewNode AssistStructure_WindowNode::getRootViewNode() const
	{
		return callObjectMethod(
			"getRootViewNode",
			"()Landroid/app/assist/AssistStructure$ViewNode;"
		);
	}
	JString AssistStructure_WindowNode::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint AssistStructure_WindowNode::getTop() const
	{
		return callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	jint AssistStructure_WindowNode::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace android::app::assist

