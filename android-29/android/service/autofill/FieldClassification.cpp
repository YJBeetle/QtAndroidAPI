#include "../../../java/util/ArrayList.hpp"
#include "./FieldClassification.hpp"

namespace android::service::autofill
{
	// Fields
	
	FieldClassification::FieldClassification(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject FieldClassification::getMatches()
	{
		return __thiz.callObjectMethod(
			"getMatches",
			"()Ljava/util/List;"
		);
	}
	jstring FieldClassification::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::service::autofill

