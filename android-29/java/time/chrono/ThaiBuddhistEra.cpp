#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../format/TextStyle.hpp"
#include "../../util/Locale.hpp"
#include "./ThaiBuddhistEra.hpp"

namespace java::time::chrono
{
	// Fields
	java::time::chrono::ThaiBuddhistEra ThaiBuddhistEra::BE()
	{
		return getStaticObjectField(
			"java.time.chrono.ThaiBuddhistEra",
			"BE",
			"Ljava/time/chrono/ThaiBuddhistEra;"
		);
	}
	java::time::chrono::ThaiBuddhistEra ThaiBuddhistEra::BEFORE_BE()
	{
		return getStaticObjectField(
			"java.time.chrono.ThaiBuddhistEra",
			"BEFORE_BE",
			"Ljava/time/chrono/ThaiBuddhistEra;"
		);
	}
	
	// QJniObject forward
	ThaiBuddhistEra::ThaiBuddhistEra(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::time::chrono::ThaiBuddhistEra ThaiBuddhistEra::of(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistEra",
			"of",
			"(I)Ljava/time/chrono/ThaiBuddhistEra;",
			arg0
		);
	}
	java::time::chrono::ThaiBuddhistEra ThaiBuddhistEra::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/ThaiBuddhistEra;",
			arg0.object<jstring>()
		);
	}
	JArray ThaiBuddhistEra::values()
	{
		return callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistEra",
			"values",
			"()[Ljava/time/chrono/ThaiBuddhistEra;"
		);
	}
	JString ThaiBuddhistEra::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	jint ThaiBuddhistEra::getValue()
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
} // namespace java::time::chrono

