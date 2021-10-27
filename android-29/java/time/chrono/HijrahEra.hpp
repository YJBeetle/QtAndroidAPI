#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"

namespace java::time::format
{
	class TextStyle;
}
namespace java::time::temporal
{
	class ValueRange;
}
namespace java::util
{
	class Locale;
}

namespace java::time::chrono
{
	class HijrahEra : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject AH();
		
		HijrahEra(QAndroidJniObject obj);
		// Constructors
		HijrahEra() = default;
		
		// Methods
		static QAndroidJniObject of(jint arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
		jstring getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1);
		jint getValue();
		QAndroidJniObject range(__JniBaseClass arg0);
	};
} // namespace java::time::chrono

