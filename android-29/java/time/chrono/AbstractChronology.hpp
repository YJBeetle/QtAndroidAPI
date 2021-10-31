#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class AbstractChronology : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractChronology(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AbstractChronology(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint compareTo(jobject arg0);
		jint compareTo(__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		__JniBaseClass resolveDate(__JniBaseClass arg0, java::time::format::ResolverStyle arg1);
		jstring toString();
	};
} // namespace java::time::chrono

