#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::time::temporal
{
	class TemporalQueries : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TemporalQueries(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TemporalQueries(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject chronology();
		static QAndroidJniObject localDate();
		static QAndroidJniObject localTime();
		static QAndroidJniObject offset();
		static QAndroidJniObject precision();
		static QAndroidJniObject zone();
		static QAndroidJniObject zoneId();
	};
} // namespace java::time::temporal

