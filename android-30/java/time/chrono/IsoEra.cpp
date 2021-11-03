#include "../../../JArray.hpp"
#include "../../../JString.hpp"
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
	
	// QJniObject forward
	IsoEra::IsoEra(QJniObject obj) : java::lang::Enum(obj) {}
	
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
	java::time::chrono::IsoEra IsoEra::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.IsoEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/IsoEra;",
			arg0.object<jstring>()
		);
	}
	JArray IsoEra::values()
	{
		return callStaticObjectMethod(
			"java.time.chrono.IsoEra",
			"values",
			"()[Ljava/time/chrono/IsoEra;"
		);
	}
	jint IsoEra::getValue()
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
} // namespace java::time::chrono

