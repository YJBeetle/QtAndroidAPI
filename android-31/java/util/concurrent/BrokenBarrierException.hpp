#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"


namespace java::util::concurrent
{
	class BrokenBarrierException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BrokenBarrierException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		BrokenBarrierException(QAndroidJniObject obj);
		
		// Constructors
		BrokenBarrierException();
		BrokenBarrierException(jstring arg0);
		
		// Methods
	};
} // namespace java::util::concurrent

