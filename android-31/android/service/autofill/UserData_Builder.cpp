#include "../../os/Bundle.hpp"
#include "./UserData.hpp"
#include "../../../JString.hpp"
#include "./UserData_Builder.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QAndroidJniObject forward
	UserData_Builder::UserData_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	UserData_Builder::UserData_Builder(JString arg0, JString arg1, JString arg2)
		: JObject(
			"android.service.autofill.UserData$Builder",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	android::service::autofill::UserData_Builder UserData_Builder::add(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/service/autofill/UserData$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::service::autofill::UserData UserData_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/UserData;"
		);
	}
	android::service::autofill::UserData_Builder UserData_Builder::setFieldClassificationAlgorithm(JString arg0, android::os::Bundle arg1) const
	{
		return callObjectMethod(
			"setFieldClassificationAlgorithm",
			"(Ljava/lang/String;Landroid/os/Bundle;)Landroid/service/autofill/UserData$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::service::autofill::UserData_Builder UserData_Builder::setFieldClassificationAlgorithmForCategory(JString arg0, JString arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"setFieldClassificationAlgorithmForCategory",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/service/autofill/UserData$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
} // namespace android::service::autofill

