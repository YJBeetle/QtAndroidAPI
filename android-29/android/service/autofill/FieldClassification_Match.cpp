#include "./FieldClassification_Match.hpp"

namespace android::service::autofill
{
	// Fields
	
	FieldClassification_Match::FieldClassification_Match(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring FieldClassification_Match::getCategoryId()
	{
		return __thiz.callObjectMethod(
			"getCategoryId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jfloat FieldClassification_Match::getScore()
	{
		return __thiz.callMethod<jfloat>(
			"getScore",
			"()F"
		);
	}
	jstring FieldClassification_Match::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::service::autofill

