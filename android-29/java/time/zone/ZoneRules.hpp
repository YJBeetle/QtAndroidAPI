#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::time
{
	class Duration;
}
namespace java::time
{
	class Instant;
}
namespace java::time
{
	class LocalDateTime;
}
namespace java::time
{
	class ZoneOffset;
}
namespace java::time::zone
{
	class ZoneOffsetTransition;
}

namespace java::time::zone
{
	class ZoneRules : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZoneRules(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ZoneRules(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject of(java::time::ZoneOffset arg0);
		static QAndroidJniObject of(java::time::ZoneOffset arg0, java::time::ZoneOffset arg1, __JniBaseClass arg2, __JniBaseClass arg3, __JniBaseClass arg4);
		jboolean equals(jobject arg0);
		QAndroidJniObject getDaylightSavings(java::time::Instant arg0);
		QAndroidJniObject getOffset(java::time::Instant arg0);
		QAndroidJniObject getOffset(java::time::LocalDateTime arg0);
		QAndroidJniObject getStandardOffset(java::time::Instant arg0);
		QAndroidJniObject getTransition(java::time::LocalDateTime arg0);
		QAndroidJniObject getTransitionRules();
		QAndroidJniObject getTransitions();
		QAndroidJniObject getValidOffsets(java::time::LocalDateTime arg0);
		jint hashCode();
		jboolean isDaylightSavings(java::time::Instant arg0);
		jboolean isFixedOffset();
		jboolean isValidOffset(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1);
		QAndroidJniObject nextTransition(java::time::Instant arg0);
		QAndroidJniObject previousTransition(java::time::Instant arg0);
		jstring toString();
	};
} // namespace java::time::zone

