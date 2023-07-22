#pragma once

#include "../../lang/Exception.def.hpp"

class JString;

namespace java::util::concurrent
{
	class BrokenBarrierException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BrokenBarrierException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		BrokenBarrierException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		BrokenBarrierException();
		BrokenBarrierException(JString arg0);
		
		// Methods
	};
} // namespace java::util::concurrent

