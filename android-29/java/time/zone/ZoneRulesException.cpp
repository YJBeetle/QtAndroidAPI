#include "./ZoneRulesException.hpp"

namespace java::time::zone
{
	// Fields
	
	ZoneRulesException::ZoneRulesException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ZoneRulesException::ZoneRulesException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.time.zone.ZoneRulesException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ZoneRulesException::ZoneRulesException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.time.zone.ZoneRulesException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	ZoneRulesException::ZoneRulesException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.time.zone.ZoneRulesException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	ZoneRulesException::ZoneRulesException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.time.zone.ZoneRulesException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::time::zone

