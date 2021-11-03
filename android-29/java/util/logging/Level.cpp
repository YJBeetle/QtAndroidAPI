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
	
	// QJniObject forward
	Level::Level(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::util::logging::Level Level::parse(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.util.logging.Level",
			"parse",
			"(Ljava/lang/String;)Ljava/util/logging/Level;",
			arg0
		);
	}
	jboolean Level::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Level::getLocalizedName()
	{
		return callObjectMethod(
			"getLocalizedName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Level::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Level::getResourceBundleName()
	{
		return callObjectMethod(
			"getResourceBundleName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Level::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Level::intValue()
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jstring Level::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::logging

