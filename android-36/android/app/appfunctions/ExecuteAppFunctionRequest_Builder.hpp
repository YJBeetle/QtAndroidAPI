#pragma once

#include "./ExecuteAppFunctionRequest.def.hpp"
#include "../appsearch/GenericDocument.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./ExecuteAppFunctionRequest_Builder.def.hpp"

namespace android::app::appfunctions
{
	// Fields
	
	// Constructors
	inline ExecuteAppFunctionRequest_Builder::ExecuteAppFunctionRequest_Builder(JString arg0, JString arg1)
		: JObject(
			"android.app.appfunctions.ExecuteAppFunctionRequest$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline android::app::appfunctions::ExecuteAppFunctionRequest ExecuteAppFunctionRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appfunctions/ExecuteAppFunctionRequest;"
		);
	}
	inline android::app::appfunctions::ExecuteAppFunctionRequest_Builder ExecuteAppFunctionRequest_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/app/appfunctions/ExecuteAppFunctionRequest$Builder;",
			arg0.object()
		);
	}
	inline android::app::appfunctions::ExecuteAppFunctionRequest_Builder ExecuteAppFunctionRequest_Builder::setParameters(android::app::appsearch::GenericDocument arg0) const
	{
		return callObjectMethod(
			"setParameters",
			"(Landroid/app/appsearch/GenericDocument;)Landroid/app/appfunctions/ExecuteAppFunctionRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::app::appfunctions

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appfunctions;
#endif
