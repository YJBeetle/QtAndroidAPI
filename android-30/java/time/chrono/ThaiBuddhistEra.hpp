#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../format/TextStyle.def.hpp"
#include "../../util/Locale.def.hpp"
#include "./ThaiBuddhistEra.def.hpp"

namespace java::time::chrono
{
	// Fields
	inline java::time::chrono::ThaiBuddhistEra ThaiBuddhistEra::BE()
	{
		return getStaticObjectField(
			"java.time.chrono.ThaiBuddhistEra",
			"BE",
			"Ljava/time/chrono/ThaiBuddhistEra;"
		);
	}
	inline java::time::chrono::ThaiBuddhistEra ThaiBuddhistEra::BEFORE_BE()
	{
		return getStaticObjectField(
			"java.time.chrono.ThaiBuddhistEra",
			"BEFORE_BE",
			"Ljava/time/chrono/ThaiBuddhistEra;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::chrono::ThaiBuddhistEra ThaiBuddhistEra::of(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistEra",
			"of",
			"(I)Ljava/time/chrono/ThaiBuddhistEra;",
			arg0
		);
	}
	inline java::time::chrono::ThaiBuddhistEra ThaiBuddhistEra::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/ThaiBuddhistEra;",
			arg0.object<jstring>()
		);
	}
	inline JArray ThaiBuddhistEra::values()
	{
		return callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistEra",
			"values",
			"()[Ljava/time/chrono/ThaiBuddhistEra;"
		);
	}
	inline JString ThaiBuddhistEra::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint ThaiBuddhistEra::getValue() const
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
} // namespace java::time::chrono

// Base class headers
#include "../../lang/Enum.hpp"

