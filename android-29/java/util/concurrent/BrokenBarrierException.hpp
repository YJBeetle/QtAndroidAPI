#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"


namespace java::util::concurrent
{
	class BrokenBarrierException : public java::lang::Exception
	{
	public:
		// Fields
		
		BrokenBarrierException(QAndroidJniObject obj);
		// Constructors
		BrokenBarrierException();
		BrokenBarrierException(jstring &arg0);
		BrokenBarrierException(const QString &arg0);
		
		// Methods
	};
} // namespace java::util::concurrent

