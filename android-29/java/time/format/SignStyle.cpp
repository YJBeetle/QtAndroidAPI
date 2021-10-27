#include "./SignStyle.hpp"

namespace java::time::format
{
	// Fields
	QAndroidJniObject SignStyle::ALWAYS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.SignStyle",
			"ALWAYS",
			"Ljava/time/format/SignStyle;"
		);
	}
	QAndroidJniObject SignStyle::EXCEEDS_PAD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.SignStyle",
			"EXCEEDS_PAD",
			"Ljava/time/format/SignStyle;"
		);
	}
	QAndroidJniObject SignStyle::NEVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.SignStyle",
			"NEVER",
			"Ljava/time/format/SignStyle;"
		);
	}
	QAndroidJniObject SignStyle::NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.SignStyle",
			"NORMAL",
			"Ljava/time/format/SignStyle;"
		);
	}
	QAndroidJniObject SignStyle::NOT_NEGATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.SignStyle",
			"NOT_NEGATIVE",
			"Ljava/time/format/SignStyle;"
		);
	}
	
	SignStyle::SignStyle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject SignStyle::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.SignStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/SignStyle;",
			arg0
		);
	}
	QAndroidJniObject SignStyle::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.SignStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/SignStyle;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray SignStyle::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.SignStyle",
			"values",
			"()[Ljava/time/format/SignStyle;"
		).object<jarray>();
	}
} // namespace java::time::format

