#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ThreadLocal.hpp"

namespace java::lang
{
	class Thread;
}

namespace java::lang
{
	class InheritableThreadLocal : public java::lang::ThreadLocal
	{
	public:
		// Fields
		
		InheritableThreadLocal(QAndroidJniObject obj);
		// Constructors
		InheritableThreadLocal();
		
		// Methods
	};
} // namespace java::lang

