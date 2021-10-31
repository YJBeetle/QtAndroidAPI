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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InheritableThreadLocal(const char *className, const char *sig, Ts...agv) : java::lang::ThreadLocal(className, sig, std::forward<Ts>(agv)...) {}
		InheritableThreadLocal(QAndroidJniObject obj);
		
		// Constructors
		InheritableThreadLocal();
		
		// Methods
	};
} // namespace java::lang
