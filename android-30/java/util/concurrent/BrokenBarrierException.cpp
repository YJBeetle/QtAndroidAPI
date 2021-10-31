#include "./BrokenBarrierException.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	BrokenBarrierException::BrokenBarrierException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	BrokenBarrierException::BrokenBarrierException()
		: java::lang::Exception(
			"java.util.concurrent.BrokenBarrierException",
			"()V"
		) {}
	BrokenBarrierException::BrokenBarrierException(jstring arg0)
		: java::lang::Exception(
			"java.util.concurrent.BrokenBarrierException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::util::concurrent

