#include "../../../JString.hpp"
#include "../../../java/util/ArrayList.hpp"
#include "./FieldClassification.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QAndroidJniObject forward
	FieldClassification::FieldClassification(QAndroidJniObject obj) : JObject(obj) {}
	
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

