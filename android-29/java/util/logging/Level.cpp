#include "../Locale.hpp"
#include "./Level.hpp"

namespace java::util::logging
{
	// Fields
	QAndroidJniObject Level::ALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Level",
			"ALL",
			"Ljava/util/logging/Level;"
		);
	}
	QAndroidJniObject Level::CONFIG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Level",
			"CONFIG",
			"Ljava/util/logging/Level;"
		);
	}
	QAndroidJniObject Level::FINE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Level",
			"FINE",
			"Ljava/util/logging/Level;"
		);
	}
	QAndroidJniObject Level::FINER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Level",
			"FINER",
			"Ljava/util/logging/Level;"
		);
	}
	QAndroidJniObject Level::FINEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Level",
			"FINEST",
			"Ljava/util/logging/Level;"
		);
	}
	QAndroidJniObject Level::INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Level",
			"INFO",
			"Ljava/util/logging/Level;"
		);
	}
	QAndroidJniObject Level::OFF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Level",
			"OFF",
			"Ljava/util/logging/Level;"
		);
	}
	QAndroidJniObject Level::SEVERE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Level",
			"SEVERE",
			"Ljava/util/logging/Level;"
		);
	}
	QAndroidJniObject Level::WARNING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Level",
			"WARNING",
			"Ljava/util/logging/Level;"
		);
	}
	
	// QAndroidJniObject forward
	Level::Level(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Level::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
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

