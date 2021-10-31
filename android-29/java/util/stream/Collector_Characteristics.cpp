#include "./Collector_Characteristics.hpp"

namespace java::util::stream
{
	// Fields
	QAndroidJniObject Collector_Characteristics::CONCURRENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.stream.Collector$Characteristics",
			"CONCURRENT",
			"Ljava/util/stream/Collector$Characteristics;"
		);
	}
	QAndroidJniObject Collector_Characteristics::IDENTITY_FINISH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.stream.Collector$Characteristics",
			"IDENTITY_FINISH",
			"Ljava/util/stream/Collector$Characteristics;"
		);
	}
	QAndroidJniObject Collector_Characteristics::UNORDERED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.stream.Collector$Characteristics",
			"UNORDERED",
			"Ljava/util/stream/Collector$Characteristics;"
		);
	}
	
	Collector_Characteristics::Collector_Characteristics(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Collector_Characteristics::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collector$Characteristics",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/stream/Collector$Characteristics;",
			arg0
		);
	}
	jarray Collector_Characteristics::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.Collector$Characteristics",
			"values",
			"()[Ljava/util/stream/Collector$Characteristics;"
		).object<jarray>();
	}
} // namespace java::util::stream

