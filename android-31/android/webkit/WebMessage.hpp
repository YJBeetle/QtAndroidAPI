#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./WebMessage.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline WebMessage::WebMessage(JString arg0)
		: JObject(
			"android.webkit.WebMessage",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline WebMessage::WebMessage(JString arg0, JArray arg1)
		: JObject(
			"android.webkit.WebMessage",
			"(Ljava/lang/String;[Landroid/webkit/WebMessagePort;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		) {}
	
	// Methods
	inline JString WebMessage::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Ljava/lang/String;"
		);
	}
	inline JArray WebMessage::getPorts() const
	{
		return callObjectMethod(
			"getPorts",
			"()[Landroid/webkit/WebMessagePort;"
		);
	}
} // namespace android::webkit

// Base class headers

