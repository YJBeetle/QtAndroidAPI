#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../format/TextStyle.hpp"
#include "../temporal/ValueRange.hpp"
#include "../../util/Locale.hpp"
#include "./HijrahEra.hpp"

namespace java::time::chrono
{
	// Fields
	java::time::chrono::HijrahEra HijrahEra::AH()
	{
		return getStaticObjectField(
			"java.time.chrono.HijrahEra",
			"AH",
			"Ljava/time/chrono/HijrahEra;"
		);
	}
	
	// QAndroidJniObject forward
	HijrahEra::HijrahEra(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::time::chrono::HijrahEra HijrahEra::of(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.HijrahEra",
			"of",
			"(I)Ljava/time/chrono/HijrahEra;",
			arg0
		);
	}
	java::time::chrono::HijrahEra HijrahEra::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.HijrahEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/HijrahEra;",
			arg0.object<jstring>()
		);
	}
	JArray HijrahEra::values()
	{
		return callStaticObjectMethod(
			"java.time.chrono.HijrahEra",
			"values",
			"()[Ljava/time/chrono/HijrahEra;"
		);
	}
	JString HijrahEra::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	jint HijrahEra::getValue()
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	java::time::temporal::ValueRange HijrahEra::range(JObject arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
} // namespace java::time::chrono

