#pragma once

#include "../../java/lang/Thread.hpp"

namespace android::os
{
	class Looper;
}
class JString;

namespace android::os
{
	class HandlerThread : public java::lang::Thread
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HandlerThread(const char *className, const char *sig, Ts...agv) : java::lang::Thread(className, sig, std::forward<Ts>(agv)...) {}
		HandlerThread(QJniObject obj);
		
		// Constructors
		HandlerThread(JString arg0);
		HandlerThread(JString arg0, jint arg1);
		
		// Methods
		android::os::Looper getLooper() const;
		jint getThreadId() const;
		jboolean quit() const;
		jboolean quitSafely() const;
		void run() const;
	};
} // namespace android::os

