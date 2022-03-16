#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AlphabeticIndex_Record.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject AlphabeticIndex_Record::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Ljava/lang/Object;"
		);
	}
	JString AlphabeticIndex_Record::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString AlphabeticIndex_Record::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

