#pragma once

#include "./ThreadLocal.hpp"

class JObject;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit InheritableThreadLocal(const char *className, const char *sig, Ts...agv) : java::lang::ThreadLocal(className, sig, std::forward<Ts>(agv)...) {}
		InheritableThreadLocal(QJniObject obj);
		
		// Constructors
		InheritableThreadLocal();
		
		// Methods
	};
} // namespace java::lang

