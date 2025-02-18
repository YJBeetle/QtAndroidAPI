#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
namespace java::time::format
{
	class ResolverStyle;
}
namespace java::time::temporal
{
	class ChronoField;
}
namespace java::util
{
	class Locale;
}
namespace java::util::concurrent
{
	class ConcurrentHashMap;
}

namespace java::time::chrono
{
	class AbstractChronology : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractChronology(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractChronology(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint compareTo(JObject arg0) const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		JObject resolveDate(JObject arg0, java::time::format::ResolverStyle arg1) const;
		JString toString() const;
	};
} // namespace java::time::chrono

