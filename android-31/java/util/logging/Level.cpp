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
	
	// QAndroidJniObject forward
	Level::Level(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jboolean Level::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString Level::getLocalizedName()
	{
		return callObjectMethod(
			"getLocalizedName",
			"()Ljava/lang/String;"
		);
	}
	JString Level::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JString Level::getResourceBundleName()
	{
		return callObjectMethod(
			"getResourceBundleName",
			"()Ljava/lang/String;"
		);
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
	JString Level::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::logging

