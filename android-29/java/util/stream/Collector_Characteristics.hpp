#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./Collector_Characteristics.def.hpp"

namespace java::util::stream
{
	// Fields
	inline java::util::stream::Collector_Characteristics Collector_Characteristics::CONCURRENT()
	{
		return getStaticObjectField(
			"java.util.stream.Collector$Characteristics",
			"CONCURRENT",
			"Ljava/util/stream/Collector$Characteristics;"
		);
	}
	inline java::util::stream::Collector_Characteristics Collector_Characteristics::IDENTITY_FINISH()
	{
		return getStaticObjectField(
			"java.util.stream.Collector$Characteristics",
			"IDENTITY_FINISH",
			"Ljava/util/stream/Collector$Characteristics;"
		);
	}
	inline java::util::stream::Collector_Characteristics Collector_Characteristics::UNORDERED()
	{
		return getStaticObjectField(
			"java.util.stream.Collector$Characteristics",
			"UNORDERED",
			"Ljava/util/stream/Collector$Characteristics;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::util::stream::Collector_Characteristics Collector_Characteristics::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collector$Characteristics",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/stream/Collector$Characteristics;",
			arg0.object<jstring>()
		);
	}
	inline JArray Collector_Characteristics::values()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collector$Characteristics",
			"values",
			"()[Ljava/util/stream/Collector$Characteristics;"
		);
	}
} // namespace java::util::stream

// Base class headers
#include "../../lang/Enum.hpp"

