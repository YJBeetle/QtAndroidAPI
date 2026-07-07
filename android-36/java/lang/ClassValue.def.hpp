#pragma once

#include "../../JObject.hpp"

class JArray;
class JClass;
class JObject;
namespace java::util::concurrent::atomic
{
	class AtomicInteger;
}

namespace java::lang
{
	class ClassValue : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClassValue(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ClassValue(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject get(JClass arg0) const;
		void remove(JClass arg0) const;
	};
} // namespace java::lang

