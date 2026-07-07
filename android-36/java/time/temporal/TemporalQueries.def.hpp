#pragma once

#include "../../../JObject.hpp"

namespace java::time::temporal
{
	class TemporalQueries : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TemporalQueries(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TemporalQueries(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject chronology();
		static JObject localDate();
		static JObject localTime();
		static JObject offset();
		static JObject precision();
		static JObject zone();
		static JObject zoneId();
	};
} // namespace java::time::temporal

