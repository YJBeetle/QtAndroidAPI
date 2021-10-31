#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class CancellationSignal : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CancellationSignal(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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

