#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"


namespace java::util::concurrent
{
	class BrokenBarrierException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BrokenBarrierException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		BrokenBarrierException(QJniObject obj);
		
		// Constructors
		BrokenBarrierException();
		BrokenBarrierException(jstring arg0);
		
		// Methods
	};
} // namespace java::util::concurrent

