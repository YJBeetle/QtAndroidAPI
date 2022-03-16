#pragma once

#include "./ConsoleMessage_MessageLevel.def.hpp"
#include "../../JString.hpp"
#include "./ConsoleMessage.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline ConsoleMessage::ConsoleMessage(JString arg0, JString arg1, jint arg2, android::webkit::ConsoleMessage_MessageLevel arg3)
		: JObject(
			"android.webkit.ConsoleMessage",
			"(Ljava/lang/String;Ljava/lang/String;ILandroid/webkit/ConsoleMessage$MessageLevel;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object()
		) {}
	
	// Methods
	inline jint ConsoleMessage::lineNumber() const
	{
		return callMethod<jint>(
			"lineNumber",
			"()I"
		);
	}
	inline JString ConsoleMessage::message() const
	{
		return callObjectMethod(
			"message",
			"()Ljava/lang/String;"
		);
	}
	inline android::webkit::ConsoleMessage_MessageLevel ConsoleMessage::messageLevel() const
	{
		return callObjectMethod(
			"messageLevel",
			"()Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	inline JString ConsoleMessage::sourceId() const
	{
		return callObjectMethod(
			"sourceId",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::webkit

// Base class headers

