#include "../../../JString.hpp"
#include "./CodingErrorAction.hpp"

namespace java::nio::charset
{
	// Fields
	java::nio::charset::CodingErrorAction CodingErrorAction::IGNORE()
	{
		return getStaticObjectField(
			"java.nio.charset.CodingErrorAction",
			"IGNORE",
			"Ljava/nio/charset/CodingErrorAction;"
		);
	}
	java::nio::charset::CodingErrorAction CodingErrorAction::REPLACE()
	{
		return getStaticObjectField(
			"java.nio.charset.CodingErrorAction",
			"REPLACE",
			"Ljava/nio/charset/CodingErrorAction;"
		);
	}
	java::nio::charset::CodingErrorAction CodingErrorAction::REPORT()
	{
		return getStaticObjectField(
			"java.nio.charset.CodingErrorAction",
			"REPORT",
			"Ljava/nio/charset/CodingErrorAction;"
		);
	}
	
	// QJniObject forward
	CodingErrorAction::CodingErrorAction(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString CodingErrorAction::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::charset

