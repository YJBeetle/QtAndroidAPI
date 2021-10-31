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
		static java::time::zone::ZoneRules of(java::time::ZoneOffset arg0);
		static java::time::zone::ZoneRules of(java::time::ZoneOffset arg0, java::time::ZoneOffset arg1, __JniBaseClass arg2, __JniBaseClass arg3, __JniBaseClass arg4);
		jboolean equals(jobject arg0);
		java::time::Duration getDaylightSavings(java::time::Instant arg0);
		java::time::ZoneOffset getOffset(java::time::Instant arg0);
		java::time::ZoneOffset getOffset(java::time::LocalDateTime arg0);
		java::time::ZoneOffset getStandardOffset(java::time::Instant arg0);
		java::time::zone::ZoneOffsetTransition getTransition(java::time::LocalDateTime arg0);
		__JniBaseClass getTransitionRules();
		__JniBaseClass getTransitions();
		__JniBaseClass getValidOffsets(java::time::LocalDateTime arg0);
		jint hashCode();
		jboolean isDaylightSavings(java::time::Instant arg0);
		jboolean isFixedOffset();
		jboolean isValidOffset(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1);
		java::time::zone::ZoneOffsetTransition nextTransition(java::time::Instant arg0);
		java::time::zone::ZoneOffsetTransition previousTransition(java::time::Instant arg0);
		jstring toString();
	};
} // namespace java::time::zone
