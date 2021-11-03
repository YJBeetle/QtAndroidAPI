#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractChronology(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractChronology(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint compareTo(jobject arg0);
		jint compareTo(JObject arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		JObject resolveDate(JObject arg0, java::time::format::ResolverStyle arg1);
		jstring toString();
	};
} // namespace java::time::chrono

