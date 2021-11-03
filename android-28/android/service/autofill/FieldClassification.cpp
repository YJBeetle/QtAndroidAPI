#include "../../../java/util/ArrayList.hpp"
#include "./FieldClassification.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QJniObject forward
	FieldClassification::FieldClassification(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject FieldClassification::getMatches()
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

