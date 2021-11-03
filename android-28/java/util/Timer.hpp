#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;
namespace java::util
{
	class Date;
}
namespace java::util
{
	class TimerTask;
}
namespace java::util::concurrent::atomic
{
	class AtomicInteger;
}

namespace java::util
{
	class Timer : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Timer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Timer(QAndroidJniObject obj);
		
		// Constructors
		Timer();
		Timer(jboolean arg0);
		Timer(JString arg0);
		Timer(JString arg0, jboolean arg1);
		
		// Methods
		void cancel() const;
		jint purge() const;
		void schedule(java::util::TimerTask arg0, java::util::Date arg1) const;
		void schedule(java::util::TimerTask arg0, jlong arg1) const;
		void schedule(java::util::TimerTask arg0, java::util::Date arg1, jlong arg2) const;
		void schedule(java::util::TimerTask arg0, jlong arg1, jlong arg2) const;
		void scheduleAtFixedRate(java::util::TimerTask arg0, java::util::Date arg1, jlong arg2) const;
		void scheduleAtFixedRate(java::util::TimerTask arg0, jlong arg1, jlong arg2) const;
	};
} // namespace java::util

