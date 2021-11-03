#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Enum.hpp"


namespace java::util::stream
{
	class Collector_Characteristics : public java::lang::Enum
	{
	public:
		// Fields
		static java::util::stream::Collector_Characteristics CONCURRENT();
		static java::util::stream::Collector_Characteristics IDENTITY_FINISH();
		static java::util::stream::Collector_Characteristics UNORDERED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Collector_Characteristics(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Collector_Characteristics(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::stream::Collector_Characteristics valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::util::stream

