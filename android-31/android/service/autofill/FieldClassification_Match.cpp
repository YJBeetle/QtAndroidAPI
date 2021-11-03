#include "./FieldClassification_Match.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QJniObject forward
	FieldClassification_Match::FieldClassification_Match(QJniObject obj) : JObject(obj) {}
	
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

