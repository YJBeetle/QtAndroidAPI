#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class CancellationSignal : public __JniBaseClass
	{
	public:
		// Fields
		
		CancellationSignal(QAndroidJniObject obj);
		// Constructors
		CancellationSignal();
		
		// Methods
		void cancel();
		jboolean isCanceled();
		void setOnCancelListener(__JniBaseClass arg0);
		void throwIfCanceled();
	};
} // namespace android::os

