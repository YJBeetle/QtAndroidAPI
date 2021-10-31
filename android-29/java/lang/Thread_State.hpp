#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Enum.hpp"


namespace java::lang
{
	class Thread_State : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BLOCKED();
		static QAndroidJniObject NEW();
		static QAndroidJniObject RUNNABLE();
		static QAndroidJniObject TERMINATED();
		static QAndroidJniObject TIMED_WAITING();
		static QAndroidJniObject WAITING();
		
		Thread_State(QAndroidJniObject obj);
		// Constructors
		Thread_State() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::lang

