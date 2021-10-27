#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::time
{
	class LocalDate;
}
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
	class JapaneseEra : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject HEISEI();
		static QAndroidJniObject MEIJI();
		static QAndroidJniObject REIWA();
		static QAndroidJniObject SHOWA();
		static QAndroidJniObject TAISHO();
		
		JapaneseEra(QAndroidJniObject obj);
		// Constructors
		JapaneseEra() = default;
		
		// Methods
		static QAndroidJniObject of(jint arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
		jstring getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1);
		jint getValue();
		QAndroidJniObject range(__JniBaseClass arg0);
		jstring toString();
	};
} // namespace java::time::chrono

