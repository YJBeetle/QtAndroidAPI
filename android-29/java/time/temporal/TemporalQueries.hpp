#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::time::temporal
{
	class TemporalQueries : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TemporalQueries(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TemporalQueries(QJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass chronology();
		static __JniBaseClass localDate();
		static __JniBaseClass localTime();
		static __JniBaseClass offset();
		static __JniBaseClass precision();
		static __JniBaseClass zone();
		static __JniBaseClass zoneId();
	};
} // namespace java::time::temporal

