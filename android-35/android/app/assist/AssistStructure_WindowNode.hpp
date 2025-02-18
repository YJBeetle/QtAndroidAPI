#pragma once

#include "./AssistStructure_ViewNode.def.hpp"
#include "../../../JString.hpp"
#include "./AssistStructure_WindowNode.def.hpp"

namespace android::app::assist
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint AssistStructure_WindowNode::getDisplayId() const
	{
		return callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	inline jint AssistStructure_WindowNode::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline jint AssistStructure_WindowNode::getLeft() const
	{
		return callMethod<jint>(
			"getLeft",
			"()I"
		);
	}
	inline android::app::assist::AssistStructure_ViewNode AssistStructure_WindowNode::getRootViewNode() const
	{
		return callObjectMethod(
			"getRootViewNode",
			"()Landroid/app/assist/AssistStructure$ViewNode;"
		);
	}
	inline JString AssistStructure_WindowNode::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint AssistStructure_WindowNode::getTop() const
	{
		return callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	inline jint AssistStructure_WindowNode::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace android::app::assist

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::assist;
#endif
