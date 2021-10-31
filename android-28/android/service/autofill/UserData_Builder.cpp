#include "../../os/Bundle.hpp"
#include "./UserData.hpp"
#include "./UserData_Builder.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QJniObject forward
	UserData_Builder::UserData_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	UserData_Builder::UserData_Builder(jstring arg0, jstring arg1, jstring arg2)
		: __JniBaseClass(
			"android.service.autofill.UserData$Builder",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	android::service::autofill::UserData_Builder UserData_Builder::add(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/service/autofill/UserData$Builder;",
			arg0,
			arg1
		);
	}
	android::service::autofill::UserData UserData_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/UserData;"
		);
	}
	android::service::autofill::UserData_Builder UserData_Builder::setFieldClassificationAlgorithm(jstring arg0, android::os::Bundle arg1)
	{
		return callObjectMethod(
			"setFieldClassificationAlgorithm",
			"(Ljava/lang/String;Landroid/os/Bundle;)Landroid/service/autofill/UserData$Builder;",
			arg0,
			arg1.object()
		);
	}
} // namespace android::service::autofill

