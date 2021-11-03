#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../LocalDate.hpp"
#include "../format/TextStyle.hpp"
#include "../temporal/ValueRange.hpp"
#include "../../util/Locale.hpp"
#include "./JapaneseEra.hpp"

namespace java::time::chrono
{
	// Fields
	java::time::chrono::JapaneseEra JapaneseEra::HEISEI()
	{
		return getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"HEISEI",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	java::time::chrono::JapaneseEra JapaneseEra::MEIJI()
	{
		return getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"MEIJI",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	java::time::chrono::JapaneseEra JapaneseEra::REIWA()
	{
		return getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"REIWA",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	java::time::chrono::JapaneseEra JapaneseEra::SHOWA()
	{
		return getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"SHOWA",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	java::time::chrono::JapaneseEra JapaneseEra::TAISHO()
	{
		return getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"TAISHO",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	
	// QJniObject forward
	JapaneseEra::JapaneseEra(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::time::chrono::JapaneseEra JapaneseEra::of(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.JapaneseEra",
			"of",
			"(I)Ljava/time/chrono/JapaneseEra;",
			arg0
		);
	}
	java::time::chrono::JapaneseEra JapaneseEra::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.JapaneseEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/JapaneseEra;",
			arg0.object<jstring>()
		);
	}
	JArray JapaneseEra::values()
	{
		return callStaticObjectMethod(
			"java.time.chrono.JapaneseEra",
			"values",
			"()[Ljava/time/chrono/JapaneseEra;"
		);
	}
	JString JapaneseEra::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	jint JapaneseEra::getValue() const
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	java::time::temporal::ValueRange JapaneseEra::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	JString JapaneseEra::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::time::chrono

