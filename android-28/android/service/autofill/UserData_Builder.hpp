#pragma once

#include "../../os/Bundle.def.hpp"
#include "./UserData.def.hpp"
#include "../../../JString.hpp"
#include "./UserData_Builder.def.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	inline UserData_Builder::UserData_Builder(JString arg0, JString arg1, JString arg2)
		: JObject(
			"android.service.autofill.UserData$Builder",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline android::service::autofill::UserData_Builder UserData_Builder::add(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/service/autofill/UserData$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::service::autofill::UserData UserData_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/UserData;"
		);
	}
	inline android::service::autofill::UserData_Builder UserData_Builder::setFieldClassificationAlgorithm(JString arg0, android::os::Bundle arg1) const
	{
		return callObjectMethod(
			"setFieldClassificationAlgorithm",
			"(Ljava/lang/String;Landroid/os/Bundle;)Landroid/service/autofill/UserData$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::service::autofill

// Base class headers

