#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../Locale.hpp"
#include "./Level.hpp"

namespace java::util::logging
{
	// Fields
	java::util::logging::Level Level::ALL()
	{
		return getStaticObjectField(
			"java.util.logging.Level",
			"ALL",
			"Ljava/util/logging/Level;"
		);
	}
	java::util::logging::Level Level::CONFIG()
	{
		return getStaticObjectField(
			"java.util.logging.Level",
			"CONFIG",
			"Ljava/util/logging/Level;"
		);
	}
	java::util::logging::Level Level::FINE()
	{
		return getStaticObjectField(
			"java.util.logging.Level",
			"FINE",
			"Ljava/util/logging/Level;"
		);
	}
	java::util::logging::Level Level::FINER()
	{
		return getStaticObjectField(
			"java.util.logging.Level",
			"FINER",
			"Ljava/util/logging/Level;"
		);
	}
	java::util::logging::Level Level::FINEST()
	{
		return getStaticObjectField(
			"java.util.logging.Level",
			"FINEST",
			"Ljava/util/logging/Level;"
		);
	}
	java::util::logging::Level Level::INFO()
	{
		return getStaticObjectField(
			"java.util.logging.Level",
			"INFO",
			"Ljava/util/logging/Level;"
		);
	}
	java::util::logging::Level Level::OFF()
	{
		return getStaticObjectField(
			"java.util.logging.Level",
			"OFF",
			"Ljava/util/logging/Level;"
		);
	}
	java::util::logging::Level Level::SEVERE()
	{
		return getStaticObjectField(
			"java.util.logging.Level",
			"SEVERE",
			"Ljava/util/logging/Level;"
		);
	}
	java::util::logging::Level Level::WARNING()
	{
		return getStaticObjectField(
			"java.util.logging.Level",
			"WARNING",
			"Ljava/util/logging/Level;"
		);
	}
	
	// Constructors
	
	// Methods
	java::util::logging::Level Level::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.logging.Level",
			"parse",
			"(Ljava/lang/String;)Ljava/util/logging/Level;",
			arg0.object<jstring>()
		);
	}
	jboolean Level::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString Level::getLocalizedName() const
	{
		return callObjectMethod(
			"getLocalizedName",
			"()Ljava/lang/String;"
		);
	}
	JString Level::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JString Level::getResourceBundleName() const
	{
		return callObjectMethod(
			"getResourceBundleName",
			"()Ljava/lang/String;"
		);
	}
	jint Level::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Level::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	JString Level::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::logging

