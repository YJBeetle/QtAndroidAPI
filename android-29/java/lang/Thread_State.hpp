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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Thread_State(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Thread_State(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::lang

