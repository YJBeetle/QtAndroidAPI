#include "./IsoEra.hpp"

namespace java::time::chrono
{
	// Fields
	java::time::chrono::IsoEra IsoEra::BCE()
	{
		return getStaticObjectField(
			"java.time.chrono.IsoEra",
			"BCE",
			"Ljava/time/chrono/IsoEra;"
		);
	}
	java::time::chrono::IsoEra IsoEra::CE()
	{
		return getStaticObjectField(
			"java.time.chrono.IsoEra",
			"CE",
			"Ljava/time/chrono/IsoEra;"
		);
	}
	
	// QAndroidJniObject forward
	IsoEra::IsoEra(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::time::chrono::IsoEra IsoEra::of(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.IsoEra",
			"of",
			"(I)Ljava/time/chrono/IsoEra;",
			arg0
		);
	}
	java::time::chrono::IsoEra IsoEra::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.IsoEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/IsoEra;",
			arg0
		);
	}
	jarray IsoEra::values()
	{
		return callStaticObjectMethod(
			"java.time.chrono.IsoEra",
			"values",
			"()[Ljava/time/chrono/IsoEra;"
		).object<jarray>();
	}
	jint IsoEra::getValue()
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
} // namespace java::time::chrono

