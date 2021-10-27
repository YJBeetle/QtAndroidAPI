#include "./Thread_State.hpp"

namespace java::lang
{
	// Fields
	QAndroidJniObject Thread_State::BLOCKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Thread$State",
			"BLOCKED",
			"Ljava/lang/Thread$State;"
		);
	}
	QAndroidJniObject Thread_State::NEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Thread$State",
			"NEW",
			"Ljava/lang/Thread$State;"
		);
	}
	QAndroidJniObject Thread_State::RUNNABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Thread$State",
			"RUNNABLE",
			"Ljava/lang/Thread$State;"
		);
	}
	QAndroidJniObject Thread_State::TERMINATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Thread$State",
			"TERMINATED",
			"Ljava/lang/Thread$State;"
		);
	}
	QAndroidJniObject Thread_State::TIMED_WAITING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Thread$State",
			"TIMED_WAITING",
			"Ljava/lang/Thread$State;"
		);
	}
	QAndroidJniObject Thread_State::WAITING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Thread$State",
			"WAITING",
			"Ljava/lang/Thread$State;"
		);
	}
	
	Thread_State::Thread_State(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Thread_State::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Thread$State",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Thread$State;",
			arg0
		);
	}
	QAndroidJniObject Thread_State::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Thread$State",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Thread$State;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Thread_State::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Thread$State",
			"values",
			"()[Ljava/lang/Thread$State;"
		).object<jarray>();
	}
} // namespace java::lang

