#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AlphabeticIndex_Record.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	AlphabeticIndex_Record::AlphabeticIndex_Record(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject AlphabeticIndex_Record::getData()
	{
		return callObjectMethod(
			"getData",
			"()Ljava/lang/Object;"
		);
	}
	JString AlphabeticIndex_Record::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString AlphabeticIndex_Record::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

