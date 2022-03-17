#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../format/TextStyle.def.hpp"
#include "../../util/Locale.def.hpp"
#include "./MinguoEra.def.hpp"

namespace java::time::chrono
{
	// Fields
	inline java::time::chrono::MinguoEra MinguoEra::BEFORE_ROC()
	{
		return getStaticObjectField(
			"java.time.chrono.MinguoEra",
			"BEFORE_ROC",
			"Ljava/time/chrono/MinguoEra;"
		);
	}
	inline java::time::chrono::MinguoEra MinguoEra::ROC()
	{
		return getStaticObjectField(
			"java.time.chrono.MinguoEra",
			"ROC",
			"Ljava/time/chrono/MinguoEra;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::chrono::MinguoEra MinguoEra::of(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.MinguoEra",
			"of",
			"(I)Ljava/time/chrono/MinguoEra;",
			arg0
		);
	}
	inline java::time::chrono::MinguoEra MinguoEra::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.MinguoEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/MinguoEra;",
			arg0.object<jstring>()
		);
	}
	inline JArray MinguoEra::values()
	{
		return callStaticObjectMethod(
			"java.time.chrono.MinguoEra",
			"values",
			"()[Ljava/time/chrono/MinguoEra;"
		);
	}
	inline JString MinguoEra::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint MinguoEra::getValue() const
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
} // namespace java::time::chrono

// Base class headers
#include "../../lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time::chrono;
#endif
