#pragma once

#include "../../lang/Enum.hpp"

class JArray;
class JString;

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
		Collector_Characteristics(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::util::stream::Collector_Characteristics valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::util::stream

