#pragma once

#include "./Enum.hpp"

class JArray;
class JString;

namespace java::lang
{
	class Thread_State : public java::lang::Enum
	{
	public:
		// Fields
		static java::lang::Thread_State BLOCKED();
		static java::lang::Thread_State NEW();
		static java::lang::Thread_State RUNNABLE();
		static java::lang::Thread_State TERMINATED();
		static java::lang::Thread_State TIMED_WAITING();
		static java::lang::Thread_State WAITING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Thread_State(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Thread_State(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::Thread_State valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::lang

