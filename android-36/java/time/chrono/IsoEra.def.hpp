#pragma once

#include "../../lang/Enum.def.hpp"

class JArray;
class JString;

namespace java::time::chrono
{
	class IsoEra : public java::lang::Enum
	{
	public:
		// Fields
		static java::time::chrono::IsoEra BCE();
		static java::time::chrono::IsoEra CE();
		
		// QJniObject forward
		template<typename ...Ts> explicit IsoEra(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		IsoEra(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::time::chrono::IsoEra of(jint arg0);
		static java::time::chrono::IsoEra valueOf(JString arg0);
		static JArray values();
		jint getValue() const;
	};
} // namespace java::time::chrono

