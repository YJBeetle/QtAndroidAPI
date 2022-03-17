#pragma once

#include "../../../JObject.hpp"

class JArray;
class JObject;
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent
{
	class Exchanger : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Exchanger(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Exchanger(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Exchanger();
		
		// Methods
		JObject exchange(JObject arg0) const;
		JObject exchange(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const;
	};
} // namespace java::util::concurrent

