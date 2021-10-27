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
		
		IsoEra(QAndroidJniObject obj);
		// Constructors
		IsoEra() = default;
		
		// Methods
		static QAndroidJniObject of(jint arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
		jint getValue();
	};
} // namespace java::time::chrono

