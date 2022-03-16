#pragma once

#include "../../../JObject.hpp"

class JString;
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent
{
	class CountDownLatch : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CountDownLatch(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CountDownLatch(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CountDownLatch(jint arg0);
		
		// Methods
		jboolean await(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		void await() const;
		void countDown() const;
		jlong getCount() const;
		JString toString() const;
	};
} // namespace java::util::concurrent

