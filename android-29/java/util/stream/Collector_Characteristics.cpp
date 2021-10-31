#include "./Collector_Characteristics.hpp"

namespace java::util::stream
{
	// Fields
	java::util::stream::Collector_Characteristics Collector_Characteristics::CONCURRENT()
	{
		return getStaticObjectField(
			"java.util.stream.Collector$Characteristics",
			"CONCURRENT",
			"Ljava/util/stream/Collector$Characteristics;"
		);
	}
	java::util::stream::Collector_Characteristics Collector_Characteristics::IDENTITY_FINISH()
	{
		return getStaticObjectField(
			"java.util.stream.Collector$Characteristics",
			"IDENTITY_FINISH",
			"Ljava/util/stream/Collector$Characteristics;"
		);
	}
	java::util::stream::Collector_Characteristics Collector_Characteristics::UNORDERED()
	{
		return getStaticObjectField(
			"java.util.stream.Collector$Characteristics",
			"UNORDERED",
			"Ljava/util/stream/Collector$Characteristics;"
		);
	}
	
	// QAndroidJniObject forward
	Collector_Characteristics::Collector_Characteristics(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::util::stream::Collector_Characteristics Collector_Characteristics::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collector$Characteristics",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/stream/Collector$Characteristics;",
			arg0
		);
	}
	jarray Collector_Characteristics::values()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collector$Characteristics",
			"values",
			"()[Ljava/util/stream/Collector$Characteristics;"
		).object<jarray>();
	}
} // namespace java::util::stream

