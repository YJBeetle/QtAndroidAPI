#pragma once

#include "../../JObject.hpp"

class JObject;

namespace java::util
{
	class TimerTask : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimerTask(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TimerTask(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean cancel() const;
		void run() const;
		jlong scheduledExecutionTime() const;
	};
} // namespace java::util

