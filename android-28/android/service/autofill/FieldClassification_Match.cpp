#include "./FieldClassification_Match.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QAndroidJniObject forward
	FieldClassification_Match::FieldClassification_Match(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring FieldClassification_Match::getCategoryId()
	{
		return callObjectMethod(
			"getCategoryId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jfloat FieldClassification_Match::getScore()
	{
		return callMethod<jfloat>(
			"getScore",
			"()F"
		);
	}
	jstring FieldClassification_Match::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::service::autofill

