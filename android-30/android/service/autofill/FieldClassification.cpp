#include "./FieldClassification.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QAndroidJniObject forward
	FieldClassification::FieldClassification(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass FieldClassification::getMatches()
	{
		return callObjectMethod(
			"getMatches",
			"()Ljava/util/List;"
		);
	}
	jstring FieldClassification::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::service::autofill

