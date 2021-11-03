#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Enum.hpp"


namespace java::time::chrono
{
	class IsoEra : public java::lang::Enum
	{
	public:
		// Fields
		static java::time::chrono::IsoEra BCE();
		static java::time::chrono::IsoEra CE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IsoEra(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		IsoEra(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::chrono::IsoEra of(jint arg0);
		static java::time::chrono::IsoEra valueOf(jstring arg0);
		static jarray values();
		jint getValue();
	};
} // namespace java::time::chrono

