#include "./TextStyle.hpp"

namespace java::time::format
{
	// Fields
	QAndroidJniObject TextStyle::FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.TextStyle",
			"FULL",
			"Ljava/time/format/TextStyle;"
		);
	}
	QAndroidJniObject TextStyle::FULL_STANDALONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.TextStyle",
			"FULL_STANDALONE",
			"Ljava/time/format/TextStyle;"
		);
	}
	QAndroidJniObject TextStyle::NARROW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.TextStyle",
			"NARROW",
			"Ljava/time/format/TextStyle;"
		);
	}
	QAndroidJniObject TextStyle::NARROW_STANDALONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.TextStyle",
			"NARROW_STANDALONE",
			"Ljava/time/format/TextStyle;"
		);
	}
	QAndroidJniObject TextStyle::SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.TextStyle",
			"SHORT",
			"Ljava/time/format/TextStyle;"
		);
	}
	QAndroidJniObject TextStyle::SHORT_STANDALONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.TextStyle",
			"SHORT_STANDALONE",
			"Ljava/time/format/TextStyle;"
		);
	}
	
	// QAndroidJniObject forward
	TextStyle::TextStyle(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject TextStyle::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.TextStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/TextStyle;",
			arg0
		);
	}
	jarray TextStyle::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.TextStyle",
			"values",
			"()[Ljava/time/format/TextStyle;"
		).object<jarray>();
	}
	QAndroidJniObject TextStyle::asNormal()
	{
		return callObjectMethod(
			"asNormal",
			"()Ljava/time/format/TextStyle;"
		);
	}
	QAndroidJniObject TextStyle::asStandalone()
	{
		return callObjectMethod(
			"asStandalone",
			"()Ljava/time/format/TextStyle;"
		);
	}
	jboolean TextStyle::isStandalone()
	{
		return callMethod<jboolean>(
			"isStandalone",
			"()Z"
		);
	}
} // namespace java::time::format
