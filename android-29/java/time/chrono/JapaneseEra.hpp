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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JapaneseEra(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		JapaneseEra(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject of(jint arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
		jstring getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1);
		jint getValue();
		QAndroidJniObject range(__JniBaseClass arg0);
		jstring toString();
	};
} // namespace java::time::chrono

