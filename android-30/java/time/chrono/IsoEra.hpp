#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./IsoEra.def.hpp"

namespace java::time::chrono
{
	// Fields
	inline java::time::chrono::IsoEra IsoEra::BCE()
	{
		return getStaticObjectField(
			"java.time.chrono.IsoEra",
			"BCE",
			"Ljava/time/chrono/IsoEra;"
		);
	}
	inline java::time::chrono::IsoEra IsoEra::CE()
	{
		return getStaticObjectField(
			"java.time.chrono.IsoEra",
			"CE",
			"Ljava/time/chrono/IsoEra;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::chrono::IsoEra IsoEra::of(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.IsoEra",
			"of",
			"(I)Ljava/time/chrono/IsoEra;",
			arg0
		);
	}
	inline java::time::chrono::IsoEra IsoEra::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.IsoEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/IsoEra;",
			arg0.object<jstring>()
		);
	}
	inline JArray IsoEra::values()
	{
		return callStaticObjectMethod(
			"java.time.chrono.IsoEra",
			"values",
			"()[Ljava/time/chrono/IsoEra;"
		);
	}
	inline jint IsoEra::getValue() const
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
} // namespace java::time::chrono

// Base class headers
#include "../../lang/Enum.hpp"

