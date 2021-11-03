#include "../../../JString.hpp"
#include "./FieldClassification.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QJniObject forward
	FieldClassification::FieldClassification(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject FieldClassification::getMatches() const
	{
		return callObjectMethod(
			"getMatches",
			"()Ljava/util/List;"
		);
	}
	JString FieldClassification::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::service::autofill

