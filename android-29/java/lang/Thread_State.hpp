#pragma once

#ifndef JAVA_LANG_THREAD_STATE
#define JAVA_LANG_THREAD_STATE

#include "Enum.hpp"


namespace __jni_impl::java::lang
{
	class Thread_State : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NEW();
		static QAndroidJniObject RUNNABLE();
		static QAndroidJniObject BLOCKED();
		static QAndroidJniObject WAITING();
		static QAndroidJniObject TIMED_WAITING();
		static QAndroidJniObject TERMINATED();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	QAndroidJniObject Thread_State::NEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Thread$State",
			"NEW",
			"Ljava/lang/Thread$State;");
	}
	QAndroidJniObject Thread_State::RUNNABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Thread$State",
			"RUNNABLE",
			"Ljava/lang/Thread$State;");
	}
	QAndroidJniObject Thread_State::BLOCKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Thread$State",
			"BLOCKED",
			"Ljava/lang/Thread$State;");
	}
	QAndroidJniObject Thread_State::WAITING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Thread$State",
			"WAITING",
			"Ljava/lang/Thread$State;");
	}
	QAndroidJniObject Thread_State::TIMED_WAITING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Thread$State",
			"TIMED_WAITING",
			"Ljava/lang/Thread$State;");
	}
	QAndroidJniObject Thread_State::TERMINATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Thread$State",
			"TERMINATED",
			"Ljava/lang/Thread$State;");
	}
	
	// Constructors
	void Thread_State::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Thread$State",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Thread_State::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Thread$State",
			"values",
			"()[Ljava/lang/Thread$State;");
	}
	QAndroidJniObject Thread_State::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Thread$State",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Thread$State;",
			arg0);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Thread_State : public __jni_impl::java::lang::Thread_State
	{
	public:
		Thread_State(QAndroidJniObject obj) { __thiz = obj; }
		Thread_State()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_THREAD_STATE

