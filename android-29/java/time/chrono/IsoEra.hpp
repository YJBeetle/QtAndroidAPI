#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::time::chrono
{
	class IsoEra : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BCE();
		static QAndroidJniObject CE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IsoEra(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		IsoEra(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject of(jint arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
		jint getValue();
	};
} // namespace java::time::chrono

