#include "../../../JString.hpp"
#include "./FieldClassification_Match.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QJniObject forward
	FieldClassification_Match::FieldClassification_Match(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString FieldClassification_Match::getCategoryId()
	{
		return callObjectMethod(
			"getCategoryId",
			"()Ljava/lang/String;"
		);
	}
	jfloat FieldClassification_Match::getScore()
	{
		return callMethod<jfloat>(
			"getScore",
			"()F"
		);
	}
	JString FieldClassification_Match::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::service::autofill

