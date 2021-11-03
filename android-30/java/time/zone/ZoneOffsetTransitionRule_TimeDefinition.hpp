#pragma once

#include "../../lang/Enum.hpp"

class JArray;
class JString;
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
	class ZoneOffsetTransitionRule_TimeDefinition : public java::lang::Enum
	{
	public:
		// Fields
		static java::time::zone::ZoneOffsetTransitionRule_TimeDefinition STANDARD();
		static java::time::zone::ZoneOffsetTransitionRule_TimeDefinition UTC();
		static java::time::zone::ZoneOffsetTransitionRule_TimeDefinition WALL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZoneOffsetTransitionRule_TimeDefinition(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ZoneOffsetTransitionRule_TimeDefinition(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::zone::ZoneOffsetTransitionRule_TimeDefinition valueOf(JString arg0);
		static JArray values();
		java::time::LocalDateTime createDateTime(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneOffset arg2) const;
	};
} // namespace java::time::zone

